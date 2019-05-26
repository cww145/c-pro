//https://atcoder.jp/contests/diverta2019/tasks/diverta2019_c
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int freqAB( string T )
{
    size_t pos{};
    int cnt{};
    for( int i = 0; i < (int)T.size(); ++i )
    {
        pos = T.find("AB", pos);
        if( pos != string::npos )
        {
            pos += 1;
            cnt++;
        }
    }
    return cnt;
}
bool isBA(string S)
{
    return S.front() == 'B' && S.back() == 'A';
}
bool isXX(string S)
{
    return S.front() != 'B' && S.back() != 'A';
}

bool isOnlyBA( vector<string> &S )
{
    // Sにbxxx, xxxaが含まれていたら，return false
    for( int i = 0; i < (int)S.size(); ++i )
    {
        // bxxx, xxxaならraturn false
        if(!(isBA(S[i]) || isXX(S[i])))return 0;
    }
    return 1;
}
int countXA( vector<string> &S )
{
    int a{};
    for( int i = 0; i < (int)S.size(); ++i )
    {
        if( S[i].back() == 'A' ) a++;
    }
    return a;
}
int countBX( vector<string> &S )
{
    int b{};
    for( int i = 0; i < (int)S.size(); ++i )
    {
        if( S[i].front() == 'B' ) b++;
    }
    return b;
}
int main()
{
    int N;
    cin >> N;
    vector<string> S( N );
    for( auto &x : S )
    {
        cin >> x;
    }
    int res{};
    for( int i = 0; i < N; ++i )
    {
        res += freqAB( S[i] );
    }
    /*cerr << "innerAB:"<< res << endl;
    cerr << "XA:" << countXA(S) << endl;
    cerr << "BX:" << countBX(S) << endl;
    cerr << "isOnlyBA:" << isOnlyBA(S) << endl;*/
    cout << ( isOnlyBA( S ) ? ( countXA ( S ) == 0 && countBX( S ) == 0 ? res + min( countBX( S ), countXA( S ) ) : res + min( countBX( S ), countXA( S ) ) - 1) : res + min( countBX( S ), countXA( S ) ) ) << endl;
    return 0;
}