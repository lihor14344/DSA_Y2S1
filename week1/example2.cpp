#include <iostream>
using namespace std;

int main()
{
    int num;
    int i;

    cout<< "Enter number to multiply : ";
    cin>>num;
    
    for (i=1;i<=10;i++)
    {
       
        cout<< i <<" x "<<num<<" = "<<num*i<<endl;
    }
    return 0;
}