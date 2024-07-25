#include <iostream>
#include <vector>

using namespace std;

class Solution { 
    public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        vector <int> ans;                                               
        for(int i=0; i< 2*len; i++){
            if(i < len)
                ans.push_back(nums[i]);
            else
                ans.push_back(nums[i-len]);
        }
        return ans;
    }

    void printOutput(vector<int> answer){
        for(int i: answer){
            cout << i << ", "; 
        }
    }
};

int main(){
    Solution solution;
    vector<int> nums1 = {1,2,1};
    vector<int> nums2 = {1,3,2,1};

    vector<int> ans = solution.getConcatenation(nums1);
    for(int i: ans)
        cout << i << ", ";

}