#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[size];

    int element;
    cout << "enter the element that you want to insert" << endl;
    cin >> element;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    size++;

    arr[size-1] = element;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}