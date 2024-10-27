#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A,B,C;
    cin >> A >> B >> C;

    int sum = -1;

    for(int i=A;i<=B;i++)
    {
        if(i%C==0)
        {
            sum = i;
            break;
        }
    }
    cout << sum << endl;

    return 0;
}