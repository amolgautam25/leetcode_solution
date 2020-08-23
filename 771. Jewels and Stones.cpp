//
// Created by amol_ on 23-Aug-2020.
//

class Solution {
public:
    int numJewelsInStones(string J, string S) {

        unordered_set<char> hash_set;
        int count=0;

        for ( int i=0;i<J.length();i++)
            hash_set.insert(J[i]);


        for ( int j=0 ; j<S.length();j++)
        {
            if(hash_set.find(S[j])!=hash_set.end())
                count++;
        }


        return count;
    }
};