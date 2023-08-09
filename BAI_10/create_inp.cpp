#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define rand_in(n, m) ( rand()%(m-n) +1 + n)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    freopen(  "input.txt", "w", stdout);
    srand(time(0));
    cout << 10000 << '\n';
    rep(t, 1, 10000){
        int size = rand_in(900,1000); 
        rep(i, 1, size){
            cout << char('a'+rand_in(0,25));
        }
        cout << '\n';
    }
return 0;
}