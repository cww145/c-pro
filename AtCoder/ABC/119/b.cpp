//https://atcoder.jp/contests/abc119/tasks/abc119_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N;
    cin >> N;
    double result{};
    for(int i = 0; i < N; ++i){
        double a;
        string u;
        cin >> a >> u;
        u == "BTC" ? result += 380000.0*a : result += a;
    }
    cout << fixed << setprecision(8) << result << endl;
    return 0;
}