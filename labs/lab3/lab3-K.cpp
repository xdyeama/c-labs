#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.emplace_back(curr);
    }
    set<int> unique_set(nums.begin(), nums.end());
    for (auto num : unique_set)
    {
        cout << num << " ";
    }
}
