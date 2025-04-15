/* its leetcode proble
link:https://leetcode.com/problems/length-of-last-word/description/
Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.


*/

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> v;
    string s ;
    getline(cin, s);
    stringstream ss(s);       // ss is now a stream that contains the string s
    // cout << ss.str() << '\n'; // print the string in the stream
    string word;
    while (ss >> word)
    { // read words from the stream, almost like cin >> word
        v.push_back(word);
    }
    // So this is useful when you want to get all the words from a string one by one
    string sz = v.back();
    cout << sz.size() << endl;
    
}