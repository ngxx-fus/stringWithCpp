#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

string create_number(int n, int s){
    string result, tmp;
    rep(i, 1, s/9) tmp.push_back('9');
    if( s%9 ) tmp.push_back(char('0' + s%9) );
    while(n-tmp.size()) tmp.push_back('0');
    result = tmp;
    result.push_back('\n');
    reverse( all(tmp) );
    if( tmp.at(0) == '0' ){
        tmp.at(0) = '1';
        tmp.at( n-int(s/9) - ((s%9)?1:0) )--;
    }
    result += tmp;
    return result;
}


void processing(int n, int s){
    if( n ==  1 && s==0){
        cout << "0 0";
        return;
    }
    if( (s == 0) || s > 9*n ) {
        cout << "-1\n-1\n";
        return;
    }
    cout << create_number(n,s) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input", "r", stdin);
    //freopen(  "output", "w", stdout);
    int m, //number digits
         s; //sum of digits
    cin >> m >> s;
    processing(m,s);
return 0;
}