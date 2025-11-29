#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string ticket;
        cin >> ticket;
        int first = (ticket[0] - 48) + (ticket[1] - 48) + (ticket[2] - 48);
        int second = (ticket[3] - 48) + (ticket[4] - 48) + (ticket[5] - 48);
        if (first == second)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}