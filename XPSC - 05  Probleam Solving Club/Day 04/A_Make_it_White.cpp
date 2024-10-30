#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int val;
        cin >> val;

        string word;
        cin >> word;

        int frist_pos,secend_pos;
        frist_pos = -1,secend_pos = -1;

        frist_pos = word.find('B');
        secend_pos = word.rfind('B');
        
        int ans = (secend_pos - frist_pos)+1;

        cout << ans << endl; 

        // cout << frist_pos << " " << secend_pos << endl;
    }

    return 0;
}