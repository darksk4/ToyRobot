#include<iostream>
#include<Face.hpp>

class Robot
{
    int currentRow;
    int currentCol;

    int speedRow;
    int speedCol;

    Face face;

    public:
        Robot(std::string f);
        Robot(int row, int col, std::string f);

        void move();
        void report();
        void left();
        void right();
        int getRow();
        int getCol();
        std::string getFace();
    private:
        void updateSpeed();
};

