#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 98, 56, 32, 20};
    int size = 5;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
