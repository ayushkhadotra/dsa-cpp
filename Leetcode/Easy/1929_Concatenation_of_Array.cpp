
/* https://leetcode.com/problems/concatenation-of-array/submissions/2084191554 */



/*
LeetCode 1929 - Concatenation of Array
Difficulty: Easy
Topic: Array

Problem:
Given an integer array nums of length n, return an array ans of length 2n
where ans[i] == nums[i] and ans[i + n] == nums[i].

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(2*n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i +n] = nums [i];
        }
        return ans;
    }
};