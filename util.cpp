// Debug
#ifdef LOCAL
freopen("input.txt", "r" , stdin);
freopen("output.txt", "w", stdout);
#endif

// Order statistics tree
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using indexed_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;