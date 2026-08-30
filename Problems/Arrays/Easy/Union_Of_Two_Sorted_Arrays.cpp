#include <bits/stdc++.h>
using namespace std;

// Union of Two Sorted Arrays

// Merge Sort - Merge Algorithm (Independent Two Pointers Approach) (Optimal)
// Check for Unique (Extra)
// TC - O(N + M)
// SC - O(1)
void insertUnique(int val, vector<int> &ans)
{
    if (ans.empty() || ans.back() != val)
    {
        ans.push_back(val);
    }
}

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    vector<int> ans;

    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            insertUnique(a[i++], ans);
        }
        else
        {
            insertUnique(b[j++], ans);
        }
    }

    while (i < a.size())
    {
        insertUnique(a[i++], ans);
    }
    while (j < b.size())
    {
        insertUnique(b[j++], ans);
    }

    return ans;
}

// Use STL set_union (also unique and erase for deduplication)
// TC - O(N + M)
// SC - O(1)
vector<int> findUnion(vector<int> &a, vector<int> &b)
{

    vector<int> ans;
    set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(ans));

    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

// Ordered Set
// TC - O(NlogN + MlogM)
// SC - O(N + M)
// Can also be solved with unordered set with sort() function giving same complexity
vector<int> findUnion(vector<int> &a, vector<int> &b)
{

    set<int> stt(a.begin(), a.end());
    stt.insert(b.begin(), b.end());

    vector<int> ans(stt.begin(), stt.end());
    return ans;
}

// Sorting + Deduplication
// TC - O(NlogN + MlogM)
// SC - O(1)

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    vector<int> ans;

    ans.insert(ans.end(), a.begin(), a.end());
    ans.insert(ans.end(), b.begin(), b.end());

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    return ans;
}