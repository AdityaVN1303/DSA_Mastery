#include <bits/stdc++.h>
using namespace std;

// TC ---> O(n+m)
// SC ---> O(1)

vector<int> findUnion2(vector<int> v1, vector<int> v2)
{
    int i = 0;
    int j = 0;
    vector<int> nums;
    auto addUnique = [&](int val)
    {
        if (nums.empty() || nums.back() != val)
        {
            nums.push_back(val);
        }
    };
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] <= v2[j])
        {
            addUnique(v1[i]);
            if (v1[i] == v2[j])
                j++;
            i++;
        }
        else if (v2[j] < v1[i])
        {
            addUnique(v2[j]);
            j++;
        }
    }

    while (i < v1.size())
    {
        addUnique(v1[i]);
        i++;
    }
    while (j < v2.size())
    {
        addUnique(v2[j]);
        j++;
    }
    return nums;
}

// TC ---
// Inserting n elements into a set: O(n log(n+m))
// Inserting m elements: O(m log(n+m))
// Converting set to vector: O(n+m)
// Hence TC = O((n + m) log(n + m))

// SC ---> O(n+m)

vector<int> findUnion1(vector<int> &v1, vector<int> &v2)
{
    // Order matters , hence set is used.
    set<int> s(v1.begin(), v1.end());
    s.insert(v2.begin(), v2.end());

    return vector<int>(s.begin(), s.end());
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {4, 5, 6, 7, 8};
    vector<int> result = findUnion2(v1, v2);
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}