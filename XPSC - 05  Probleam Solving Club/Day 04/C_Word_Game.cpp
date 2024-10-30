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
        int N, M = 3;
        cin >> N;

        map<string, vector<int>> mycode;
        
        for(int i = 1; i <= M; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                string s;
                cin >> s;
                mycode[s].push_back(i);
            }
        }

        vector<int> myvalue(M + 1, 0);

        for(auto& [x, y] : mycode)
        {
            if(y.size() == 1)
            {
                myvalue[y[0]] += 3; 
            }
            else if(y.size() == 2)
            {
                myvalue[y[0]]++;
                myvalue[y[1]]++;
            }
        }

        for(int i = 1; i <= M; i++)
        {
            cout << myvalue[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
