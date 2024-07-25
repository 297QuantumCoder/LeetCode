#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(nums.size() <= 2)
            return nums;
        vector<int> ans(2*n);
        for(int i = 0; i < n; i++){
            ans[2*i] = nums[i];
        }

        for(int i=0; i < n; i++)
            ans[(2*i)+1] = nums[n+i];
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,3,4,4,3,2,1};
    vector<int> answer = solution.shuffle(nums, nums.size()/2);
    for(int i: answer)
        cout << i << ", ";
    return 0;
}