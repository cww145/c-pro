//https://atcoder.jp/contests/abc118/tasks/abc118_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> v(M+1);
    REP( i, N ){
        int K;
        cin >> K;
        vector<int> A(K);
        for( int i = 0; i < K; ++i ){
            cin >> A[ i ];
            v[A[i]]++;
        }
    }
    cout << count( ALL(v), N ) << endl;
    return 0;
}