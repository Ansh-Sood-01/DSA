#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i<size; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}