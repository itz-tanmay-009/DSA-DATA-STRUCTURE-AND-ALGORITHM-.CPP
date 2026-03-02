#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {12, 78, 45, 56, 88,90};
    int size = 6;

    int place, value;
    cout << "Enter place and value: ";
    cin >> place >> value;

    for (int i = size; i > place; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[place] = value;
    size++;

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << ", ";
    }
}
