//
// Created by amol_ on 20-Aug-2020.
//

class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>> result;

        if (rowIndex<0)
            return vector<int>();

        for ( int i=0 ; i <= rowIndex ; i++)
        {
            vector<int> thisRow;

            // now we populate this row

            int size = i+1;
            for ( int j=0 ; j<size ; j++ ){
                // setting first and last element to one
                if (j==0)
                {
                    thisRow.push_back(1);
                    continue;
                }


                if (j==size-1)
                {
                    thisRow.push_back(1);
                    continue;
                }

                // checking for row over boound , and setting elements via DP ( kind of )
                if (i>1){
                    thisRow.push_back(result[i-1][j-1] + result[i-1][j]);
                }


            }

            result.push_back(thisRow);

            if ( i== rowIndex){
                return thisRow;
            }
        }


        return vector<int>();

    }
};
