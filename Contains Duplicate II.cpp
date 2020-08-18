//
// Created by amol_ on 18-Aug-2020.
//

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size= nums.size();
        unordered_map<int,int> hash_map;

        for (int i=0;i<size;i++)
        {
            if (hash_map.find(nums[i])!=hash_map.end())
            {
                //element is found
                if(i-hash_map[nums[i]]<=k) return true;
                else hash_map[nums[i]]=i;
            }
            else
            {
                hash_map[nums[i]]=i;
            }
        }
        return false;
    }
};