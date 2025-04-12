// prolem name :Sum of Digit is Palindrome or not
// problem from geeks for geeks 
// problem link:https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
// Input : 
// n = 56 
// Output : true 
// Explanation : The digit sum of 56 is 5 + 6 = 11.
//  Since, 11 is a palindrome number.Thus, answer is true.

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
    int n;
    cin >> n;
    int sum = 0;
    while(n!=0)
    {
        sum = sum + n % 10;

        n = n / 10;
    }
    string s = to_string(sum);
    string s2 = s;
    reverse(s.begin(), s.end());
    if(s==s2)
    {
        cout << "true" << nl;
    }
    else
    {
        cout << "false" << nl;
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