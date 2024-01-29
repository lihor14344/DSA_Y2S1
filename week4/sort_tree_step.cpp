// Bubble sort in C++
#include <iostream>
using namespace std;
int main()
{
    system("cls");      // To clear the screen in Visual C++
    int max_size, i, j, temp, arr_size;
    max_size = 10;
    int arr[max_size];
// Algorithm for set size and insert element to array
    cout<<"Enter the Size for Array: ";
    cin>>arr_size;
    cout<<"Enter "<<arr_size<<" Array Elements: ";
    for(int i=0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    cout << "Unordered array : ";
    for(i=0; i<arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
// Algorithm for bubble sort: Descending
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
// Display array after apply Algorithm for bubble sort: Descending
    cout << "The Decending Elements in array: ";
    for(i=0; i<arr_size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;

return 0;
}

