//https://beta.atcoder.jp/contests/abc110/tasks/abc110_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    string A, B, C;
    cin >> A >> B >> C;
    cout << max({ stoi( A ) + stoi( B + C ), stoi( A ) + stoi( C + B ),
                  stoi( B ) + stoi( A + C ), stoi( B ) + stoi( C + A ),
                  stoi( C ) + stoi( A + B ), stoi( C ) + stoi( B + A ) }) << endl;
    return 0;
}