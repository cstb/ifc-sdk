TOC

1/ Software needed
2/ Rapid overview  of the steps needed for the creation of the generator files
3/ Unices  (linux, Solaris, HP, etc.) 
4/ Windows - Microsoft IDE
5/ Windows - MinGW command line
6/ generating the documentation
7/ More help

-----

This sofware is known to compile and run under the following OS/compilers

Windows XP/Vista : g++ 3.4.5(MinGW), MSVC 2003.Net, MSVC 2005.
Linux : g++ 3.4.5, g++ 4.1.1

-----

1/ Software needed

To build this software you need cmake which is freely available
for all platforms at :
http://www.cmake.org

You will need at least CMake 2.4.6 or newer release of this software
in order to generate the build generation files.

2/ Rapid overview of the steps needed for the creation of the generator files

1- Install CMake
2- Launch CMake
	2.1 Specify where is the source code: 
		"Where is the source code": ....../ifc2x3_sdk
	2.2 Specify where to build the binaries:
		"where to build the binaries": ....../ifc2x3_sdk
	2.3 Click on "Configure" 
	2.4 Select the generator
		If you select visual Studio 8 2005, sometimes CMake doesn't find the cmd.exe 
		and you have to add in your system path the path to you windows\system32 
	2.5 Click on "Configure" until the "OK" button becomes enable	
	2.4 Click on "Ok" 


The generator has created in ....../ifc2x3_sdk/build the required files to build the project

3/ Unices (linux, Solaris, HP, etc.) 

3.1/ full build procedure

1 - make sure you have CMake installed and available on your path
2 - either : 
   - extract the official zip or the snapshot file content and go to the ifc2x3_sdk folder
   - or checkout the source code from https://svn2.hosted-projects.com/cstb/IFC-SDK/trunk into a folder called ifc2x3_sdk 
3 - inside a this directory create a folder called build (it can be any name and can even outside this ifc2x3_sdk folder).
4 - from this directory call CMake to generate the makefiles using the following command:
    cmake .. ( or cmake "wherever is located your ifc2x3_sdk folder" )

    Note : Solaris needs an additional flag to compile (at least with SunStudio 11) you will need to issue the following command :
    cmake -D CMAKE_CXX_FLAGS:STRING=-library=stlport4 ..  

5 - You now should have a Makefile in this folder
6 - launch make from this folder to perform the build
7 - on successfull build you should have the libraries and the binaries located in your ifc2x3_sdk/bin folder

3.2/ more configuration

CMake comes under unices with a text based configuration utility called ccmake (note the two c's)
launching 'ccmake ..' will bring up a configuration utility where you can specify :
- The build type : Debug, Release, etc.
- The installation prefix : default to /usr/local ('make install' to install the headers and libraries)
- If you want to enable the static build of the sdk
- Where you want your executables and libraries generated
- If you want to enable the tests (run them by calling 'make test')

4/ Windows - Microsoft IDE

4.1/ full build procedure

1 - make sure you have CMake installed
2 - either : 
   - extract the official zip or the snapshot file content and go to the ifc2x3_sdk folder
   - or checkout the source code from https://svn2.hosted-projects.com/cstb/IITAS/SDK/trunk into a folder called ifc2x3_sdk 
3 - Launch CMake (actually the executables is called CMakeSetup.exe), This should open a window.
4 - You can now specify : 
     - where the source code is (the ifc2x3_sdk folder) 
     - and where to build the binaries. It is usual to put them in a sub-folder of the source code called 'build'
5 - Hit the 'Configure' button. this should popup a window asking to choose a generator (select your visual studio version here and hit 'ok').
6 - Hit the 'Configure' once again and click 'Ok' to close the application.
7 - You now should now have inside your binary directory ('build') a 'ifc2x3_sdk.sln' Visual Studio solution file.
8 - open this solution from Visual Studio and generate the solution
7 - on successfull build you should have the libraries and the binaries located in your ifc2x3_sdk/bin folder. With the Visual Studio Generator from CMake the bianries are located in a sub-folder depending on the type of compilation requested (Debug, Release, etc.).

4.2/ more configuration

The CMake application has more configuration possibilities. Launch it again and you can specify :
- The installation prefix : default to C:/Program Files/ifc2x3_sdk (Generate the Project 'INSTALL' from Visual Studio to install the headers and libraries).
- If you want to enable the static build of the sdk
- Where you want your executables and libraries generated
- If you want to enable the tests (run them by generating the Project 'RUN_TESTS' from the Visual Studio)

5/ Windows - MinGW command line

5.1/ full build procedure

It's basiccaly a mix of the two precedent parts.

Follow 4.1 up to step 6 but choosing 'MinGW - Makefiles' obviously.
Then follow 3.1 from step 5 using 'mingw32-make.exe' instead of 'make'.

5.2/  more configuration

The CMake application has more configuration possibilities. Launch it again and you can specify :
- The build type : Debug, Release, etc.
- The installation prefix : default to C:/Program Files/ifc2x3_sdk ('mingw32-make.exe install' to install the headers and libraries).
- If you want to enable the static build of the sdk 
- Where you want your executables and libraries generated
- If you want to enable the tests (run them by calling 'mingw32-make.exe test')

6/ generating the documentation

There is a special target that CMake will create called 'Documentation' that will generate the documention provided you have installed the tool called doxygen. It can be downloaded from http://doxygen.org. 
Documentation will be generated intp the ifc2x3_sdk/doc/html directory and the entry point is the 'index.html' file.

6.1/ from Makefiles (Unices and MinGW generators)
- make Documentation, or
- migw32-make.exe Documentation

6.2/ from Microsoft Visual Studio IDE
- Generate the 'Documentation' project 

7/ More help

For more information on CMake:
	http://www.cmake.org


