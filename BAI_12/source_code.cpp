#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define rand_in(n, m) ( rand()%(m-n) +1 + n) 
#define len(s) s.size()
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;
typedef std::pair< char, int > ci;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	freopen("output", "w", stdout);
	#endif
    int testcase; cin >> testcase;
    string inp;
    while(testcase--){
        cin >> inp;
        int flag = inp.size()-1;
        char val = inp.back();
        map< char,int > m;
        m[ inp.back() ] = len(inp)-1;
        rev(i, len(inp)-2, 0){
            auto it = m.lower_bound(inp[i]);//log(n)
            if(it == m.begin()){
                m[ inp[i] ] = i;
                continue;
            }
            while(it ==m.end() || it!=m.begin() && it->first >= inp[i] ){
                if( it->first == inp[i]) it->second = i;
                it--;
            }
            swap(inp[it->second], inp[i]);
            cout << inp << '\n';
            goto next_loop;
            // 2-0 (begin) 
            // 2-1
            // x <---- 3-2? (upper_bound)
        }
        cout << -1 << '\n';
        next_loop:
        continue;
    }
return 0;
}

/*
*

124359898
43
54321 -> 45321
5554321 -> 4555321
12345 -> x 
5545123534 -> 54551234
12345

1
12313122
1
71122334465566  

0
*/
