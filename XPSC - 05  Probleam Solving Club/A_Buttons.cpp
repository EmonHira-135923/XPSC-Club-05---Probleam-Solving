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

    if(A>B)
    {
        cout << A+(A-1) << "\n";
    }
    else if(A==B)
    {
        cout << A+B << endl;
    }
    else
    {
        cout << B+(B-1) << "\n";
    }
    return 0;
}