#include<iostream>
using namespace std;

class NumberArray {
private:
    int array[10];
    int i, elem, pos, arr_size;
public:
    void sizeforarr() {
        cout <<"========================================================="<<endl;
        cout << "Enter the size for array :";
        cin >> arr_size;
        cout << "Enter " << arr_size << " Array Elements:";

        // Insert elements into the array
        for (i = 0; i < arr_size; i++) {
            cin >> array[i];
        }
    }

    void insertElement() {
        cout<<"=========================================================="<<endl;
        cout << "\nEnter element to insert :";
        cin >> elem;
        cout << "\n=====================At what position ?================== "<<endl;
        // Adding new element regarding the position
        cout<<"\n *** Enter element to insert any position :";cin >> pos;
        if (arr_size == 10) {
            cout << "Array is full. Cannot insert any position.\n";
            return;
        }
    for (i = arr_size; i > pos; i--) {
            array[i] = array[i - 1];
        }
        array[i] = elem;
        arr_size++;
    }

    

    // Function to insert an element at the beginning
    void insertAtBeginning() {
      cout<< "\n================== Insert at the beginning ==================="<<endl;
        cout << "\n *** Enter element to insert at the beginning :";
        cin >> elem;

        if (arr_size == 10) {
            cout << "Array is full. Cannot insert at the beginning.\n";
            return;
        }

        for (i = arr_size; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = elem;
        arr_size++;

        cout << "\n<  Element inserted at the beginning successfully.    >\n";
    }
    



    // Function to insert an element at the end
    void insertAtEnd() {
      cout<<"\n========================Insert at the end ===================="<<endl;
        cout << "\n *** Enter element to insert at the end :";
        cin >> elem;

        if (arr_size == 10) {
            cout << "Array is full. Cannot insert at the end.\n";
            return;
        }

        array[arr_size] = elem;
        arr_size++;

        cout << "\n<  Element inserted at the end successfully.\n";
    }

    // Function to delete an element at the specified position
    void deleteElement() {
      cout<<"\n=====================Delete Any Position/Beginning/Ending==============="<<endl; 
        cout << "\n *** Enter any position to delete :";
        cin >> pos;

        if (pos < 0 || pos >= arr_size) {
            cout << "Invalid position!\n";
            return;
        }

        for (i = pos; i < arr_size - 1; i++) {
            array[i] = array[i + 1];
        }

        arr_size--;

        cout << "\n<  Element deleted successfullyat any position.     >\n";
    }
    
    
    
    // Function to delete an element at the beginning
    void deleteAtBeginning() {
        if (arr_size == 0) {
            cout << "Array is empty. Cannot delete from the beginning.\n";
            return;
        }

        for (i = 0; i < arr_size - 1; i++) {
            array[i] = array[i + 1];
        }

        arr_size--;

        cout << "\n<  Element deleted from the beginning successfully.    >\n";
    }

    // Function to delete an element at the end
    void deleteAtEnd() {
        if (arr_size == 0) {
            cout << "\nArray is empty. Cannot delete from the end.\n";
            return;
        }

        arr_size--;

        cout << "\n<  Element deleted from the end successfully.  >\n";
    }
    // Function to display the array elements
    void display() {
        cout << "\n The new array is :";
        for (i = 0; i < arr_size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    // Function to find non-duplicate elements in the array
  void findNonDuplicate() {
    
    cout << "\nNon-duplicate elements: ";
    bool isDuplicate;
    for (int i = 0; i < arr_size; i++) {
      isDuplicate = false;
      for (int j = 0; j < i; j++) {
        if (array[i] == array[j]) {
           isDuplicate = true;
          break;
        }
      }
      if (!isDuplicate) {
        
        cout << array[i] << " ";
      }
    }
    cout << endl;
  }
   // Function to find duplicate elements in the array
  void findDuplicate() {
    cout<<"\n=================================Research Duplicate and Non Duplicate Element ==================================="<<endl;
    cout << "\nDuplicate elements: ";
    for (int i = 0; i < arr_size; i++) {
      for (int j = i + 1; j < arr_size; j++) {
        if (array[i] == array[j]) {
          cout << array[i] << " ";
          break; // To avoid printing duplicates multiple times
        }
        
      }
     
    }
    cout << endl;
  }
   
   void sort_bubble(){
    system("cls");
    int max_size, i,j, temp, arr_size;
    max_size = 10;
    int arr[max_size];
    // Algorithm for set size and sert element to array 
    cout<<"Enter the size for array:";
    cin>>arr_size;
    cout<<"Enter "<<arr_size<<" Array Element:";
    for(int i=0; i<arr_size; i++){
        cin>>arr[i];
    }
    cout<<"Unordered array :";
    for(i=0; i<arr_size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    // Algorithm for buddle sort Descending 
    for(i = 0; i<arr_size; i++)
    {
        for(j=0;j<arr_size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Display array after apply Algorithm for boddle sort: Descending 
    cout<<"The Decending Element in array :";
    for(i=0 ; i<arr_size;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    // Algorithm for buddle sort Asending 
    for(i = 0 ; i<arr_size; i++)
    {
        for(j=0; j<arr_size; j++)
        {
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Display array after apply Algorithm for buddle sort : Acending 
    cout<<" The Acending Element in Array: ";
    for(i=0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};

int main() {
    NumberArray ar;
    ar.sizeforarr();
    ar.insertElement();
    ar.insertAtBeginning();
    ar.insertAtEnd();
    ar.display();
    ar.deleteElement();
    ar.deleteAtBeginning();
    ar.deleteAtEnd();
    ar.display();
    ar.findDuplicate();
    ar.findNonDuplicate();
    ar. sort_bubble();
    return 0;
}