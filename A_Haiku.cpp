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
    string s1;
    getline(cin, s1);
  
    string s2;
    getline(cin, s2);
    string s3;
    getline(cin, s3);
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < s1.size();i++)
    {
        if (s1[i] == 'a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            cnt1++;
        }
    }
    // cout << cnt1 << nl;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
        {
            cnt2++;
        }
    }
    // cout << cnt2 << nl;
    for (int i = 0; i < s3.size(); i++)
    {
        if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
        {
            cnt3++;
        }
    }
    // cout << cnt3 << nl;
    if(cnt1==5 && cnt2==7 && cnt3==5)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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