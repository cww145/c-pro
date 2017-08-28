#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
int main()
{
    string S;
    cin >> S;
    int L{}, R{};
    REP( i, (int)S.size() - 1 )
    {
        if( S[ i ] == '*' )
        {
            if( S[ i + 1 ] == ')' ) L++;
            if( S[ i - 1 ] == '(' ) R++;
        }
    }
    cout << L << " " << R << endl;
    return 0;
}
