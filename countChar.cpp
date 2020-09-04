#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "Anuranjan";
    unordered_map<char, int> map;
    for (int i = 0; i < str.size(); i++)
    {
        if (map.find(str[i]) == map.end())
        {
            map.insert(make_pair(str[i], 1));
        }
        else
        {
            map[str[i]]++;
        }
    }
    for (auto &it : map)
    {
        cout << it.first << " " << it.second << endl;
    }
}