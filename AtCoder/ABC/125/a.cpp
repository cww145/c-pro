//https://atcoder.jp/contests/abc125/tasks/abc125_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B, T;
    cin >> A >> B >> T;
    int sum{};
    for( int i = A; i < T + 0.5 ; i+=A )
    {
        sum += B;
    }
    cout << sum << endl;
    return 0;
}