#include <string>
class Face
{
    std::string face;

    public:
        Face(std::string f);
        void rotateRight();
        void rotateLeft();
        std::string returnFace();
};
