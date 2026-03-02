#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int size = 5;

    for (int i = 0; i < size - 1; i++) // this loop decide position
    {
        int small = i;

        for (int j = i + 1; j < size; j++) // this loop decide where the smallest element place
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }

        swap(arr[i], arr[small]);
    }

    for (int c = 0; c < size; c++)
    {
        cout << arr[c] << " ";
    }

    return 0;
}
