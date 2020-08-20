//
// Created by amol_ on 20-Aug-2020.
//

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result;

        if (numRows<=0){
            return result;
        }

        for ( int i=1 ; i <= numRows ; i++)
        {
            vector<int> thisRow;

            // now we populate this row

            int size = i;
            for ( int j=0 ; j<size ; j++ ){
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

                if (i>2){
                    thisRow.push_back(result[i-2][j-1] + result[i-2][j]);
                }


            }

            result.push_back(thisRow);
        }
        return result;

    }
};