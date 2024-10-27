#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A,B;
    cin >> A >> B;

    int cnt = 0;

    for(int i=A;i<=B;i++)
    {
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}