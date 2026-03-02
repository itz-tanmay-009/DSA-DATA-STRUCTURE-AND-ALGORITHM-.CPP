#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int size = 5;
    for (int i = 1; i < size; i++)
    {
        int current_position = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current_position)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current_position;
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}