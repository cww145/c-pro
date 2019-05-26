//https://atcoder.jp/contests/abc117/tasks/abc117_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
template<typename ITR> ITR curr(const ITR& itr){return itr;}
int main()
{
    int N;
    cin >> N;
    vector<int> L(N);
    for( auto &x : L )
    {
        cin >> x;
    }
    sort( ALL(L) );
    cout << ( L.back() < accumulate( curr(begin(L)), prev(end(L)), 0 ) ? "Yes" : "No" ) << endl;
    return 0;
}