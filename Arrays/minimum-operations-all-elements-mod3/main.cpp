#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    int minimumOperations(vector<int>& nums){
        int operations = 0;
        for(int i = 0; i< nums.size(); i++){
            switch(nums[i] % 3){
                case 1 : nums[i]--;
                    operations ++;
                    break;
                case 2: nums[i]++;
                    operations ++;
                    break;
                default: continue;    
            }
        }
        return operations;
    }
    
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,3,4};
    cout << solution.minimumOperations(nums) << endl;
    return 0;
}
