#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        for(vector<int> customer : accounts){
            int wealth = accumulate(customer.begin(), customer.end(), 0);
            if(wealth > maxWealth)
                maxWealth = wealth;
            
        }
        return maxWealth;
    }
};

int main(){
    Solution solution;
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << solution.maximumWealth(accounts) << endl;
}