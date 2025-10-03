#include <vector>
#include <unordered_map>
using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // Map to store number and its index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // Return indices of the two numbers
            }
            num_map[nums[i]] = i; // Store the index of the current number
        }
        return {}; // Return empty vector if no solution is found
    }
};