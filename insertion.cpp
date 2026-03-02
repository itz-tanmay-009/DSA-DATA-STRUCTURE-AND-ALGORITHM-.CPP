#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {12, 85, 23, 45, 36};
    int size = 5;
    int position, value;
    cout << "Enter arr position and value  ";
    cin >> position >> value;
    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    for (int c = 0; c <= size; c++)
    {
        cout << arr[c] << endl;
    }
}