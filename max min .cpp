#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    int mn = a ;
    int mx = a ;
    if (b < mn)
    {
        mn = b ;
    }
    if (c < mn)
    {
        mn = c ;
    }
    if (b > mx)
    {
        mx = b ;
    }
    if (c > mx)
    {
        mx = c ;
    }
    cout << mn << " " << mx << endl ;
    return 0 ;
}
