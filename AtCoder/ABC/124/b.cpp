//https://atcoder.jp/contests/abc124/tasks/abc124_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
bool HeightCheck(vector<int> &H, int i){
    int tmp = H[0];
    for(int j = 0; j < i; j++){
        if(tmp <= H[j]){
            tmp = H[j];
        }else{
            return 0;
        }
    }
    return 1;
}
void unit_test() {
    vector<int> testcase{1,2,3,2,1,2,3};
    assert(HeightCheck(testcase, 5) == false);
}
int main()
{
    unit_test();
    int N;
    cin >> N;
    vector<int> H(N);
    for(auto &x : H){
        cin >> x;
    }
    int result{};
    for(int i = 0; i < (int)H.size(); i++){
        result += HeightCheck(H, i);
    }
    cout << result << endl;
    return 0;
}