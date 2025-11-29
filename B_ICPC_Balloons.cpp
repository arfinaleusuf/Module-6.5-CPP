#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int alpha[27] = {0};
        int len;
        cin >> len;
        string s;
        cin >> s;
        for (int i = 0; i < len; i++)
        {
            int ind = s[i] - 65;
            alpha[ind]++;
        }
        int balloon = 0;
        for (int i = 0; i < 26; i++)
        {
            if (alpha[i] == 1)
            {
                balloon += 2;
            }
            else if (alpha[i] > 1)
            {
                balloon = balloon + alpha[i] + 1;
            }
        }
        cout << balloon << endl;
    }
    return 0;
}