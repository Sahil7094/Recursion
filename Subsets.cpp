// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:
// Input: nums = [0]
// Output: [[],[0]]
// Code :-

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;

        createsubset(nums,0,ans,subset);
        return ans;
    }
    void createsubset(vector<int>& nums, int index,vector<vector<int>>& ans, vector<int>& subset){
        if(index==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        createsubset(nums,index+1,ans,subset);
        subset.pop_back();
        createsubset(nums,index+1,ans,subset);
    }
};
