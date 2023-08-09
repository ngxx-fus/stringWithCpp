#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;
#define to_num(c) int(c-'0')

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    string inp;
    int n; cin >> n;
    while(n--){
            cin >> inp;
            for(int i = 0, j = inp.size()-1; i<=j; i++,j--){
                if( inp[i]!=inp[j] || !isdigit(inp[i]) || !isdigit(inp[j]) || to_num(inp[j])%2 || to_num(inp[i])%2 ){
                    cout << "NO\n";
                    goto END_LOOP;
                }
            }
            cout << "YES\n";
            END_LOOP:
            continue;
    }
return 0;
}