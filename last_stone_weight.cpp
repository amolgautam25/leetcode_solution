class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        if(stones.size()==0)
            return 0;
        
        
        priority_queue<int> max_heap;
        int result=0;
        
        for ( int i=0 ; i <stones.size();i++)
        {
            max_heap.push(stones[i]);
        }
        
        while (max_heap.size()>1)
        {
            int element1 = max_heap.top();
            max_heap.pop();
            int element2 = max_heap.top();
            max_heap.pop();
            if (element1==element2)
            {
                // need to do nothing
                continue;
            }
            
            if(element1>element2)
            {
                max_heap.push(element1-element2);
                continue;
            }
            
            if(element2>element1)
            {
                max_heap.push(element2-element1);
                continue;
            }
        }
        
        if(max_heap.size()==0)
            return 0;
        else 
            result = max_heap.top();
        
        return result;
    }
};