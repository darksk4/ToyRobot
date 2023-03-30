#include "Face.hpp"
#include <iostream>

Face::Face(std::string s) : face(s) {}

void Face::rotateLeft()
{
    if (face == "NORTH")
        face = "WEST";
    else if (face =="WEST")
        face = "SOUTH";
    else if (face == "SOUTH")
        face = "EAST";
    else if (face == "EAST")
        face = "NORTH";
    else
        std::cerr << "INVALID FACE" << std::endl;
}

void Face::rotateRight()
{
    if (face == "NORTH")
        face = "EAST";
    else if (face =="EAST")
        face = "SOUTH";
    else if (face == "SOUTH")
        face = "WEST";
    else if (face == "WEST")
        face = "NORTH";
    else
        std::cerr << "INVALID FACE" << std::endl;
}

std::string Face::returnFace()
{
    return face;
}
