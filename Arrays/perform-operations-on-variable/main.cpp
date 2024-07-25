#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for( string opr : operations){
            if(opr.compare("--X") == 0 || opr.compare("X--") == 0)
                x--;
            else if(opr.compare("++X") == 0 || opr.compare("X++") == 0)
                x++;
            else 
                continue;
            
        } 
        return x;
    }
};

int main(){
    Solution solution;
    vector <string> operations = {"++X", "++X", "X++"};
    cout << solution.finalValueAfterOperations(operations);
    return 0;

}