#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> subsetArray;
        int subsetCount = 1 << n;

        for(int i=0; i < subsetCount; i++){
            vector<int>subset;
            for(int j = 0 ; j<n; j++){
                if(i & (1<<j))
                    subset.push_back(nums[j]);
            }
            subsetArray.push_back(subset);
        }
        int totals = 0;
        for(auto subsets: subsetArray){
            int calXOR = 0;
            for(int element: subsets){
                calXOR ^= element; 
            }
            totals += calXOR;
        }

        return totals;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {5,1,6};
    cout << solution.subsetXORSum(nums) << endl;
}