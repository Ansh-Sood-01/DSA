#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[size];

    int position;
    cout << "enter the position that you want to delete" << endl;
    cin >> position;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = size - 1; i > position-1; i--)
    {
        arr[i-1] = arr[i];
    }

    size --;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}