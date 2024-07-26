#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0; i< nums.size()-1; i++){
            for(int j = i+1; j< nums.size(); j++){
                if((nums[i] + nums[j]) == target)
                    result = {i,j};
            }
        }
        return result;
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