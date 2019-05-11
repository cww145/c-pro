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
    vector<string> v( 3 );
    for( auto &x : v )
    {
        cin >> x;
    }
    int res{};
    for( int i = 0; i < 6; ++i )
    {
        res = max( res, stoi( v[ 0 ] ) + stoi( v[ 1 ] + v[ 2 ] ) );
        next_permutation( begin( v ), end( v ) );
    }
    cout << res << endl;
    return 0;
}