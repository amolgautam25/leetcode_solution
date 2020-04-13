class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int> count_index;
        int max_len=0;
        int count = 0 ;
        
        count_index[0]=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==0)
                count--;
            if(nums[i]==1)
                count++;
            
            // find the copunt in hash_map 
            
            // if the value is not found 
            if(count_index.find(count)!=count_index.end())
            {
                   max_len = max(max_len,i-count_index[count]);
                
            }
            else
            {
             count_index[count]=i;
            }
                            
        }
        
        
        
        
        return max_len;
    }
};


// mistakes i made , not entering 0,-1 