#include<gtest/gtest.h>
#include<Face.hpp>

class FaceTest : public testing::Test
{
    void setUp()
    {

    }

    void TearDown()
    {

    }
};

TEST_F(FaceTest, BasicTestingLeftRotate)
{
   Face* face = new Face("SOUTH");
   face->rotateLeft();
   ASSERT_EQ(face->returnFace(), "EAST");
   face->rotateLeft();
   ASSERT_EQ(face->returnFace(), "NORTH");
   face->rotateLeft();
   ASSERT_EQ(face->returnFace(), "WEST");
}

TEST_F(FaceTest, BasicTestingRightRotate)
{
   Face* face = new Face("SOUTH");
   face->rotateRight();
   ASSERT_EQ(face->returnFace(), "WEST");
   face->rotateRight();
   ASSERT_EQ(face->returnFace(), "NORTH");
   face->rotateRight();
   ASSERT_EQ(face->returnFace(), "EAST");
}
