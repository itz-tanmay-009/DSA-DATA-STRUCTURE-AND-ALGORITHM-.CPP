#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = 4;
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    cout << "Product = " << product;
}
