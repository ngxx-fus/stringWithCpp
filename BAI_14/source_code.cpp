// Lỡ đọc lộn đề thấy tới 10000 chữ số
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
typedef std::vector< int > vi;
typedef std::pair< int, int > ii;
//--------------------------------------------------------
//only positive number
class big_num{
    private:
    string s;
    bool sign;
    public:
    inline int to_int_at(string const & s, int const & i) {return (i <s.size())?(s[i]-'0'):(0);}
    //write s as reverse odered number vd one hundred is written "001"
    big_num(string s = "0", bool sign = 0){ this->s = s, this->sign = sign; }
    //a normal number :)))
    big_num(int num){
        if(num < 0) sign = 1, num*= -1;
        s = to_string(num);
        reverse(all(s));
    }
    //return reference to "s"
    string &source_string(){return s;};
    //add 
    big_num operator+(big_num o){
        string res = "";
        int remanet = 0, residual = 0, sum_ = 0;
        // only positive number
        for(int i = 0; i < max(s.size(), o.s.size()) || residual; i++){
            //sum s[i] and o.s[i] (for any size of *s* and *o.s*)
            sum_ = to_int_at(s, i) + to_int_at(o.s, i);
            remanet =  ( residual + sum_) % 10  ;  
            residual = ( residual + sum_) / 10  ;  
           //remanet
            res.push_back(char(remanet + '0'));
        }
        return big_num( res );
    }
};
istream &operator>>(istream &is, big_num &bn){
    is >> bn.source_string();
    reverse(all(bn.source_string()));
    return is;
}
ostream &operator<<(ostream &os, big_num &bn){
    rev(i, bn.source_string().size()-1, 0) os << bn.source_string().at(i);
    return os;
}
//------------------------------------------------------
void find_and_replace(big_num &bn, char target, char new_val ){
    for( char &c : bn.source_string() ) c = (c == target )?new_val:c;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen(  "input.txt", "r", stdin);
    freopen(  "output.txt", "w", stdout);
    int testcase; cin >> testcase;
        big_num x1, x2, maximum_number, minimum_number;
    while(testcase--){
        //min
        cin >> x1 >> x2;
        find_and_replace(x1, '6', '5');
        find_and_replace(x2, '6', '5');
        big_num mininum_number = x1+x2;
        cout << mininum_number << ' ';
        //max
        find_and_replace(x1, '5', '6');
        find_and_replace(x2, '5', '6');
        big_num maximum_number = x1+x2;
        cout << maximum_number;
        cout << '\n';
    }
return 0;
}