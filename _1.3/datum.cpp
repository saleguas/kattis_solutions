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

int main(){
    //freopen("sort.in", "r", stdin); freopen("sort.out", "w", stdout);
    unordered_map<int, string> hey;
    hey[0] = "Wednesday";
    hey[1] = "Thursday";
    hey[2] = "Friday";
    hey[3] = "Saturday";
    hey[4] = "Sunday";
    hey[5] = "Monday";
    hey[6] = "Tuesday";

    ios_base::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(1);
    int num1, num2; cin >> num1 >> num2;
    if(num2 > 1)
      num1 = num1 + (num2 - 1) * 31;
    if(num2 > 2)
      num1 -= 3;
    if(num2 > 4)
      num1 -= 1;
    if(num2 > 6)
      num1 -= 1;
    if(num2 > 9)
      num1 -= 1;
    if(num2 > 11)
      num1 -= 1;
    cout << hey[num1 % 7];

}

/******************************
yeah its shack wes and im getting really rich
-mo bamba
******************************/