//https://atcoder.jp/contests/abc120/tasks/abc120_a
//
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << ( A*C > B ? B/A : C ) << endl;
    return 0;
}