// Fenwick Tree for summation
struct FenwickTree {
  int n;
  vector<ll> bits;
  FenwickTree(int n) : n(n), bits(n+1) {}
  void update(int v, int delta) {
    for (++v; v <= n; v += v&(-v)) 
      bits[v] += delta;
  }
  ll query(int r) {
    ll res = 0;
    for (++r; r > 0; r -= r&(-r))
      res += bits[r];
    return res;
  }
  ll query(int l, int r) {
    return query(r) - query(l-1);
  }
};