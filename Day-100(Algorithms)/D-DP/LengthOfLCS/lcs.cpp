int longestCommonSubsequence(string &a, string &b) {
  if (a.size() < b.size()) return longestCommonSubsequence(b, a);
  vector<vector<short>> m(2, vector<short>(b.size() + 1));
  for (auto i = 1; i <= a.size(); ++i)
    for (auto j = 1; j <= b.size(); ++j)
      if (a[i - 1] == b[j - 1]) m[i % 2][j] = m[(i -1) % 2][j - 1] + 1;
      else m[i % 2][j] = max(m[(i - 1) % 2][j], m[i % 2][j - 1]);
  return m[a.size() % 2][b.size()];
}
