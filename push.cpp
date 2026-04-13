#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(40);
    cout << "Front inserted element is : " << q.front() << endl;
    q.pop();
    cout << "Front inserted element is : " << q.front() << endl;
    cout << "Front inserted element is : " << q.front() << endl;
    return 0;
}