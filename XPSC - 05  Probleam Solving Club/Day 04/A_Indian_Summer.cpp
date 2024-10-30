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
    
    int N;
    cin >> N;
    map<pair<string,string>,bool> mycode;
    for(int i=1;i<=N;i++)
    {
        string a,b;
        cin >> a >> b;
        mycode[{a,b}] = true;
    }

    cout << mycode.size() << endl;

    return 0;
}