// https://leetcode.com/submissions/detail/2045676187/
// LeetCode: Majority Element Subarrays
// Time: O(n log n)
// Space: O(n)

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    class Fenwick {
    public:
        int n;
        vector<int> bit;

        Fenwick(int size) {
            n = size;
            bit.assign(n + 1, 0);
        }

        void update(int idx, int val) {
            while (idx <= n) {
                bit[idx] += val;
                idx += idx & -idx;
            }
        }

        int query(int idx) {
            int sum = 0;
            while (idx > 0) {
                sum += bit[idx];
                idx -= idx & -idx;
            }
            return sum;
        }
    };

    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        // Step 1: Build prefix sums using +1/-1 transformation
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (nums[i] == target)
                prefix[i + 1] = prefix[i] + 1;
            else
                prefix[i + 1] = prefix[i] - 1;
        }

        // Step 2: Coordinate Compression
        vector<int> values = prefix;
        sort(values.begin(), values.end());
        values.erase(unique(values.begin(), values.end()), values.end());

        Fenwick ft(values.size());

        long long ans = 0;

        // Step 3: Count previous prefix sums smaller than current
        for (int x : prefix) {

            int idx = lower_bound(values.begin(), values.end(), x) - values.begin() + 1;

            ans += ft.query(idx - 1);

            ft.update(idx, 1);
        }

        return (int)ans;
    }
};