// https://atcoder.jp/contests/abc125/tasks/abc125_b
// clang-format off
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
// clang-format on
int main() {
  int N;
  cin >> N;
  vector<int> V(N), C(N);
  for (auto &x : V) {
    cin >> x;
  }
  for (auto &x : C) {
    cin >> x;
  }
  vector<int> dp(N + 1);
  dp[0] = 0;
  for (int i = 1; i < N + 1; ++i) {
    dp[i] = max(dp[i - 1], dp[i - 1] + V[i - 1] - C[i - 1]);
  }
  cout << dp[N] << endl;
  return 0;
}