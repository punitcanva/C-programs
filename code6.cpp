#include <iostream>
using namespace std;
int main(void)
{
    int n, sum = 1;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << sum << ",";
        sum = sum * 2;
    }
    return 0;
}