#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
    string S;
    cin >> S;
    int cnt{};
    for( int i = S.size() - 1; i >= 0; i-- )
    {
        if( S.rfind( "B", i ) == string::npos ) break;
        if( S[ i ] == 'A' )
        {
            cnt++;
		}
        else
        {
            S.erase( S.begin() + i );
            i = S.size();
        }
    }
    cout << cnt << endl;
    return 0;
}
