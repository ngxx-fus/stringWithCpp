/*
Với thuật toán "trâu" - "vét cạn" -> ta xét các cặp (i,j) với i: 0->len(s)-1 và j: i -> len(s)-1 ĐPT O(n^2)
Là vị trí bắt đầu và kết thúc của một xâu con - một cửa sổ.
Tham lam: Với mỗi vị trí bắt đầu của cửa sổ (i) ta tìm vị trí kết thúc (j) ở đâu mà số loại ký tự đảm bảo K phần tử. 
Với cách này ta sẽ cố gắn kiểm tra dựa trên mảng count_char[char][index]=fre
Ta xây dựng mảng cộng dồn số lần xuất hiện cho mỗi ký tự từ 'a' -> 'z' tức 0->25.
Như vậy giá trị trong mảng này luôn không giảm -> ta có thể chặt nhị phân từ (i+1) -> (len(s)-1) để tìm (j) 
giá trị j - last trong phần code phía dưới nằm trong khoảng l = (i - first)+1 -> len(s)-1
với mid = (l+r)/2,  ta duyệt ch: 0 -> 25 kiểm tra số lượng ký tự trong khoảng (i->mid] hay (first->last] trong phần code bên dưới,
từ đó đếm xem có bao nhiêu loại ký tự trong [first->mid]
#define count_fre(c, f, l) ((f == 0)?(count_char[c][l]):(count_char[c][l]-count_char[c][f-1]))
cho ta biết số lần xuất hiện của ký tự thứ c trong bản chữ cái 'a' -> 'z'
c: 0 -> 25 tương ứng 'a' -> 'z'
f: first vị trí bắt đầu của xâu con
l: last vị trí cuối cùng của xâu con 
Độ phức tạp O(26)
-> độ phức tạp của ý tưởng này là test_case*n*log(n)*26
*/
#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, begin, end) for( int i = (begin); i <= (end); i++)
#define rev(i, begin, end) for( int i = (begin); i >= (end); i--)
#define rand_in(min, max) (rand()%(max-min)+min)
inline int64_t gcd(int64_t a,int64_t b){int64_t r;while(b){r=a%b;a=b;b=r;}return a;}
inline int64_t lcm(int64_t a,int64_t b){return a/gcd(a,b)*b;}
#define len(s) s.size()
#define st first
#define nd seccond
#define int int64_t
template<class T> using vct = vector<T>;
typedef std::pair< int, int > ii;

int find_last(vct<vct<int>>const &count_char, int const &k, int const &first, int l, int r,int mode){
    if( l > r || k == -1) return -1;
    //c :  ordered letter = to_index(c)
    #define to_index(c) int(c-'a')
    #define count_fre(c, f, l) ((f == 0)?(count_char[c][l]):(count_char[c][l]-count_char[c][f-1]))
    #define MAX 1
    #define MIN 0
    stack< pair<int,int> > s;
    int res = (mode == MAX)?(l-1):(r+1);
    s.push({l,r});
    while( !s.empty() ){
        int L = s.top().first, R = s.top().second; 
        s.pop();
        if( L >  R ) continue; 
        int count_type = 0, mid = (L+R)/2;
        //count the  letter's type
        rep(c, 0, 26-1) count_type += (count_fre(c, first, mid) != 0)?(1):(0);
        if(count_type == k){
            if(mode == MAX) {
                res = max(res, mid);
                s.push({mid+1, R});
            }else /*mode = MIN*/ {
                res = min(res, mid);
                s.push({L, mid-1});
            }
        }else{
            if(count_type > k) s.push({L, mid-1});
            else/*count_type < k*/ s.push({mid+1, R});
        }
    }
    return (res == l-1 || res == r+1)?(-1):res;
}

int processing(string s, int k){
    //declaration
    int result = 0;
    #define to_index(c) int(c-'a')
    vct< vct<int>> count_char(30,vct<int>(len(s)+4, 0));
    //count_char pre-processing
    count_char[to_index(s[0])][0] = 1;
    rep(i, 1, len(s)-1){
        for(int ch = 0; ch < 26; ch++)
            count_char[ch][i] = count_char[ch][i-1] + ((to_index(s[i]) == ch)?1:0);
    }
    //main processing
    rep(first, 0, len(s)-k){
        int last_min = find_last(count_char, k, first, first+k-1, len(s)-1, 0);
        int last_max  = find_last(count_char, k, first, first+k-1, len(s)-1, 1);
        //cout << first << " - " << last << '\n'; 
        if( last_min >= first ) result += (last_max - last_min+1);
    }
    return result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen(  "input.txt", "r", stdin);
    //freopen(  "output.txt", "w", stdout);
    int test_case; cin >> test_case;
    string s; int k;
    for(; test_case && cin >> s >> k; test_case--){
        cout << processing(s, k) << '\n';
    }
return 0;
}