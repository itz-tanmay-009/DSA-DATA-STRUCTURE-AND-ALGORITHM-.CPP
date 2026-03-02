#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;
    int i = 0;
    int j = size - 1;

    for (int k = 0; k < size; k++)
    {
        while (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int c = 0; c < size; c++)
    {
        cout << "Swapped = " << arr[c] << endl;
    }

    return 0;
}
