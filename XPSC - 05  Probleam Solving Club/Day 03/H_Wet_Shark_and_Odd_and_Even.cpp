#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    long long array[N];
    for(int i = 0; i < N; i++)
    {
        cin >> array[i];
    } 

    long long sum = 0; 
    
    for(int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    long long mn_value = INT_MAX;

    for(int i=0;i<N;i++)
    {
        if(array[i]%2!=0)
        {
            mn_value = min(mn_value,array[i]);
        }
    }

    if(sum%2==0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum-mn_value << endl;
    }

    return 0;
}
