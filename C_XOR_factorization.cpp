#include <bits/stdc++.h>
using namespace std;

/*
some observations

a[i]<=n
xor(a[i])=n where i -> [1, k]
also sum(a[i])-> maximize where i -> [1, k]

if k==odd
then a[i]=n sum+=a[i]

a xor a = 0
0 xor a = a

a xor b = (a | b) - (a & b)

so for only k=even 
so we have to maxm sum(a[i])
choose the greater a[i]<=n

example 5 4
to maximize the sum from 0 to k we must fill with n
filling like n, n-1, n-2 and so on... up to k

5 5 4 1 = 5

but main step is
how to know till when we have to write some element in repitition 


 

*/

void solve()
{
    int n,k;
    cin>>n>>k;

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}