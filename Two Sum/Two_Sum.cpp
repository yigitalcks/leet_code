#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> dif;
        
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int n = target-nums[i];
            if (dif.find(n) != dif.end()) {
                res.push_back(dif.find(n) -> second);
                res.push_back(i);
                break;
            }
            dif.insert(pair<int, int>(nums[i], i));
        }
        return res;
    }
};

int main() {

    vector<int> a = {2, 8, 11, 6, 3};
    int target = 9;

    Solution ex;
    for(int i : ex.twoSum(a, target)) {
        cout << i << " ";
    }
    
    return 0;
}