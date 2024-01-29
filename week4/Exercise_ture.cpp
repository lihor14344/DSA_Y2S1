#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Array
{
public:
    int arr[20];
    int i, elem, position, arr_size;
    int temp,j;

    void insert()
    {
        cout << "\n";
        cout << "Enter size of Array :";
        cin >> arr_size;
        cout << "Enter " << arr_size << " Array Elements: ";
        for (int i = 0; i < arr_size; i++)
        {
            cin >> arr[i];
        }
    }

    void insert_new_element()
    {
        cout << "Enter new Element to insert: ";
        cin >> elem;
        cout << "Where you want to add:";
        cin >> position;
        for (i = arr_size; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[i] = elem;
        arr_size++;
    }
    void display()
    {
        for (i = 0; i < arr_size; i++)
        {
            cout << "\t" << arr[i] << " ";
        }
        cout << endl;
    }
    void del()
    {
        cout << "Enter Element to delete : ";
        cin >> elem;
        for (i = 0; i < arr_size; i++)
        {
            if (arr[i] == elem)
            {
                for (int j = i; j < arr_size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                arr_size--;
                break;
            }
        }
    }
    void search()
    {
        int search;
        string answer;
        cout << "What number do you want to search: ";
        cin >> search;
        for (int i = 0; i < arr_size; i++)
        {
            if (search == arr[i])//1 == 1
            {
                cout << " The element: " << arr[i];
                cout << "\nDo you want to remove? (y/n): ";
                cin >> answer;

                if (answer == "y")
                {
                    for (int j = i; j < arr_size - 1; j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    arr_size--;
                    i--;
                }
                else
                {

                    break;
                }
            }
            else
            {
             
            }
        }
    }
    void Tree_step_for_descending()
    {
        for(i=0; i<arr_size; i++)
        {
            cout<< "i " << i;
            for(j=0; j<arr_size; j++)
            {
                if(arr[j]<arr[i])
                {
                    cout<<"\t j:" << j << "\t" << "arr_ind [i] " << i << ": "<< arr[i];
                    cout<<" arr_ind [j]" << j << ": "<< arr[j]<<"\t"<< arr[j] << "<" << arr[i];
                    cout<<" \tTrueswap(" << i<<"," << j << ")" << "\t";

                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                    for(int k=0; k<arr_size; k++)
                    {
                        cout<< arr[k] << " ";
                    }
                }
                else
                {
                    cout<<"\t j:" << j << "\t" << "arr_ind [i] " << i << ": "<< arr[i] <<" arr_ind [j]" << j << ": "<< arr[j]<< " \t";
                    for(int k=0; k<arr_size; k++)
                    {
                        cout<< arr[k] << " ";
                    }
                }
                cout << endl;
            }
        }
    }
    void Tree_step_for_ascending()

//     void sort_ascending_order(){
//         for(i=0; i<arr_size; i++){
//             for(j=0; j<arr_size; j++){
//                 if(arr[j]<arr[i]){
//                     temp   = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }
//             }
//         }
//     }
//     void sort_descending_order(){
//         for(i=0; i<arr_size; i++){
//             for(j=0; j<arr_size; j++){
//                 if(arr[j]>arr[i]){
//                     temp   = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }
//             }
//         }
//     }

};

int main()
{
    Array arr;
    int op;
    do
    {
        cout << "-----------------------------------------------------\n";
        cout << "\t\t please choose one \n";
        cout << "\n";
        cout << "\t 1.Insert \n";
        cout << "\t 2.Insert new element \n";
        cout << "\t 3.Display \n";
        cout << "\t 4.Delete \n";
        cout << "\t 5.Search \n";
        cout << "\t 6.sort Tree_step_for_descending \n";
        cout << "\t 7.sort Tree_step_for_ascending \n";
        cout << "\n";
        cout << "\t Enter number that you want to know: ";
        cin >> op;
        cout << "\n";
        switch (op)
        {
        case 1:
            cout << "\t Insert \t\n";
            arr.insert();
            break;
        case 2:
            cout << "\t Insert new element \t\n";
            arr.insert_new_element();
            break;
        case 3:
            cout << "\t Display \t\n";
            arr.display();
            break;
        case 4:
            cout << "\t Delete \t\n";
            arr.del();
            break;
        case 5:
            cout << "\t Search \t\n";
            arr.search();
            break;
        case 6:
            cout << "\t Sort : Tree step descending \t\n";
            arr.Tree_step_for_descending();
            break;
        }

        // case 7:
        //     cout << "\t Sort \t\n";
        //     arr.sort_ascending_order();
        //     break;
        
    } while (op !=0 );

    return 0;
}