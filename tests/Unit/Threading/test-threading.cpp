#include <thread>

#include <ifc2x3/all.h>
#include <ifc2x3/SPFReader.h>

#include <Step/CallBack.h>

#include "../../tests.h"

#include <sstream>
#include <fstream>



class ConsoleCallBack : public Step::CallBack
{
public:
    ConsoleCallBack() : _max(1) {}
    void setMaximum(size_t max) override {
        if (max==0) return;
        std::cerr << "max=" << max << std::endl;
        _max = max;
    }
    void setProgress(size_t progress) override
    {
        unsigned value = static_cast<unsigned>(std::floor(static_cast<double>(progress)/static_cast<double>(_max) * 100.));

        if ( ((value % 5) == 0)
             &&
             value > _last)
        {
            _last = value;
            std::cerr << _last << "%" << std::endl;
        }
    }
    bool stop() const override {return false;}

protected:
    size_t _max;
    unsigned _last {0};
};

void printId(  ifc2x3::ExpressDataSet *eds , int t)
{
    //std::this_thread::sleep_for (std::chrono::seconds(t));
    Step::RefLinkedList< ifc2x3::IfcRoot > & entities = eds->getAllIfcRoot();


    for (ifc2x3::IfcRoot &entity : entities)
    {
        if (!entity.isInited())
        {
            entity.inited();
            std::cerr << t;
        }
        else
        {
            std::cerr << ".";
        }
    }
    {
        std::cerr << std::endl << t << std::endl;
    }
}

int main (int n, char **p)
{
    ConsoleCallBack cb;
    ifc2x3::SPFReader reader;
    reader.setCallBack(&cb);
    if (n==2)
    {
        std::ifstream input(p[1]);

        input.seekg (0, input.end);
        long length = input.tellg();
        input.seekg (0, input.beg);

        bool result = reader.read(input, static_cast<unsigned>(length));

        TEST_ASSERT(result);

        ifc2x3::ExpressDataSet *eds = static_cast<ifc2x3::ExpressDataSet *>(reader.getExpressDataSet());

        TEST_ASSERT(eds);




        std::thread one(printId, eds, 1);
        std::thread two(printId, eds, 2);
        std::thread three(printId, eds, 3);
        std::thread four(printId, eds, 4);
        std::thread five(printId, eds, 5);
        std::thread six(printId, eds, 6);
        std::thread seven(printId, eds, 7);
        std::thread eight(printId, eds, 8);

        std::cerr << "main and all threads now execute concurrently..."<< std::endl;

        // synchronize threads:
        one.join();                // pauses until finishes
        two.join();               // pauses until finishes
        three.join();               // pauses until finishes
        four.join();               // pauses until finishes
        five.join();               // pauses until finishes
        six.join();               // pauses until finishes
        seven.join();               // pauses until finishes
        eight.join();               // pauses until finishes

        std::cerr << "all other threads completed.\n"<< std::endl;

    }

    std::cerr << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;}
