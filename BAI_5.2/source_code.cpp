#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define is_letter(c) (('a'<=c && c<='z')||('A'<=c && c<='Z'))
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

int processing(string s){//count the difference letters
    unordered_set<char>set_;
    for(auto c:s) set_.insert(c);
    return set_.size();
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int n; cin >> n; cin.ignore(1);
    string s; int K;
    while (n--){
        cin >> s >> K;
        cout << (('z'-'a'+1 - processing(s) <= K) ? 1 : 0) << '\n';
    }
    
return 0;
}