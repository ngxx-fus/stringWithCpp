#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

string  processing(string inp){
    string result;
    unordered_map<char, int> appeared;
    for(auto c:inp) appeared[c]++;
    for(auto c:inp) if( appeared[c] == 1) result.push_back(c);
return result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int testcase; cin >> testcase;
    string inp;
    while(testcase--){
        cin >> inp;
        cout << processing(inp) << '\n';
    }
return 0;
}