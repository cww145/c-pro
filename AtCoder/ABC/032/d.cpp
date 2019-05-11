#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const int INF = 1'000'000'001;
int N, W;
vector<int> v, w;
long long subtask1(){

    long long res{};
    for( int i = N; i < 30; ++i )
    {
        v.emplace_back(0);
        w.emplace_back(0);
    }

    for( int i = 0; i < 32768; ++i ){
        for( int j = 0; j < 32768; ++ j ){
        }
    }
    /*
            //12345の10進展開
            12345 = 10000 *1  + 1000  *2 + 100   *3 + 10    *4 + 1*5
                  = (10^4)*1  + (10^3)*2 + (10^2)*2 + (10^1)*4 + (10^0)*5
            //*の右の数をとってきて並べると12345なので，12345という値は10進数で12345と表記できる

            //12345の2進展開
            12345 = 8192 *1  + 4096 *1 + 2048 *0 + 1024 *0 + 512 *0 + 256 *0 + 128 *0 + 64  *0 + 32  *1 + 16  *1 + 8   *1 + 4   *0 + 2   *0 + 1   *1
                  = 2^13 *1  + 2^12 *1 + 2^11 *0 + 2^10 *0 + 2^9 *0 + 2^8 *0 + 2^7 *0 + 2^6 *0 + 2^5 *0 + 2^4 *0 + 2^3 *1 + 2^2 *0 + 2^1 *0 + 2^0 *0
            //*の右の数をとってきて並べると11000000111001なので，12345という値は2進数で11000000111001と表記できる

            i=0 : 0000 : {取らない，取らない，取らない，取らない}
            i=1 : 0001 : {取らない，取らない，取らない，取る}
            i=2 : 0010 : {取らない，取らない，取る，取らない}
            i=3 : 0011 : {取らない，取らない，取る，取る}
            i=4 : 0100 : {取らない，取る，取らない，取らない}
            i=5 : 0101 : {取らない，取る，取らない，取る}
            i=6 : 0110 : {取らない，取る，取る，取らない}
            i=7 : 0111 : {取らない，取る，取る，取る}
            i=8 : 1000 : {取る，取らない，取らない，取らない}
            i=9 : 1001 : {取る，取らない，取らない，取る}
            i=10: 1010 : {取る，取らない，取る，取らない}
            i=11: 1011 : {取る，取らない，取る，取る}
            i=12: 1100 : {取る，取る，取らない，取らない}
            i=13: 1101 : {取る，取る，取らない，取る}
            i=14: 1110 : {取る，取る，取る，取らない}
            i=15: 1111 : {取る，取る，取る，取る}

            0...(2^4-1) の2^4種類の値は4桁の{0,1}の組み合わせを表現できる
            0...(2^N-1) の2^N種類の値はN桁の{0,1}の組み合わせを表現できる
            0...(2^N-1) の2^N種類の値はN個の{取らない,取る}の組み合わせを表現できる

            // bitset<ここにビット数(今回は15)> 
            bitset<15> b(5); //5の15bitでの2進表現は000000000000101
            b[0] :  true
            b[1] :  false
            b[2] :  true
            b[3...14] : false
            https://wandbox.org/permlink/HsMXbqXBuSHm73nu
            
            for( int i = 0; i < 2^N ; i++)
            {
                // パターンiを試す
                // ここでは仮にN=5,i=17とする
                // 17の2進数表現は10001
                int vsum = 0;
                int wsum = 0;
                for (int j = 0; j < N; j++)
                {
                    if(iの2進数におけるj桁目が1)
                    {
                        //j番目の品物を取る  (j=0,4のときこっちを通る)
                        vsum+=v[j]
                        wsum+=w[j]
                    }
                    else
                    {
                        //j番目の品物はとらない  (j=1,2,3のときこっちを通る)
                    }
                }
                {取る，取らない，取らない，取らない，取る}の結果は{vsum,wsum}
            }
    */

    return res;
}
long long subtask2(){
    vector<vector<long long>> dp( N + 1, vector<long long>( W + 1 ) );
    for( int i = 1; i <= N; ++i )
    {
        for( int j = 0; j <= W; ++j )
        {
            if( j >= w[ i - 1 ] )
            {
                dp[ i ][ j ] = max( dp[ i - 1 ][ j ], dp[ i - 1 ][ j - w[ i - 1 ] ] + v[ i - 1 ] );
            }
            else
            {
                dp[ i ][ j ] = dp[ i - 1 ][ j ];
            }
        }
    }
    return dp[ N ][ W ];
}
long long subtask3(){
    vector<vector<long long>> dp( N + 1, vector<long long>( 200000 + 1, INF ) );
    dp[ 0 ][ 0 ] = 0;
    long long res{};
    for( int i = 1; i <= N; ++i )
    {
        for( int j = 0; j <= 200000; ++j )
        {
            if( j >= v[ i - 1 ] )
            {
                dp[ i ][ j ] = min( dp[ i - 1 ][ j - v[ i - 1 ] ] + w[ i - 1 ], dp[ i - 1 ][ j ] );
            }
            else
            {
                dp[ i ][ j ] = dp[ i - 1 ][ j ];
            }
        }
    }
    for( int i = 0; i <= 200000; ++i )
    {
        if( dp[ N ][ i ] <= W )
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    cin >> N >> W;
    v=vector<int>(N);
    w=vector<int>(N);
    REP( i, N )
    {
        cin >> v[ i ] >> w[ i ];
    }
    if( *max_element(ALL(w)) <= 1000 ) cout << subtask2() << endl;
    else if( *max_element(ALL(v)) <= 1000 ) cout << subtask3() << endl;
    else if( N <= 30 ) cout << subtask1() << endl;
    return 0;
}