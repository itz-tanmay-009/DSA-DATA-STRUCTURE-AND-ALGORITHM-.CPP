#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter your array size";
    cin >> size;
    int arr[size];
    cout << "Enter your array elements here : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter yor target value : ";
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found = " << arr[i];
        }
    }
}
