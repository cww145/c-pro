//https://atcoder.jp/contests/abc110/tasks/abc110_c
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
 //O(N)
bool check(string S, string T)
{
    vector< set<char> > to(26), from(26);
    for( int i = 0; i < (int)S.size(); ++i )
    {
        to[S[i]-'a'].insert(T[i]);//O(log(26)) = O(1)
        from[T[i]-'a'].insert(S[i]);
    }
    for( set<char> &x : to )
    {
        if( x.size() >= 2 ){
            return false;
        }
    }
    for( set<char> &x : from )
    {
        if( x.size() >= 2 ){
            return false;
        }
    }
    return true;
}
int main()
{
    string S, T;
    cin >> S >> T;
    cout << ( check( S, T ) ? "Yes" : "No" ) << endl;
    return 0;
}