#include <iostream>
using namespace std;
int main(void)
{
    int n, a = 1, b = 1;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << a << ",";
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= 2 * n + 1; j++)
        {
            if (j - a == i)
            {
                cout << j << " ";
                a = j;
                break;
            }
        }
    }
    return 0;
}