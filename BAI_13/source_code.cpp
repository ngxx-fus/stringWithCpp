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


bool processing(string &s){
    unordered_map< char, int > count_c;
    for(char c:s)  count_c[ c ] ++;
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen(  "input.txt", "r", stdin);
    //freopen(  "output.txt", "w", stdout);
    int testcase; cin >> testcase;
    string inp;
    while(testcase--){
        cin >> inp;
        cout << processing(inp) << '\n';
    }
return 0;
}