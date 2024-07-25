#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> largest_locals(n-2, vector<int>(n-2));
        
        for(int i=0; i<n-2; i++){

            for(int l = 0; l< n-2; l++){
                
                int maxElement = INT_MIN;
            
                for(int j = i; j < i+3; j++){
                    for(int k = l; k < l+3; k++){
                        if(grid[j][k] > maxElement)
                            maxElement = grid[j][k];
                    }
                }

                largest_locals[i][l] = maxElement;
            }
        }
        return largest_locals;
    }
};

int main(){
    Solution solution;
    vector<vector<int>> grid = {{1,1,1,1,1},{1,1,1,1,1},{1,1,2,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    vector<vector<int>> largest_locals = solution.largestLocal(grid);
    for(vector<int> array: largest_locals){
        for(int element: array)
            cout << element << ", ";
        cout << endl;
    }
}