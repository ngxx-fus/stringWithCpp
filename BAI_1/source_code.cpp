#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    stringstream ss(text);
    string result;
    for(string s; ss >> s;){
        if( s.compare(pattern) == 0 )continue;
        result += s;
        result.push_back(' ');
    }
    cout << result;
return 0;
}


/*

AAAAAABCABAA
         AABAA
AAB
BAA
AAA

*/