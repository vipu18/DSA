bool isIsomorphic(string str1, string str2)
{
    int size1 = str1.size();
    int size2 = str2.size();
    if (size1 != size2)
        return false;
    unordered_map<char, vector<int>> mp1;
    unordered_map<char, vector<int>> mp2;
    for (int i = 0; i < size1; i++)
        mp1[str1[i]].push_back(i);
    for (int j = 0; j < size2; j++)
        mp2[str2[j]].push_back(j);

    for (int i = 0; i < size1; i++)
    {
        if (mp1[str1[i]] != mp2[str2[i]])
            return false;
    }
    return true;
}