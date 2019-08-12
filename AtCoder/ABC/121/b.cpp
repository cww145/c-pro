//https://atcoder.jp/contests/abc121/tasks/abc121_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int N, M, C;
vector<int> B;
bool f( vector<int> &A ){
    int res{};
    REP(i, M){
        res += A[i]*B[i];
    }
    return res + (C) > 0 ? 1 : 0;
}
int main()
{
    cin >> N >> M >> C;
    B.resize(M);
    for( auto &x : B ){
        cin >> x;
    }
    int cnt{};
    REP(i, N){
        vector<int> A(M);
        REP(j, M){
            cin >> A[j];
        }
        cnt += f(A);
    }
    cout << cnt << endl;
    return 0;
}