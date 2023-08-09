#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

inline void to_uppercase(string &inp){
    for(char &p:inp) p=toupper(p);
    //toupper(c) =  p = ('a'<=p && p <= 'z')?(p-'a'+'A') : p;
}
inline void to_lowercase(string &inp){
    for(char &p:inp) p=tolower(p);
    // tolower(c) = p = ('A'<=p && p <= 'Z')?(p-'A'+'a') : p;
}

bool is_standard_name(){
    
}

string name_processing(string inp){
    stringstream ss(inp);
    vector<string> vstr;
    while(ss>>inp){
        to_lowercase(inp);
        inp.at(0) = inp.at(0) - 'a' + 'A' ;
        vstr.push_back(inp);
    }
    inp.clear();
    rep(i,0,vstr.size()-2){
        for(char c:vstr.at(i))inp.push_back(c);
        if(i == vstr.size()-2) inp.push_back(',');
        inp.push_back(' ');
    }
    to_uppercase(vstr.back());
    inp+= vstr.back();
    return inp;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int n; cin >> n;
    cin.ignore(1);
    string inp;
    while(n--){
        getline(cin, inp);
        cout << name_processing(inp) << '\n';
    }
return 0;
}