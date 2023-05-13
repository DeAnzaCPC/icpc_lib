// Modular Integer
// does arithmetics (mod P) automatically
const int MOD = 1000000007; // 998244353
struct mint {
  int x;
  mint(int x = 0) : x(norm(x)) { }
  mint(ll x) : x(norm(x%MOD)) { }
  int norm(int x) const { if (x < 0) { x += MOD; } if (x >= MOD) { x -= MOD; } return x; }
  mint operator+(mint o) const { return norm(x + o.x); }
  mint operator-(mint o) const { return norm(x - o.x); }
  mint operator*(mint o) const { return ll(x) * o.x; }
  mint &operator+=(mint o) { return *this = *this + o; }
  mint &operator-=(mint o) { return *this = *this - o; }
  mint &operator*=(mint o) { return *this = *this * o; }
  mint inv() const { return pow(MOD - 2); }
  mint pow(ll x) const {
    mint a = *this;
    mint b = 1;
    for (; x; x >>= 1) {
      if (x & 1)
        b *= a;
      a *= a;
    }
    return b;
  }
};