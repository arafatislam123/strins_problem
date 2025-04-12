// codeforces string related problem
//     problim link : https : // codeforces.com/contest/112/problem/A
//INPUT
// aaaa
// aaaA
// OUTPUT
// 0

#include <bits/stdc++.h>
    using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

void solve(int tc)
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int f = -1;
    for (int i = 0; i < s1.size();i++)
    {
        char ch1 = tolower(s1[i]);
        char ch2 = tolower(s2[i]);
        if(ch1<ch2)
        {
            f = 1;
            break;
        }
        else if(ch1>ch2)
        {
            f = 2;
            break;
        }
    }
    if(f==1)
    {
        cout << "-1" << nl;
    }
    else if(f==2)
    {
        cout << "1" << nl;
    }
    else
    {
        cout << "0" << nl;
    }
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}