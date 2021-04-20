#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        /* Example
        Solution solution;
        std::vector<int> nums;
        nums.push_back(2);
        nums.push_back(7);
        nums.push_back(11);
        nums.push_back(15);
        
        std::vector<int> ret = solution.twoSum(nums, 9);

        for (std::vector<int>::const_iterator i = ret.begin(); i != ret.end(); ++i)
            std::cout << *i << ' ';
        std::cout << std::endl;
        */
        /*
        std::vector<int> result;
        for (auto i = nums.begin(); i < nums.end(); i++) {
            auto it2 = find(i+1, nums.end(), target - *i);
            if (it2 != nums.end()) {
                result.push_back(i - nums.begin());
                result.push_back(it2 - nums.begin());
                break;
            }
        }
        return result;
        */
        /*
        std::unordered_map<int, int> _map;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int complement = target - num;
            auto it = _map.find(complement);
            if(it != _map.end()){
                return {it->second, i};
            }
            _map[num] = i;
        }
        return {};
        */
    }
};

int main(){
    std::cout<<"Hello"<<std::endl;



    return 0;
}