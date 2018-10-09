#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
    // 青いカード
    int N;
    cin >> N;
    vector<string> blue( N );
    for( auto &x : blue )
    {
        cin >> x;
    }
    // 赤いカード
    int M;
    cin >> M;
    vector<string> red( M );
    for( auto &x : red )
    {
        cin >> x;
    }
    // 青いカードに含まれた文字列のうち、赤いカードに書かれている文字列を全探索し削除する
    sort( ALL( blue ) );
    sort( ALL( red ) );
    REP( i, (int)red.size() )
    {
        REP( j, (int)blue.size() )
        {
            if( red[ i ] == blue[ j ] )
            {
                blue.erase( begin( blue ) + j );
                red.erase( begin( red ) + i );
            }
        }
    }
    // 青いカードに書かれた文字列の重複数をカウントする
    map<string, int> mp;
    REP( i, (int)blue.size() )
    {
        ++mp[ blue[ i ] ];
    }
    // 青いカードに書かれた文字列の MAX を取る
    int res{};
    for( auto && x : mp )
    {
        res = max( res, x.second );
    }
    // 青いカードの文字列が赤いカードの文字列に全て含まれていたら 0,
    // そうでない場合は青いカードに含まれた文字列の重複数が多いものを出力する
    cout << ( mp.empty() ? 0 : res ) << endl;
    return 0;
}
