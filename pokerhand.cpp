#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <deque>
#include <string.h>
#include <sstream>
#include <bitset>
#include <math.h>
#include <assert.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
template <class T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template <class T>
using ordered_multiset = __gnu_pbds::tree<T, __gnu_pbds::null_type, less_equal<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;

#define PI atan2(0, -1)
#define epsilon 0.000000001
#define INF 5000000000000000000
#define MOD 1000000007

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

int sumdigits(int x)
{
  int total = 0;
  while(x > 0)
  {
    total += x % 10;
    x /= 10;
  }
  return total;
}
int main(){
    //freopen("sort.in", "r", stdin); freopen("sort.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(1);
    int max = 1;
    vector<string> regret;
    for(int x = 0; x < 5; x++)
    {
      string yeet; cin >> yeet;
      regret.push_back(yeet);
    }
    for(int x = 0; x < 5; x++)
    {
      int submax = 1;
      for(int y = x + 1; y < 5; y++)
      {
        if(regret.at(x)[0] == regret.at(y)[0])
          submax++;
      }
      if(submax > max)
        max = submax;
    }
    cout << max;
    
}

/******************************
yeah its shack wes and im getting really rich
-mo bamba
******************************/