// simply run and save to files
// output is at last together, separate input and output
// cd test-case
// ..\test-case-generator.exe > 11

#include <bits/stdc++.h>
using namespace std;
int ar[100005] = {}, dp[100005][2] = {};
int solutions[20];
int main() {
	/* initialize random seed: */
  srand (time(NULL));
  int t;
 // cin >> t;
  t =  rand() % 18 + 1;
  cout << t << "\n";
  int x = -1;
  while (t--) {
    int n, i, j;
    //cin >> n;
    n =  rand() % 102 + 1;
    cout << n << "\n";
    for (i = 0; i < n; i++){
//		cin >> ar[i];
		ar[i] =  rand() % 100 + 1;
		cout << ar[i] << " ";
	} cout << "\n";
      

    for (i = 0; i < n - 1; i++) {
      dp[i + 1][0] = max(dp[i][0], dp[i][1] + abs(ar[i] - 1));
      dp[i + 1][1] =
          max(dp[i][0] + abs(ar[i + 1] - 1), dp[i][1] + abs(ar[i] - ar[i + 1]));
    }
    solutions[++x] = max(dp[n - 1][0], dp[n - 1][1]) ;
  }
  cout<<"\n\n";
    for (int i = 0; i <=x; i++){
//		cin >> ar[i];
		cout << solutions[i] << "\n";
	} cout << "\n";


  return 0;
}
