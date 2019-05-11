//https://atcoder.jp/contests/abc115/tasks/abc115_c
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int>h(N);
    for( auto&x : h)
    {
        cin >> x;
    }
    sort(ALL(h));
    int res = INT_MAX;
    for( int i = 0; i <= N-K; ++i )
    {
        res = min( res, h[i+K-1]-h[i]);
    }
    cout << res << endl;
    return 0;
}
int btk(){
    int N,K;
    cin>>N>>K;
    vector<int> h(N);
    for(int &it:h){
        cin>>it;
    }
    sort(ALL(h));
    int ret=h.back()-h.front();
    for(int i=0;i<N;i++){
        if(i+K-1<N){
            ret=min(ret,h[i+K-1]-h[i]);
        }
    }
    cout<<ret<<endl;
}

