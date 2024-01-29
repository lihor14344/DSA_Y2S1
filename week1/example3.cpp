#include <iostream>
using namespace std;
int main()
{
    int num;

    cout<< "Please input any number : ";
    cin>>num;

    cout<<"\n";

    if (num%2 == 0)
    {
        cout<< "The number "<<num<< " is the even number "<<endl;
    }
    else
    {
        cout<< "The number "<<num<< "is the odd number "<<endl;
    }
    cout<<"\n";

    return 0;
}