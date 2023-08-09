#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

int count_words(string inp){
    stringstream ss(inp);
    int result = 0;
    while(ss >> inp) result++;
    return result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int testcase;   cin >> testcase;
    cin.ignore(1);
    string inp;
    while (testcase--){
        getline(cin, inp);
        cout << count_words(inp) << '\n';
    }
    
return 0;
}