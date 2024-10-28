#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int cnt_array[26] = {0};

    for(char value : s)
    {
        cnt_array[value-'a']++;
    }

    char missing = '\0';

    for(int i=0;i<26;i++)
    {
        if(cnt_array[i] == 0)
        {
            missing = 'a' + i;
            break;
        }
    }

    if(missing == '\0')
    {
        cout << "None" << endl;
    }
    else
    {
        cout << missing << endl;
    }

    return 0;
}