#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    cin >> x;

    int val = x%10000;

    if(val < 10)
    {
        cout << "000" << val << endl;
    }
    else if(val < 100)
    {
        cout << "00" << val << endl;
    }
    else if(val < 1000)
    {
        cout << "0" << val << endl;
    }
    else
    {
        cout << val << endl;
    }

    return 0;
}