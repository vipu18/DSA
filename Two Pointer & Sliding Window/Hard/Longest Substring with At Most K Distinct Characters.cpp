#include<bits/stdc++.h>

int kDistinctChars(int k, string &s) {

  int l = 0, r = 0, maxLen = 0;
   unordered_map<char, int> mp;
  while (r < s.size()) {
    mp[s[r]]++;
  if (mp.size() > k) {
    mp[s[l]]--;
    if (mp[s[l]] == 0) {
      mp.erase(s[l]);
    }
    l = l + 1;
  }
   if (mp.size() <= k) {
    maxLen = max(maxLen, r - l + 1);
  }
    r = r + 1;
  }
  return maxLen;
}