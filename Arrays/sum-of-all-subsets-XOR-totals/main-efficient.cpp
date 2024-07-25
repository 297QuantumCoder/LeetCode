#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    int subsetXORSum(vector<int>& nums){
        int totals = 0;
        helperSubsetSumXOR(nums, 0, 0, totals);
        return totals;
    }

    void helperSubsetSumXOR(vector<int> nums, int index, int currentXOR, int& totals){
        if(index == nums.size()){
            totals += currentXOR;
            return;
        }

        helperSubsetSumXOR(nums, index+1, (currentXOR ^ nums[index]), totals);
        helperSubsetSumXOR(nums, index+1, currentXOR, totals);
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,3};
    cout << solution.subsetXORSum(nums) << endl;
}