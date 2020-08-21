//
// Created by amol_ on 21-Aug-2020.
//


// just move the even number to the even_index position , the odd numbvers will align itself.

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {

        if (A.size()==0)
            return A;

        int even_index=0;

        for ( int i=0 ; i <A.size();i++)
        {
            if (A[i]%2==0)
            {
                int temp = A[even_index];
                A[even_index]=A[i];
                A[i]= temp;
                even_index++;
            }
        }
        return A;
    }
};
