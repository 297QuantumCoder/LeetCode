#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairs = 0;
        for(int i=0; i< nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j])
                    goodPairs++;
            }
        }
        return goodPairs;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,3};
    cout << solution.numIdenticalPairs(nums) << endl;
}