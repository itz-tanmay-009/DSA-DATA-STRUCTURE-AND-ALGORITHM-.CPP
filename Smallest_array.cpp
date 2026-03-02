#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 45, 2, 87, 23};
    int size = 4;
    int smallest = INT_MAX; // return smallest num in the array
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest = " << smallest << endl;
}