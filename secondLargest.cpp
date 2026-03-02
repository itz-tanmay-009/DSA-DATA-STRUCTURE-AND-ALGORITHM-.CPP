#include <iostream>
using namespace std;
int main()
{
    int arr[] = {42, 56, 23, 17};
    int size = 4;
    int Largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > Largest)
        {
            secondLargest = Largest;
            Largest = arr[i];
            // cout << arr[i] << ",";
        }
        else if (arr[i] > secondLargest && arr[i] != Largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "First largest = " << Largest << endl;
    cout << "Second Largest elemnt is = " << secondLargest;
}
