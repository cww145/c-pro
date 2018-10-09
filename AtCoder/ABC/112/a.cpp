//https://beta.atcoder.jp/contests/abc112/tasks/abc112_a
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
	int N;
	cin >>N;
	if( N == 1 )
	{
		cout << "Hello World" << endl;
		return 0;
	}
	int A, B;
	cin >> A >> B;
	cout << A + B << endl;
	return 0;
}