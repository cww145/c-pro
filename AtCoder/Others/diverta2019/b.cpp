//https://atcoder.jp/contests/diverta2019/tasks/diverta2019_b
//auto submit : 1
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int cnt{};
    REP( i, N + 1 ){
        REP( j, N + 1 ){
            if( R * i + G * j > N ) continue;
            int Bk = N - (R * i + G * j);
            int k = Bk/B;
            int sum = R * i + G * j + B * k;
            if( sum == N ){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}