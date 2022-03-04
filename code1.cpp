#include <iostream>
using namespace std;
int main(void)
{
    int count = 0, n;
    cout << "enter the range" << endl;
    cin >> n;
    for (int i = 0; i < n; i = i + 2)
    {
        cout << i;
        cout << count;
        count++;
    }

    return 0;
}