#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[size];

    int position;
    cout<<"Enter the position where you want to add the element"<<endl;
    cin>>position;

    int element;
    cout << "enter the element that you want to insert" << endl;
    cin >> element;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    size++;

    for (int i = size - 1; i > position-1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position-1] = element;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}