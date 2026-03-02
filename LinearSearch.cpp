#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 8, 56, 24, 28};
    int size = 4;
    int target = 56;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == target)
        {
            cout << arr[i] << endl;
            break;
        }
    }
    cout << "Target match  ";
}