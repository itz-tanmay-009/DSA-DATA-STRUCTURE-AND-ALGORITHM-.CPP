#include <iostream>
using namespace std;
int main()
{
    int arr[] = {22, 89, 56, 30, 78};
    int size = 5;
    int position, value;
    cout << "Enter position and value: ";
    cin >> position >> value;
    arr[position] = value;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}