#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
#include<cstdlib>
#include<fstream>
#include<Robot.hpp>

int main()
{

    std::string line;
    bool isPlaced = false;
    Robot* robot = nullptr;

    while (getline(std::cin, line))
    {
        if (line.rfind("PLACE", 0) == 0 && !isPlaced)
        {
            int row;
            int col;
            char a[256] ;
            std::sscanf(line.c_str(),"PLACE %d,%d,%s\n", &row, &col, a);
            isPlaced = true;
            robot = new Robot(row, col, a);

        }
        else if(isPlaced)
        {
            if (line == "RIGHT")
                robot->right();
            else if (line == "LEFT")
                robot->left();
            else if (line == "MOVE")
                robot->move();
            else if (line == "REPORT")
                printf("Output: %d,%d,%s\n", robot->getRow(), robot->getCol(), robot->getFace().c_str());
        }
    }

    delete robot;

    return 0;
}
