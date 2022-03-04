#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'A';
    int j = 1, n, k;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << "The Alphabets from A to Z are: \n";
    for (int i = 0; i <= n; i++)
    {
        cout << ch << j << " ";
        ch++;
        j = 2 * j;
    }
    return 0;
}