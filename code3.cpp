#include <iostream>
using namespace std;
int main(void)
{
    int n, sum = 0;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}