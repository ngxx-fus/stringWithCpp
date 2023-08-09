#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
//nC2
#define _C2_(n) (n*(n-1)/2.0)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

int processing(string inp){
    int result = inp.size();
    unordered_map<char, int> um;
    for(auto c:inp) um[c]++;
    for(auto p:um) if(p.second > 1) result += _C2_(p.second);
return result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int testcase; cin >> testcase;
    string inp;
    while (testcase--){
        cin >> inp;
        cout << processing(inp) <<'\n';
    }
    
return 0;
}
 
