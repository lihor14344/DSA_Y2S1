// #include <iostream>
// using namespace std;

// class Array
// {
// public:
//     int array_size;
//     int array[20];
//     int i;

//     void inputElement()
//     {
//         cout << "Enter the Size of Array : ";
//         cin >> array_size;
//         for (i = 0; i < array_size; i++)
//         {
//             cout << "Enter the elements " << i + 1 << " : ";
//             cin >> array[i];
//         }
//     }

//     void displayElement()
//     {
//         cout << "Array Elements : ";
//         for (i = 0; i < array_size; i++)
//         {
//             cout << array[i] << " ";
//         }
//         cout << endl;
//     }

//     void insertElement(int position, int value)
//     {
//         if (position < 0 || position > array_size)
//         {
//             cout << "Invalid position for insertion." << endl;
//             return;
//         }

//         for (i = array_size; i > position; i--)
//         {
//             array[i] = array[i - 1];
//         }

//         // Insert new element at the specified position
//         array[position] = value;

//         // Increase array size after insertion
//         array_size++;
//     }

//     void deleteElement(int position)
//     {
//         if (position < 0 || position >= array_size)
//         {
//             cout << "Invalid position for deletion." << endl;
//             return;
//         }

//         for (i = position; i < array_size - 1; i++)
//         {
//             array[i] = array[i + 1];
//         }

//         // Decrease array size after deletion
//         array_size--;
//     }
// };

// int main()
// {
//     Array My_Array;

//     My_Array.inputElement();
//     My_Array.displayElement();

//     char operation;
//     do
//     {
//         int position, value;
//         cout << "Enter operation (I/i for insert, D/d for delete): ";
//         cin >> operation;

//         switch (operation)
//         {
//         case 'I':
//         case 'i':
//             cout << "Enter the position to insert: ";
//             cin >> position;
//             cout << "Enter the value to insert: ";
//             cin >> value;
//             My_Array.insertElement(position, value);
//             break;

//         case 'D':
//         case 'd':
//             cout << "Enter the position to delete: ";
//             cin >> position;
//             My_Array.deleteElement(position);
//             break;

//         default:
//             cout << "Invalid operation. Please enter 'I' or 'D'." << endl;
//             break;
//         }

//         My_Array.displayElement();

//         cout << "If you want to perform more operations, enter (Y or y): ";
//         cin >> operation;

//     } while (operation == 'Y' || operation == 'y');

//     return 0;
// }



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
        cout << "Enter the Size of Array : ";
        cin >> array_size;
        for (i = 0; i < array_size; i++)
        {
            cout << "Enter the elements " << i + 1 << " : ";
            cin >> array[i];
        }
    }

    void displayElement()
    {
        cout << "Array Elements : ";
        for (i = 0; i < array_size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void insertElement(int position, int value)
    {
        if (position < 0 || position > array_size)
        {
            cout << "Invalid position for insertion." << endl;
            return;
        }

        for (i = array_size; i > position; i--)
        {
            array[i] = array[i - 1];
        }

        // Insert new element at the specified position
        array[position] = value;

        // Increase array size after insertion
        array_size++;
    }

    void deleteElement(int position)
    {
        if (position < 0 || position >= array_size)
        {
            cout << "Invalid position for deletion." << endl;
            return;
        }

        for (i = position; i < array_size - 1; i++)
        {
            array[i] = array[i + 1];
        }

        // Decrease array size after deletion
        array_size--;
    }

    int searchElement(int value)
    {
        for (i = 0; i < array_size; i++)
        {
            if (array[i] == value)
            {
                return i; // Return the position of the element if found
            }
        }

        return -1; // Return -1 if the element is not found
    }
};

int main()
{
    Array My_Array;

    My_Array.inputElement();
    My_Array.displayElement();

    char operation;
    do
    {
        int position, value, searchValue;
        cout << "Enter operation (I for insert, D for delete, S for search): ";
        cin >> operation;

        switch (operation)
        {
        case 'I':
        case 'i':
            cout << "Enter the position to insert: ";
            cin >> position;
            cout << "Enter the value to insert: ";
            cin >> value;
            My_Array.insertElement(position, value);
            break;

        case 'D':
        case 'd':
            cout << "Enter the position to delete: ";
            cin >> position;
            My_Array.deleteElement(position);
            break;

        case 'S':
        case 's':
            cout << "Enter the value to search: ";
            cin >> searchValue;
            int searchResult = My_Array.searchElement(searchValue);
            if (searchResult != -1)
            {
                cout << "Element found at position: " << searchResult << endl;
            }
            else
            {
                cout << "Element not found in the array." << endl;
            }
            break;

        default:
            cout << "Invalid operation. Please enter 'I', 'D', or 'S'." << endl;
            break;
        }

        My_Array.displayElement();

        cout << "If you want to perform more operations, enter (Y or y): ";
        cin >> operation;

    } while (operation == 'Y' || operation == 'y');

    return 0;
}
