struct UnionFind {
  int n;
  vector<int> p;
  vector<int> sz;
  UnionFind(int n) : n(n), p(n), sz(n, 1) {
    iota(begin(p),end(p), 0);
  }
  
  int find_p(int x) {
    if (p[x] == x)
      return x;
    return p[x] = find_p(p[x]);
  }

  bool unite(int x, int y) {
    int u = find_p(x);
    int v = find_p(y);
    if (u == v) return false;
    // connect smaller tree to larger tree
    if (sz[u] > sz[v]) {
      swap(u,v);
    }
    p[v] = u;
    sz[u] += sz[v];
    return true;
  }
};