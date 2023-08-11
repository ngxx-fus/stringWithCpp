#include<bits/stdc++.h>
using namespace std;
#define aull(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define rand_in(min, max) (rand()%(max-min)+min)
inline int64_t gcd(int64_t a,int64_t b){int64_t r;while(b){r=a%b;a=b;b=r;}return a;}
inline int64_t lcm(int64_t a,int64_t b){return a/gcd(a,b)*b;}
#define len(s) s.size()
#define st first
#define nd seccond
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;
typedef unsigned long long int ull;

ull pow10(unsigned int n){
    ull res = 1;
    while(n--) res *= 10ULL;
    return res;
}
ull processing(string const &s){
    ull res = 0;
    unsigned int last = 0;
    rev(i, len(s)-1, 0)
        res += (isdigit(s[i]))?( (s[i]-'0')*pow10(last++) ):( last=0 );
    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen(  "input.txt", "r", stdin);
    //freopen(  "output.txt", "w", stdout);
    unsigned int testcase; cin >> testcase;
    for(string s; testcase && cin >> s; --testcase){
        cout << processing(s) << endl;
    }

return 0;
}