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
    //freopen(  "input.txt", "r", stdin);
    //freopen(  "output", "w", stdout);
    int n; cin >> n;
    cin.ignore(1);
    unordered_map<string, int> hashtable;
    string tmp;
    while(n--){
        getline(cin, tmp);
        if( hashtable[ tmp ]) cout << tmp << '\n';
        hashtable[ tmp ] ++;
    }
    cout << hashtable.size() << "\n";
return 0;
}