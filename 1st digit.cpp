#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long long x ;
    cin >> x ;
    short s = x/1000 ;
    if (s%2==0)
    {
        cout << "EVEN" ;
    }
    else
    {
        cout << "ODD" ;
    }
    return 0 ;
}
