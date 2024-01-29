#include <iostream>
using namespace std;

class myfriend
{
    // access specifier
    public:

    // data member
    string name;

    // member function
    void printname()
    {
        cout << "Her name is " <<name;
    }
};

int main()
{
    // declare an object of class myfriend
    myfriend f1;

    // accessing data member
    f1.name = "lika";

    // accessing  member fuction
    f1.printname();
    
    return 0;
}