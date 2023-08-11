#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;
#define rand_in(n, m) ( rand()%(m-n) +1 + n)
int32_t main(){
    srand(time(0));
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    freopen(  "input.txt", "w", stdout);
    int t = 100; int len  = 10000;
    cout << t << '\n';
    while(t--){
        len = rand_in(1,10);
        rep(i, 1, len-1){
            cout << char('a'+rand_in(0,25));
        }
        cout << '\n';
    }
return 0;
}