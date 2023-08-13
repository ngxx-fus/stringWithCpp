/*
ĐỐi với cách này thì sẽ bị thiếu trường hợp:
VD:
abababababababababababababab 2
Thuật toán bên dưới sẽ ưu tiên loại thu hẹp cửa sổ lại đẫn dến thiếu trường hợp.
*/
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

int64_t processing(string const &s, int const &k){
    int result = 0;
    unordered_map<char, int> c; // count_char
    int first = 0, last = 0, total = 0;//a window which shifting in the string [first, last]
    c[ s[0] ] = 1; total = 1;
    while( first <= last && last+1 < len(s)){
        //expand
        if( last+1 < len(s) ){
            if( c[s[last+1]] == 0 ){
                if(total + 1 < k) ++last, ++c[s[last]], ++total;
                if(total + 1 == k) ++last, ++c[s[last]], ++total, ++result;
            }else{//c[s[last+1]] > 0
                ++last, ++c[s[last]], ++result;
                continue;
            }
        }
        //shrink
        if( first < last){
            if( c[first] > 1){
                --c[s[first]], ++first, ++result;
            }else{//c[first] = 1
                --total, --c[s[first]], ++first;
            }
        }
    }
return result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen(  "input.txt", "r", stdin);
    //freopen(  "output.txt", "w", stdout);
    int test_case, k; cin >> test_case;
    for(string s; test_case && cin >> s >> k; --test_case){
        cout << processing(s, k) << '\n';
    }
return 0;
}