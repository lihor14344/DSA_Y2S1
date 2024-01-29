#include <iostream>
using namespace std;

void num(int a, int b)
{

    if ( a > b)
    {
        cout << "The maximun number is " << a << endl;
    }
    else 
    {
        cout << "The maximun number is " << b << endl;
    }
}

int main()
{
    num(20,10);
    return 0;
}