#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size;
    for (int x : arr)
    {
        size++;
    }
    cout << "Length of array is : " << " " << size << endl;
}