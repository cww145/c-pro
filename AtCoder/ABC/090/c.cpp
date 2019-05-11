//https://atcoder.jp/contests/abc090/tasks/arc091_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

void btk(int R,int C){
    using V=vector<int>;
    using VV=vector<V>;
    VV b(R+2,V(C+2));
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            for(int dr:{-1,0,1}){
                for(int dc:{-1,0,1}){
                    b[i+dr][j+dc]=1-b[i+dr][j+dc];
                }
            }
        }
    }
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    //btk(4,5);
    long long H, W;
    cin >> H >> W;
    /*if( H == 1 && W == 1 ){
        cout << 1 << endl;
    }
    else if( H == 1 && W > 1 ){
        cout << W-2 << endl;
    }
    else if( H > 1 && W == 1 ){
        cout << H-2 << endl;
    }
    //if( H > 1 && W > 1 )
    else {
        cout << (H-2)*(W-2) << endl;
    }*/
    cout << (H==1&&W==1?1:H==1&&W>1?W-2:H>1&&W==1?H-2:(H-2)*(W-2)) << endl;
    return 0;
}