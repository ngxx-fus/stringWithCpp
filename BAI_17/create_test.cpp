#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define rand_in(min, max) (rand()%(max-min)+min)
inline int64_t gcd(int64_t a,int64_t b){int64_t r;while(b){r=a%b;a=b;b=r;}return a;}
inline int64_t lcm(int64_t a,int64_t b){return a/gcd(a,b)*b;}
#define len(s) s.size()
#define st first
#define nd seccond
template<class T> using vct = vector<T>;
typedef std::pair< int, int > ii;


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input.txt", "r", stdin);
    freopen(  "input.txt", "w", stdout);
    cout << 100 << '\n';
    rep(t,1,100) {rep(i, 1, 1000) cout << char('a' + t%26); cout << ' ' << 1 << '\n';};
return 0;
}