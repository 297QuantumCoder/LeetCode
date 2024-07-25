#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;
        int n = words.size();
        for(int i=0; i<n; i++){
            if(words[i].find(x) != string::npos)
                index.push_back(i);
        }
        return index;
    }
};

int main(){
    Solution solution;
    vector<string> words = {"abc","bcd","aaaa","cbc"};
    vector<int> index = solution.findWordsContaining(words, 'a');
    for(int i: index)
        cout << i << ", ";
    return 0;
}