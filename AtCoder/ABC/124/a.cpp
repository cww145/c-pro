//https://atcoder.jp/contests/abc124/tasks/abc124_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    vector<int> v(2);
    cin >> v[0] >> v[1];
    cout << ( v[0] == v[1] ? v[0] * 2 : *max_element( ALL(v) ) * 2 - 1 ) << endl;
    return 0;
}