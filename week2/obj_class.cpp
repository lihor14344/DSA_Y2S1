#include <iostream>
using namespace std;

// creating a class name"room"
class room
{
    public:
    int length;
    int breadth;
    int height;

    // function to calculate the area
    int calculateArea()
    {
        return length * breadth;
    }

    // function to calculate volume
    int calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    // create obj of room class
    room r1;

    // assign value to data members
    r1.length = 40;
    r1.breadth = 30;
    r1.height = 20;

    // calculate and display the are of the room
    cout << "Area of the room is : " << r1.calculateArea() << endl;
    // calculate and display the volume of the room 
    cout << "Volume of the room is : " << r1.calculateVolume() <<endl;
    return 0;
}