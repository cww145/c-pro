//https://beta.atcoder.jp/contests/abc109/tasks/abc109_b
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
    vector<string> W( N );
    for( auto &x : W )
    {
        cin >> x;
    }
    REP( i, N - 1 )
    {
        if( W[ i ].back() != W[ i + 1 ].front() )
        {
            cout << "No" << endl;
            return 0;
        }
        REP( j, N )
        {
            if( W[ i ] == W[ j ] && i != j )
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}