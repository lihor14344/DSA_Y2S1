#include <iostream>
using namespace std;

class car
{
    public:
    string brand;
    string  model;
    int year;

    // constructor with parametors 
    car( string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    // create obj of car and calling constructor with different values
    car c1("abc","x5",1969);
    car c2("def","x8",1999);

    // print value of the car 
    cout << c1.brand << " " << c1.model << " " << c1.year << endl;
    cout << c2.brand << " " << c2.model << " " << c2.year << endl;
    return 0;
}