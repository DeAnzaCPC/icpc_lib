template <typename T,size_t N>
using mat = array<array<T,N>, N>;

template <typename T,size_t N>
mat<T,N> operator*(const mat<T,N>& lhs, const mat<T,N>& rhs) { 
  mat<T,N> res{};
  for (int t = 0; t < N; ++t) {
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        res[i][j] += lhs[i][t] * rhs[t][j];
      }
    }
  }
  return res;
}
