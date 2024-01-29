#include <iostream>
using namespace std;
class Circle
{
private:
    float r;
public:
    void getData();
    float calculateArea();
    float calculateCircum();
};
void Circle::getData()
{
    cout << "Enter the Radius of Circle: ";cin >> r;
}
float Circle::calculateArea()
{
    return (3.14 * r * r);
}
float Circle::calculateCircum()
{
    return (2 * 3.14 * r);
}
int main()
{
    Circle c;
    c.getData();
    cout << "\nArea of Circle = " << c.calculateArea();
    cout << "\nCircumference of Circle = " << c.calculateCircum();
    cout << endl;
    return 0;
}