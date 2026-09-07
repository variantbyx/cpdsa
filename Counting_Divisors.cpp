// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     int cnt = 0;

//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if (i == n / i)
//             {
//                 cnt++;
//             }
//             else
//                 cnt += 2;
//         }
//     }

//     cout << cnt << "\n";
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 8;
// bool prime[N];
// void sieve()
// {
//     for(int i=0; i<N; i++)prime[i]=true;

//     prime[0]=prime[1]=false;

//     for(int i=2; i*i<N; i++){
//         if(prime[i]){
//             for(int j=i*i; j<N; j+=i)
//             prime[j]=false;
//         }
//     }
// }

const int N = 1e6 + 10;
int divs[N];

void sieve()
{

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            divs[j]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << divs[n] << "\n";
    }
    return 0;
}