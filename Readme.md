[![https://travis-ci.org/cstb/ifc-sdk](https://api.travis-ci.org/cstb/ifc-sdk.svg?branch=master)](https://travis-ci.org/cstb/ifc-sdk)
[![https://scan.coverity.com/projects/cstb-ifc-sdk](https://scan.coverity.com/projects/9373/badge.svg)](https://scan.coverity.com/projects/cstb-ifc-sdk)

[![Join the chat at https://gitter.im/cstb/ifc-sdk](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/cstb/ifc-sdk?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

TOC

1.	Software needed
2.	Download the source code
3.	Rapid overview of the steps needed for the creation of the generator files
4.	Linux and MacOSX
5.	Windows - Visual Studio
6.	Windows - MinGW command line
7.	Generating the documentation
8.	More help

---

This sofware is known to compile and run under the following OS/compilers :

-	Windows XP/Vista : g++ (MinGW), MSVC.
-	Linux : g++, clang
-	MacOSX : clang

---

1 Software needed
=================

To build this software you need cmake which is freely available for all platforms at : http://www.cmake.org

You will need at least CMake 2.4.6 or newer release of this software in order to generate the build generation files.

2 Download the source code
==========================

The source code is hosted on GitHub [https://github.com/cstb/ifc-sdk](https://github.com/cstb/ifc-sdk)

-	you can either download an archive (zip or tar.gz) of a tagged release : [https://github.com/cstb/ifc-sdk/releases](https://github.com/cstb/ifc-sdk/releases)
-	or checkout the source code :

```
   git clone git://github.com/cstb/ifc-sdk.git
```

3 Rapid overview of the steps needed for the creation of the generator files
============================================================================

1.	Install CMake
2.	Launch CMake
	1.	Specify where is the source code: "Where is the source code": ....../ifc-sdk
	2.	Specify where to build the binaries: "where to build the binaries": ....../ifc-sdk
	3.	Click on "Configure"
	4.	Select the generator If you select visual Studio 8 2005, sometimes CMake doesn't find the cmd.exe and you have to add in your system path the path to you windows\system32
	5.	Click on "Configure" until the "OK" button becomes enable  
	6.	Click on "Ok"

```
The generator has created in ....../ifc-sdk/build the required files to build the project
```

4 Linux and MacOSX
==================

4.1 full build procedure
------------------------

1.	make sure you have CMake installed and available on your path

	-	install package :

		-	ubuntu :

		```
		  ~ $ apt-get install cmake uuid-dev
		```

		-	homebrew :

		```
		  ~ $ brew install cmake
		```

	-	or download CMake from [http://cmake.org](http://www.cmake.org/download/)

2.	inside the ifc-sdk folder create a sub-folder called build (it can be any name and can even outside this ifc-sdk folder).

3.	from this directory call CMake to generate the makefiles using the following command:

	```
	build $ cmake ..
	```

	or

	```
	build $ cmake path_to_ifc-sdk_folder
	```

*Note* : Solaris needs an additional flag to compile (at least with SunStudio 11) you will need to issue the following command :

```
     build $ cmake -D CMAKE_CXX_FLAGS:STRING=-library=stlport4 ..
```

1.	You now should have a \``Makefile` in this folder
2.	launch `make` from this folder to perform the build
3.	on successfull build you should have the libraries and the binaries located in your ifc-sdk/build folder

From the command line :

```
ifc-sdk $ mkdir build
ifc-sdk $ cd build
build $ cmake ..
[...]
build $ make
[...]
build $ make install
[...]
```

or a one liner :

```
ifc-sdk $ mkdir build && cd build && cmake .. && make && make
[...]
```

4.2 Advanced configuration options
----------------------------------

CMake comes under unices with a text based configuration utility called ccmake (note the two c's) launching 'ccmake ..' will bring up a configuration utility where you can specify :

-	The build type : Debug, Release, etc.
-	The installation prefix : default to /usr/local ('make install' to install the headers and libraries)
-	If you want to enable the static build of the sdk
-	Where you want your executables and libraries generated
-	If you want to enable the tests (run them by calling `make test`\)

5 Windows - Visual Studio
=========================

5.1 full build procedure
------------------------

1.	make sure you have CMake installed or else download CMake from [http://cmake.org](http://www.cmake.org/download/)
2.	Launch CMake, This should open a window.
3.	You can now specify :
	-	where the source code is (the ifc-sdk folder)
	-	and where to build the binaries. It is usual to put them in a sub-folder of the source code called `build`
4.	Hit the 'Configure' button. this should popup a window asking to choose a generator (select your visual studio version here and hit 'ok').
5.	Hit the 'Configure' once again and click 'Ok' to close the application.
6.	You now should now have a `ifc2x3_sdk.sln` Visual Studio solution file inside your binary directory.
7.	open this solution from Visual Studio and generate the solution
8.	on successfull build you should have the libraries and the binaries located in your `ifc-sdk/build` folder. With the Visual Studio Generator from CMake the binaries are located in a sub-folder depending on the type of compilation requested (Debug, Release, etc.).

5.2 Advanced configuration options
----------------------------------

The CMake application has more configuration possibilities. Launch it again and you can specify :

-	The installation prefix : default to `C:/Program Files/ifc-sdk` (Generate the Project 'INSTALL' from Visual Studio to install the headers and libraries).
-	If you want to enable the static build of the sdk
-	Where you want your executables and libraries generated
-	If you want to enable the tests (run them by generating the Project `RUN_TESTS` from the Visual Studio)

6 Windows - MinGW command line
==============================

6.1 full build procedure
------------------------

It's basiccaly a mix of the two precedent parts.

Follow 5.1 up to step 4 but choosing 'MinGW - Makefiles' obviously. Then follow 4.1 from step 6 using 'mingw32-make.exe' instead of 'make'.

6.2 Advanced configuration options
----------------------------------

The CMake application has more configuration possibilities. Launch it again and you can specify :

-	The build type : Debug, Release, etc.
-	The installation prefix : default to `C:/Program Files/ifc-sdk` (`mingw32-make.exe install` to install the headers and libraries).
-	If you want to enable the static build of the sdk
-	Where you want your executables and libraries generated
-	If you want to enable the tests (run them by calling `mingw32-make.exe test`\)

7 Generating the documentation
==============================

There is a special target that CMake will create called `Documentation` that will generate the documention provided you have installed the tool called doxygen. It can be downloaded from [http://doxygen.org](http://doxygen.org). Documentation will be generated into the ifc-sdk/build/doc/html directory and the entry point is the 'index.html' file.

7.1 from Makefiles (Linux, MacOSX and MinGW generators)
-------------------------------------------------------

-	make Documentation, or
-	migw32-make.exe Documentation

7.2 from Microsoft Visual Studio IDE
------------------------------------

-	Generate the 'Documentation' project

8 More help
===========

For more information on CMake: http://www.cmake.org
