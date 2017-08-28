#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define SORT(x) sort((x).begin(),(x).end(),greater<int>())
using LL=long long;
using ULL=unsigned long long;
using PII=pair<int,int>;
const int INF = numeric_limits<int>::max();
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
vector<vector<int>> memo( 10000 + 1, vector<int>( 10000 + 1, -1 ) );
int A, B;
vector<int> vc;
set<int> st;
bool dfs( int i, int sum )
{
    if( sum != 0 )
    {
        st.emplace( sum );
    }
    int &res = memo[ i ][ sum ];
    if( res != -1 )
    {
        return res;
    }
    if( i == 0 )
    {
        return 0;
    }
    return ( res = dfs( i - 1, sum ) || dfs( i - 1, sum - vc[ i - 1 ] ) );
}
int main()
{
    cin >> A >> B;
    REP( i, A )
    {
        vc.emplace_back( 1 );
    }
    REP( i, B )
    {
        vc.emplace_back( 5 );
    }
    dfs( A + B, A * 1 + B * 5 );
    for( auto &x : st )
    {
        cout << x << endl;
    }
	return 0;
}
