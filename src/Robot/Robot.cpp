#include<Robot.hpp>

Robot::Robot(std::string f) : face(Face(f))
{
    currentRow = 0;
    currentCol = 0;

    updateSpeed();
}

Robot::Robot(int row, int col, std::string f) : currentRow(row), currentCol(col), face(Face(f))
{
    if(currentRow > 4 || currentRow < 0)
    {
        std::cerr << "Robot is outside range Row : " << row << std::endl;
        if (currentRow > 4)
            currentRow = 4;
        else
            currentRow = 0;
    }
    if(currentCol > 4 || currentCol < 0)
    {
        std::cerr << "Robot is outside range Column : " << col << std::endl;
        if (currentCol > 4)
            currentCol = 4;
        else
            currentCol = 0;
    }
    updateSpeed();
}

void Robot::move()
{
    //Limit the row and col to 5
    currentRow += speedRow;
    currentCol += speedCol;

    if (currentRow > 4)
        currentRow = 4;
    else if (currentRow < 0)
        currentRow = 0;

    if (currentCol > 4)
        currentCol = 4;
    else if (currentCol < 0)
        currentCol = 0;
}

void Robot::report()
{
    printf("Output: %d,%d,%s\n", currentRow, currentCol, face.returnFace().c_str());
}

void Robot::left()
{
    face.rotateLeft();
    updateSpeed();
}

void Robot::right()
{
    face.rotateRight();
    updateSpeed();
}

int Robot::getRow()
{
    return currentRow;
}

int Robot::getCol()
{
    return currentCol;
}

std::string Robot::getFace()
{
    return face.returnFace();
}

void Robot::updateSpeed()
{
    if (face.returnFace() == "NORTH")
    {
        speedRow = 0;
        speedCol = 1;
    }
    else if (face.returnFace() == "SOUTH")
    {
        speedRow = 0;
        speedCol = -1;
    }
    else if (face.returnFace() == "WEST")
    {
        speedRow = -1;
        speedCol = 0;
    }
    else if (face.returnFace() == "EAST")
    {
        speedRow = 1;
        speedCol = 0;
    }
}
