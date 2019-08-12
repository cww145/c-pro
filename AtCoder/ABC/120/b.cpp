//https://atcoder.jp/contests/abc120/tasks/abc120_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B, K;
    cin >> A >> B >> K;
    set<int> stA;
    for( int i = 1; i <= A; i++ )
    {
        if( A % i == 0 )
        {
	       stA.emplace( i );
        }
    }
    set<int> stB;
    for( int i = 1; i <= B; i++ )
    {
        if( B % i == 0 )
        {
	       stB.emplace( i );
        }
    }
    set<int> result;
    set_intersection( ALL(stA), ALL(stB), inserter(result, result.end()) );
    auto itr = result.end();
    for( int i = 0; i < K; ++i ){
        --itr;
    }
    cout << *itr << endl;
    return 0;
}