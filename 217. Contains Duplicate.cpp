//
// Created by amol_ on 02-Sep-2020.
//

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash_map;

        for (int i=0;i<nums.size();i++)
        {
            if (hash_map.find(nums[i])!=hash_map.end())
            {
                //element found
                return true;
            }
            else
            {
                hash_map[nums[i]]=i;
            }

        }

        return false;}

};