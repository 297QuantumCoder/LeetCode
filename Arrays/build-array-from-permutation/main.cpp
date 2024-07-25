#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> answer;
        for(int i=0; i< nums.size(); i++){
            answer.push_back(nums[nums[i]]);
        }
        return answer;
    }

    vector<int> buildArrayInPlace(vector<int>& nums){
        int n = nums.size();
        // encode the array elements
        for(int i=0; i< nums.size(); i++){
            nums[i] = nums[i] + n* (nums[nums[i]] % n);
        }

        // Decode the array elements
        for(int i=0; i< n; i++){
            nums[i] = nums[i]/n;
        }
        return nums;
    }
};

void printArray(vector<int>& answer);

int main(){
    Solution solution;
    vector<int> nums = {5,0,1,2,3,4};
    
    vector<int> answer = solution.buildArray(nums);
    printArray(answer);
    cout<< endl;
    vector<int> answer2 = solution.buildArrayInPlace(nums);
    printArray(answer2);
    return 0;

}

void printArray(vector<int>& answer){
    for(int i: answer){
        cout << i << ", ";
    }
}