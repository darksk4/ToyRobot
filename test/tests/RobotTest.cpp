#include<gtest/gtest.h>
#include<Robot.hpp>

class RobotTest : public testing::Test
{
    void setUp()
    {

    }

    void TearDown()
    {

    }
};

TEST_F(RobotTest, BasicTesting)
{
    Robot robot = Robot("NORTH");
    robot.move();
    ASSERT_EQ(robot.getRow(), 0);
    ASSERT_EQ(robot.getCol(), 1);
    ASSERT_EQ(robot.getFace(), "NORTH");

}

TEST_F(RobotTest, BasicTestingRightRotate)
{
    Robot robot = Robot("NORTH");
    robot.left();
    ASSERT_EQ(robot.getRow(), 0);
    ASSERT_EQ(robot.getCol(), 0);
    ASSERT_EQ(robot.getFace(), "WEST");
}

TEST_F(RobotTest, BasicTestingRightRotateMultiple)
{
    Robot robot = Robot("NORTH");
    robot.left();
    robot.left();
    robot.left();
    robot.left();
    ASSERT_EQ(robot.getRow(), 0);
    ASSERT_EQ(robot.getCol(), 0);
    ASSERT_EQ(robot.getFace(), "NORTH");
}

TEST_F(RobotTest, ZigZag)
{
    Robot robot = Robot("NORTH");
    robot.right();
    robot.move();

    robot.left();
    robot.move();
    ASSERT_EQ(robot.getRow(), 1);
    ASSERT_EQ(robot.getCol(), 1);
    ASSERT_EQ(robot.getFace(), "NORTH");

    robot.right();
    robot.move();

    robot.left();
    robot.move();

    ASSERT_EQ(robot.getRow(), 2);
    ASSERT_EQ(robot.getCol(), 2);
    ASSERT_EQ(robot.getFace(), "NORTH");

    robot.right();
    robot.move();

    robot.left();
    robot.move();

    ASSERT_EQ(robot.getRow(), 3);
    ASSERT_EQ(robot.getCol(), 3);
    ASSERT_EQ(robot.getFace(), "NORTH");

    robot.right();
    robot.move();

    robot.left();
    robot.move();

    ASSERT_EQ(robot.getRow(), 4);
    ASSERT_EQ(robot.getCol(), 4);
    ASSERT_EQ(robot.getFace(), "NORTH");

    robot.right();
    robot.move();

    robot.left();
    robot.move();

    ASSERT_EQ(robot.getRow(), 4);
    ASSERT_EQ(robot.getCol(), 4);
    ASSERT_EQ(robot.getFace(), "NORTH");
}

TEST_F(RobotTest, BasicTestingWithPositionAndFace)
{
    Robot robot = Robot(1, 2, "EAST");
    robot.move();
    robot.move();
    robot.left();
    robot.move();
    ASSERT_EQ(robot.getRow(), 3);
    ASSERT_EQ(robot.getCol(), 3);
    ASSERT_EQ(robot.getFace(), "NORTH");
}

TEST_F(RobotTest, NegativeTestWithInitialPlacement)
{
    Robot robot = Robot(5, 5, "NORTH");
    ASSERT_EQ(robot.getRow(), 4);
    ASSERT_EQ(robot.getCol(), 4);
    ASSERT_EQ(robot.getFace(), "NORTH");
}

TEST_F(RobotTest, NegativeTestWithInitialPlacementNegativePlacement)
{
    Robot robot = Robot(-1, -1, "NORTH");
    ASSERT_EQ(robot.getRow(), 0);
    ASSERT_EQ(robot.getCol(), 0);
    ASSERT_EQ(robot.getFace(), "NORTH");
}

TEST_F(RobotTest, NegativeTestWithInitialPlacementWithLimitPosition)
{
    Robot robot = Robot(0, 0, "NORTH");
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    ASSERT_EQ(robot.getRow(), 0);
    ASSERT_EQ(robot.getCol(), 4);
    ASSERT_EQ(robot.getFace(), "NORTH");
}

TEST_F(RobotTest, NegativeTestWithInitialPlacementWithNegativeLimitPosition)
{
    Robot robot = Robot(0, 0, "SOUTH");
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    robot.move();
    ASSERT_EQ(robot.getRow(), 0);
    ASSERT_EQ(robot.getCol(), 0);
    ASSERT_EQ(robot.getFace(), "SOUTH");
}
