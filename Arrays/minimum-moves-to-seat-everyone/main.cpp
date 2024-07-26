#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int moves = 0;
        for(int i=0; i<seats.size(); i++){
            moves += abs(students[i] - seats[i]);
        }
        return moves;
    }
};

int main(){
    Solution solution;
    vector<int> seats = {4,1,5,9};
    vector<int> students = {1,3,2,6};
    cout << solution.minMovesToSeat(seats, students);
    return 0;
}