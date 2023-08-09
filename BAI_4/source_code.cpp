#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

string name_processing(string inp){
    vector<string> vstr;
    //remove blank space
    stringstream ss(inp);
    while(ss>>inp) vstr.push_back(inp);
    //to standardize the Upper/Lower case
    for(auto &s:vstr){
        for(auto &c:s) c = tolower(c);
        s[0] = s[0] - 'a' + 'A';
    }
    inp.clear();
    inp += vstr.back();
    inp.push_back(',');
    rep(i, 0, vstr.size()-2) {
        inp.push_back(' ');
        inp += vstr[i];
    }
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
        inp = name_processing(inp);
        cout << inp << "\n";
    }
return 0;
}