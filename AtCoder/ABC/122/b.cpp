//https://atcoder.jp/contests/abc122/tasks/abc122_b
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

/**
 * @statement
 * 入力で与えられる文字列をTとする
 * Tの"連続した"部分文字列(空文字列も含む）のうち，
 * 最も長いACGT文字列の長さを答えよ
 *
 * ACGT文字列とは，A,C,G,Tのみで構成された文字列である
 * ・ACGT文字列の例 : "A","AC","AACCGGTT"
 * ・非ACGT文字列の例 : "B", "AB"
 *
 * Tの先頭と末尾から0文字以上を取り去って得られる文字列
 * 例：ATCODER -> TCO
 * ATCODER
 * --TCO---
 * TCOは先頭から2文字，末尾から3文字取り去った文字列
 */
/**
 * @brief
 * SがACGT文字列かどうかの判定をする
 * @param S
 */
bool checkACGT(string S) {
    REP(i, (int)S.size()){
        if(S[i]!='A'&&S[i]!='C'&&S[i]!='G'&&S[i]!='T'){
            return false;
        }
    }
    return true;
}
void componentTest(){
    assert(checkACGT("A")==true);
    assert(checkACGT("C")==true);
    assert(checkACGT("G")==true);
    assert(checkACGT("T")==true);
    assert(checkACGT("AC")==true);
    assert(checkACGT("BBBB")==false);
    assert(checkACGT("BAGT")==false);
    assert(checkACGT("ACGTZ")==false);
}
int main()
{
    componentTest();
    string S;
    cin >> S;
    int res = INT_MIN;
    REP(i, (int)S.size()){
        REP(j, (int)S.size()-i+1){
            string tmp = S.substr(i, j);
            if( checkACGT(tmp) ){
                res = max(res, (int)tmp.size());
            }
        }
    }
    cout << res << endl;
    return 0;
}