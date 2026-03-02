#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 5, 1, 2, 3};
    int size = 5;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int c = 0; c < size; c++)
    {
        cout << arr[c] << " ";
    }

    return 0;
}
