//"C:\Users\DUC TAN\AppData\Roaming\Sublime Text\Packages\User\mytemplate.sublime-snippet"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
//*(find_by_order(n)): return value of a[n + 1] with array counting from 1.
//s.order_of_key(val): return how many value strictly smaller than val.
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define reu(i, a, b) for(int i = (a), _b = (b); i <= _b; ++i) 
#define rep(i, a, b) for(int i = (a), _b = (b); i >= _b; --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define MASK(i) (1ll<<(i))
#define BIT(t, i) (((t)>>(i))&1)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
template <class T>
bool minimize(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
// /^o^/
template <class T>
bool maximize(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
//Declare:
int cnt[257];
string s;
void Input(){
    cin>>s;
}
//Functions:
 
void Solve(){
    for (auto x: s) cnt[x]++;
    int ans = cnt['a'];
    for (auto i = 'b'; i < 'z'; ++i){
        ans = abs(ans - cnt[i]);
    } 
    cout << ((ans <= 1)?1:0);
    /*
    Gộp từ ký tự lại VD: 
    ababababacccdd -> a: 5, b:4, c:3, d:2
    a sẽ ghép đôi với b -> còn dư 1 b chấp nhận được
    ký tự b này ghép với c, còn dư 2 ký tự c
    2 ký tự c này có thể ghép với 1-3 ký tự khác để hai ký tự liền kề không giống nhau
    */
}
 
int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    // if (fopen("input.txt", "r"))
    // freopen("input.txt", "r", stdin), freopen("ductan_output.txt","w", stdout);
    int t = 1; cin>>t;
    while (t--)
    Input(), Solve();
    return 0;
}