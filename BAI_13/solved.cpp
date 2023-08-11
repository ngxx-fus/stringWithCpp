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
 
bool check(string s){
	int a[26]={0};
	for(char x : s){
		a[x-'a']++;
	}
	int max_fre = *max_element(a, a+26);
	if(max_fre - 1 <= s.length() - max_fre){
		return true;
	}
	return false;
}
/*
Gọi max_fre: ký tự xuất hiện nhiều nhất 
Còn lại (len(s) - max_fre) ký tự có 2TH:
TH1: chỉ còn 1 loại ký tự,
		Nếu (len(s) - max_fre)  ít hơn 1 ký tự HOẶC bằng với max_fre thì ta có thể xếp lại thành chuỗi có 2 ký tự liền kề khác nhau.
		ababababababababab -> a:9, b:9
		ababababababababa -> a:9, b:8
		Còn lại, không thể!
TH2: còn lại hơn 1 loại ký tự, lúc này, (len(s) - max_fre) có thể lớn hơn *max_fre* nhiều
		Ta có thể luân phiên chèn các ký tự vào dãy max_fre ký tự xuất hiện nhiều nhất, khi đó sẽ tạo ra thêm vị trí mới để chèn vào.
		Ngược lại, nếu  (len(s) - max_fre) ít hơn  *max_fre-1* khi đó ta không thể đủ ký tự để chèn vào giữa mỗi ký tự xuất hiện nhiều nhất
		abaabcadcabeaccc ->a:6, b:3, c:5 
		ta có:  "aaaaaa"
		Chèn b vào giữa: "abababaaa"
		chèn c vào tiếp sau khi chèn b: "abababacacac"
		chèn tiếp: "abcabcabcacacac"
		Vì số lượng còn lại trong mỗi loại luôn bé hơn hoặc bằng *max_fre* nên ta luôn có chỗ chèn.
-> CÔng thức chung:
		possible: max_fre-1 <=  (len(s) - max_fre)
		impossible: eslse
		Ta có t 

*/
 
int main(){

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "1\n";
		else cout << "0\n";
	}
}
