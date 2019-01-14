#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    string S;
    cin >> S;

    if( S[ 0 ] != 'A' || isupper( S[ 1 ] ) || isupper( S[ (int)S.size() - 1 ] ) )
    {
        cout << "WA" << endl;
        return 0;
    }
    bool flag = false;
    int cnt{};
    for( int i = 2; i < (int)S.size() - 1; ++i )
    {
        if( S[ i ] == 'C' )
        {
            flag = true;
            cnt++;
        }
        if( cnt >= 2 )
        {
            cout << "WA" << endl;
            return 0;
        }
    }
    for( int i = 2; i < (int)S.size() - 1; ++i )
    {
        if( S[ i ] == 'C' ) continue;
        if( isupper( S[ i ] ) )
        {
            flag = true;
        }
    }
    cout << ( flag ? "AC" : "WA" ) << endl;
    return 0;
}