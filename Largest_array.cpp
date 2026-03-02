#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 56, 89, 102, 98};
    int size = 5;
    int largest = INT_MIN;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest = " << largest << endl;
}
