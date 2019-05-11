//https://atcoder.jp/contests/abc123/tasks/abc123_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    vector<int> v(5);
    for( auto &x : v ){
        cin >> x;
    }
    int N;
    cin >> N;
    sort( ALL(v) );
    for(auto &x : v ){
        cout << x << " ";
    }
    cout << ( v[4] - v[0] <= N ? "Yay!" : ":(" ) << endl;
    return 0;
}