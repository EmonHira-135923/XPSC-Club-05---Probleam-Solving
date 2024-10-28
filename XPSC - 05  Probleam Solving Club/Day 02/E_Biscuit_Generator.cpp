#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A,B;
    double T;

    cin >> A >> B >> T;

    int value = floor((T+0.5)/A);
    
    int cnt = value * B;

    cout << cnt << endl;

    return 0;
}
