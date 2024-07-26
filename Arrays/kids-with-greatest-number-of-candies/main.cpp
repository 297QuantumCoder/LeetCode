#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> result;

        int maxCandy = INT_MIN;
        for(int candy: candies){
            maxCandy = max(maxCandy, candy);
        }

        for(int candy : candies){
            if((candy + extraCandies) >= maxCandy)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};

int main(){
    Solution solution;
    vector<int> candies = {12,1,12};
    int extraCandies = 10;
    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
    for(bool value: result)
        cout << value << ", " ;
    return 0;
}