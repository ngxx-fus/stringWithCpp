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
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;
typedef  long long ll;

ll pow10(ll i, ll res = 1){
    while( i-- ) res *= 10;
    return res;
}

ll processing(string const &s){
    #define to_ll(c) ll(c-'0')
    ll max_number = 0, tmp_number = 0, last = 0;
    rev(i, len(s)-1, 0){
        if( isdigit(s[i]) ){
            tmp_number += ll(pow10(last++))*to_ll(s[i]);
        } else{
            max_number = max( max_number, tmp_number );
            last = 0, tmp_number = 0;
            
        }
    }
    return max_number;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen(  "input.txt", "r", stdin);
    //freopen(  "output.txt", "w", stdout);
    unsigned int test_case; cin >> test_case;
    for(string s; test_case && cin >> s; test_case--){
        cout << processing(s) << '\n';
    }
return 0;
}
