#include <iostream>
using namespace std;
int main()
{
    int arr[] = {25, 13, 56, 87, 13};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
            }
        }
    }
}