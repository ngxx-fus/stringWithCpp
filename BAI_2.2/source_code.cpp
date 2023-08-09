#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

inline void convert_to_uppercase(string &s){
    for(char &p:s) p = ('A' <= p && p <= 'Z') ? char(p-'A'+'a') : p;
}

string name_processing(string inp){
    convert_to_uppercase(inp);
    string result;
    stringstream ss(inp);
    vector<string>vs;
    inp.clear();
    while(ss>>inp) vs.push_back(inp);
    result += vs.back();
    rep(i, 0, vs.size()-2) result.push_back(vs[i][0]);
    return result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int n; cin >> n;
    string inp; cin.ignore(1);
    unordered_map<string, int> um;
    while(n--){
        getline(cin, inp);
        inp =  name_processing(inp);
        cout << inp;
        if( um[inp]++ == 0 );
        else cout  << um[inp];
        cout <<"@gmail.com\n";
    }
return 0;
}

/*
5
NguYEN VAN maNH
 nGUYEN thuY LinH
nguyen VU MANH
NGUYEN THU linh
Hoang dinh NAM

*/