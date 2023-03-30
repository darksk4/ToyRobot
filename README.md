# Problem
Create an application that simulate of a toy robot moving on a square table of dimensions 5 units x 5 units. There are no other obstructions
on the table surface. The robot is free to roam around the surface of the table, but must be prevented
from falling to destruction. Any movement that would result in the robot falling from the table must be prevented,
however further valid movement commands must still be allowed.

### Inputs
PLACE X,Y,F
MOVE
LEFT
RIGHT
REPORT

### Output

### Constraints
The toy robot must not fall off the table during movement. This also includes the initial placement of the toy robot. Any move that would cause the robot to fall must be ignored.


# Build

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)]()

Clone and go to the folder.

```sh
cmake -B build
cd build
make -j40
```

if you have ninja for fast compilation use this instead

```sh
cmake -B build -G Ninja
cd build
ninja
```

## Tech

This program uses a number of open source projects to work properly:

- [GTest/Gmock] - Testing framework
- [CMake] - cross-platform family of tools designed to build, test and package software
- [Ninja] - For fast compilation for the projects

