#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    int count[5] = {0};
    for(char a:s)
    {
        if(a == 'E' || a == 'e')
        {
            count[0]++;
        }
        else if(a == 'G' || a == 'g')
        {
            count[1]++;
        }
        else if(a == 'Y' || a == 'y')
        {
            count[2]++;
        }
        else if(a == 'P' || a == 'p')
        {
            count[3]++;
        }
        else if(a == 'T' || a == 't')
        {
            count[4]++;
        }
    }
    int possible = 1000000;
    for(int a:count)
    {
        if(a<possible)
        {
            possible = a;
        }
    }
    cout<< possible;
    return 0;
}