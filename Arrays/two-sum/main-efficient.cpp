#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       for(int i=0; i<nums.size(); i++)
       {
            int rem = target-nums[i];
            if(mp.find(rem)!=mp.end())
            {
                return {mp[rem],i};
            }
            else
                mp[nums[i]]=i;
       }
       return {};
    }
};

int main(){
    Solution solution;
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = solution.twoSum(nums,target);
    for(int i: result)
        cout << i << ",";
    return 0;
}