// Debug
#ifdef LOCAL
freopen("input.txt", "r" , stdin);
freopen("output.txt", "w", stdout);
#endif

// Order statistics tree
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;