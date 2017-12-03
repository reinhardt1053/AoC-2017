Advent of Code
--------------
This repository contains my solutions to AoC 2017. 

Advent of Code is a series of small programming puzzles for a variety of skill levels. They are self-contained and are just as appropriate for an expert who wants to stay sharp as they are for a beginner who is just learning to code. Each puzzle calls upon different skills and has two parts that build on a theme.

More info: https://adventofcode.com

Dependencies
-----------------

CMake >= 2.8.0

Building
-------------

Create an "out of source" folder:

```
mkdir build
cd build
cmake ..
make
```

You'll find the binary in build/bin/.

If you want to generate an XCode project:

```
cd build
cmake -G Xcode ..
```






