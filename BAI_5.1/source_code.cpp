#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define is_letter(c) (('a'<=c && c<='z')||('A'<=c && c<='Z'))
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    string s; cin >> s;
    unordered_set<char>set_;
    for(auto c:s) 
        if( is_letter(c) ) set_.insert( tolower(c) );
    if( set_.size() == 'z'-'a'+1 ) cout << "YES"; else cout << "NO";
return 0;
}