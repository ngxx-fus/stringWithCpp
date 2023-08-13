#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
bool cmp(pi a, pi b){
    return a.se < b.se;
}
 
int num(char c){
    return c - '0';
}
 
void TC(){
   string s; int k; cin >> s >>k;
   int res = 0;
   for(int i = 0; i < s.length(); i++){
        int cnt[256]={0};
        ms(cnt, 0);
        int dem = 0;
        for(int j = i; j < s.length(); j++){
            if(cnt[s[j]] == 0) ++dem;
            if(dem == k){
                res ++;
            }
            else if(dem > k)
                break;
            cnt[s[j]]++;
        }
   }
   cout << res << endl;
}
 
int main(){
    //freopen("input.txt","r", stdin);
    //freopen("correct_output.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        TC();
    }
}