//https://atcoder.jp/contests/abc117/tasks/abc117_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int T, X;
    cin >> T >> X;
    cout << fixed << std::setprecision(10) << (T*60.0) / (X*60.0)  << endl;
    return 0;
}