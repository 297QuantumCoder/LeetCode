#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int numberOfEmployees = 0;
        for(int employeeHours: hours){
            numberOfEmployees += (employeeHours >= target) ? 1 : 0;
        }
        return numberOfEmployees;
    }
};

int main(){
    Solution solution;
    vector<int> hours = {5,1,4,2,2};
    int target = 6;
    cout << solution.numberOfEmployeesWhoMetTarget(hours,target) << endl;
    return 0;
}