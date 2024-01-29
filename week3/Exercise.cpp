#include <iostream>
using namespace std;
class Array
{
    public:
        int array_size;
        int array[20];
        int i;
    void inputElement()
    {
        cout << "Enter the Size of Array : "; cin >> array_size;
        for (i =0; i<array_size; i++)
        {
            cout << "Enter the elements "<< i+1 << " : "; cin >> array[i];
        }
    }
    void displayElement()
    {
        cout << "Array Elements : ";
        for ( i=0; i<array_size; i++ )
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void insertElement(int position, int value)
    {
        if (position < 0 || position > array_size)
        {
            cout << "Invalid position for insertion."<<endl;
            return;
        }

        for (i=array_size; i>position; i--)
        {
            array[i] = array[i-1];
        }
        // insert new element at the spedified position
        array[position] = value;
        // increase array size after insertion
        array_size++;
    }
};

int main()
{
    Array My_Array;

    My_Array.inputElement();
    My_Array.displayElement();

    char insertMore;
    do
    {
        int posistion, value;
        cout << "Enter the positioin or index that you wnat to insert : "; cin >> posistion;
        cout << "Enter the value of the element : "; cin >> value;

        My_Array.insertElement(posistion, value);
        My_Array.displayElement();

        cout << "If you want to insert more just enter (A or a) : "; cin >> insertMore;
    }while (insertMore == 'A' || insertMore == 'a');

    return 0;
}