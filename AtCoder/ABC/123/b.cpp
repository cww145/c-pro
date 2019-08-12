//https://atcoder.jp/contests/abc123/tasks/abc123_b?lang=ja
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

// 今の時間(current_time)から，次の(current_time"以降"の)10Nの時間を求める
int getNextOrderTime(int current_time){
    return current_time%10==0 ? current_time : ( current_time/10 + 1 ) * 10;
}
// times[i]:= i番目に頼む料理にかかる調理時間
int computeLastTime(vector<int> times){
    int res{};
    REP(i, (int)times.size()){
        res = getNextOrderTime(res) + times[i];
    }
    return res;
}
/**
 * # 順番を決めるパート
 * - 全探索（未実装）
 * # simulationパート
 * - 現在の時間から次に注文できる時間を求めるgetNextOrderTimeの実装
 * - 引数に与えられた注文を順番に実行して，最後の時間を求めるcomputeLastTimeの実装
 */
struct cwwUnitTest{
    cwwUnitTest(){
        assert(getNextOrderTime(7)==10);
        assert(getNextOrderTime(20)==20);
        assert(getNextOrderTime(29)==30);

        assert(computeLastTime({29,7,20})==60);
        assert(computeLastTime({20,7,29})==59);
        assert(computeLastTime({20,29,7})==57);
    }
}unitTester;
int main()
{
    vector<int> v(5);
    for(auto &x : v){
        cin >> x;
    }
    sort(ALL(v));
    int res = INT_MAX;
    do{
        res = min(res, computeLastTime(v));
    }while(next_permutation(begin(v), end(v)));

    cout << res << endl;
    return 0;
}