#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    deque<int> array(N);
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    } 

    int person = 1;
    int frist = 0, secend = 0;

    while(!array.empty())
    {
        int left,right,mx;
        left = array.front(),right = array.back(),mx;
        mx = max(left,right);
        if(person%2 != 0)
        {
            frist += mx;
        }
        else
        {
            secend += mx;
        }

        if(mx==left)
        {
            array.pop_front();
        }
        else
        {
            array.pop_back();
        }
        person++;
    }

    cout << frist << " " << secend << endl;

   

    return 0;
}