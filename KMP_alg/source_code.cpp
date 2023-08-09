/*
Given two strings, one is a text string, txt and other is a pattern string, pat. The task is to print the indexes of all the occurences of pattern string in the text string. For printing, Starting Index of a string should be taken as 1.
*/
#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;

vector<int> KMP(string text, string pattern){
    vector<int> result;
    vector<int> lps(pattern.size(), 0);
    //   lps[i] = the longest proper prefix of pat[0..i] which is also a suffix of pat[0..i].
    for(int len  = 0, i = 1;i < pattern.size();){
        if(pattern[len] == pattern[i]){
            lps[i++] = ++len;
        }else{
            if(len > 0 ) len = lps[len-1];
            else /*len==0*/lps[i++] = 0;
        }
    }
    //main processing
    int t = 0, p = 0; 
    while( (text.size()-t) >= (pattern.size()-p) ){
        if( text[t] == pattern[p] ) t++, p++;
        if( p == pattern.size() ){
            result.push_back(t-p);//found pattern at (t-p)
            p = lps[p-1];
        }else{
            if( t<text.size() && text[t] != pattern[p]){
                if( p > 0) p = lps[p-1];
                else t++; ////shilft-right to check next window.
            }
        }
    }
    return result;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen(  "input.txt", "r", stdin);
    //freopen(  "output", "w", stdout);
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    vector<int> result = KMP(text, pattern);
    if( result.empty() ) cout << -1;
    for(auto p:result) cout << p+1 << ' ';
return 0;
}


/*
AAAAAABCABAA
         AABAA
AAB
BAA
AAA

*/