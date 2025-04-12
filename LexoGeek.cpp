```
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


        string s;
        cin >> s;
        
        int n = s.size();
        // reverse(s.begin(), s.end());
      
      
        // cout << s << endl;
        int cnt = 0;
        for (int i = n-1; i >0;i--)
        {
            if(s[i]>s[i -1])
            {
                swap(s[i], s[i -1]);
                cnt++;
                break;
            }
        }
        // cout << s << endl;
        if(cnt==0)
        {
            cout << "no answer" << nl;
        }
        else
        {
        // reverse(s.begin(), s.end());
        
        
        
        cout << s << endl;
        }
        
    }



int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc ;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}
```