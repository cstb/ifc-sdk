#include <iostream>

std::string getDataPathFromBinaryPath(const std::string& fileName)
{
	std::string::size_type slash1 = fileName.find_last_of('/');
	std::string::size_type slash2 = fileName.find_last_of('\\');
	std::string binaryPath="";
	if (slash1==std::string::npos)
	{
		if (slash2!=std::string::npos)
			binaryPath = std::string(fileName,0,slash2);
	} else if (slash2==std::string::npos)
		binaryPath = std::string(fileName,0,slash1);
	else
		binaryPath = std::string(fileName, 0, slash1>slash2 ?  slash1 : slash2);

	if (! binaryPath.empty())
		binaryPath += "/";

	if ( (binaryPath.find("Debug")!= std::string::npos) || (binaryPath.find("debug")!= std::string::npos)){
		binaryPath += "../";
	} else 	if ( (binaryPath.find("Release")!= std::string::npos) || (binaryPath.find("release")!= std::string::npos)){
		binaryPath += "../";
	}
	binaryPath += "../data";
	return binaryPath;
}

