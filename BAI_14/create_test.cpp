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
    int t = 100; int len  = 0;
    cout << t << '\n';
    while(t--){
        len = rand_in(1,1000);
        cout << rand_in(1,9);
        rep(i, 1, len-1){
            cout << char('0'+rand_in(0,9));
        }
        cout << '\n';
    }
return 0;
}
//git config --global user.email msnp@outook.com.vn
//git config --global user.name ngxx-fus

