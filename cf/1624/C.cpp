#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
  int t;
  bool ans;

  cin >> t;
  while (t--){
    int n, a, i;
    vector<vector<int>> g(51);
    cin >> n;
    for (i=0;i<n;i++){
      cin >> a;
      while (a > n)
        a >>= 1;
      // cout << a[i] << ' ';
      for (;a>0;a>>=1){
	g[a].push_back(i);
      }
    }
    ans = 1;
    vector<int> used;
    for (i=n;i>0;i--){
      bool match = 0;
      for (int &x : g[i]) {
        auto it = find(used.begin(), used.end(), x);
        if (it == used.end()){
          //cout << "using " << x << " to match " << i << endl;
          used.push_back(x);
          match = 1;
          break;
        }
      }
      if (!match){
        ans = 0;
        break;
      }


      /*
      cout << 'u' << i << ':';
      for (auto it=used.begin(); it != used.end(); ++it)     
        cout << ' ' << *it;
      cout << endl << 'g' << i << ':';
      for (auto it=g[i].begin(); it != g[i].end(); ++it)     
        cout << ' ' << *it;
      cout << endl;
      */
      g[i].clear();
    }
  cout << (ans ? "YES" : "NO") << endl << flush;

  }

  return 0;
}
