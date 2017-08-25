#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
vector<vector<int>> memo( 300 + 1, vector<int>( 100 + 1, -1 ) );
int N, NG1, NG2, NG3;
vector<int> A;
bool f( int N, int i )
{
    int &res = memo[ N ][ i ];
    if( res != -1 )
    {
        return res;
    }
    //基底ケース
    if( N == 0 )
    {
        return true;
    }
    if( N == NG1 || N == NG2 || N == NG3 || i <= 0 || ( N - 1 < 0 && N - 2 < 0 && N - 3 < 0 ) )
    {
        return false;
    }
    //再帰ケース
    return ( res = f( N - 1, i - 1 ) || f( N - 2, i - 1 ) || f( N - 3, i - 1 ) );
}
int main()
{
    cin >> N >> NG1 >> NG2 >> NG3;
    cout << ( f( N, 100 ) ? "YES" : "NO" ) << endl;
    return 0;
}
