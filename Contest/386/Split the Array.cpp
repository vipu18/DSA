bool isPossibleToSplit(vector<int> &nums)
{
    map<int, int> mp;
    for (auto i : nums)
        mp[i]++;
    for (auto it : mp)
    {
        if (it.second > 2)
            return false;
    }
    return true;
}