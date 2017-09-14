#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> v( N ), w( N );
    REP( i, N )
    {
        cin >> v[ i ] >> w[ i ];
    }
    vector<vector<int>> dp( N + 1, vector<int>( W + 1 ) );
    dp[ 0 ][ 0 ] = 0;
    for( int i = 1; i <= N; i++ )
    {
        for( int j = 0; j <= W; j++ )
        {
            if( j - w[ i - 1 ] >= 0 )
            {
                dp[ i ][ j ] = max( dp[ i - 1 ][ j ], dp[ i - 1 ][ j - w[ i - 1 ] ] + v[ i - 1 ] );
            }
            else
            {
                dp[ i ][ j ] = dp[ i - 1 ][ j ];
            }
        }
    }
    cout << dp[ N ][ W ] << endl;
    return 0;
}
