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
int main()
{
    vector<string> S( 3 );
    for( auto &x : S )
    {
        cin >> x;
    }
    cout << ( count( ALL( S ), "RED" ) > count( ALL( S ), "BLUE" ) ? "RED" : "BLUE"  ) << endl;
    return 0;
}
