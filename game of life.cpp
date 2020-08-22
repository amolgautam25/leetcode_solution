//
// Created by amol_ on 22-Aug-2020.
//

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

        int rows = board.size();
        int coloumn = board[0].size();


        // use this to initialise a new copy of the board
        vector<vector<int>> copy(board.begin(),board.end());


        for ( int i=0 ; i <rows ; i++)
        {
            for ( int j=0; j<coloumn ; j++)
            {
                int surround= neighbour(copy,i+1,j)+neighbour(copy,i-1,j)+neighbour(copy,i,j+1)+neighbour(copy,i,j-1)+neighbour(copy,i-1,j-1)+neighbour(copy,i-1,j+1)+neighbour(copy,i+1,j-1)+neighbour(copy,i+1,j+1);

                //     cout<<"surround"<<"i "<<i<<"j"<<j<<" = "<<surround<<endl;

                // alive
                if (copy[i][j]==1)
                {
                    if(surround<2)
                    {
                        board[i][j]=0;
                        continue;
                    }
                    if (surround ==2 || surround ==3 )
                    {
                        board[i][j]=1;
                        continue;
                    }
                    if (surround >3 )
                    {
                        board[i][j]=0;
                        continue;
                    }
                }

                if (copy[i][j]==0)
                {
                    if (surround==3)
                    {
                        board[i][j]=1;
                        continue;
                    }
                }

            }

        }






        /*
             for ( int i=0 ; i <rows ; i++)
             {
                 for ( int j=0; j<coloumn ; j++)
                 {
                     cout<<copy[i][j];
                 }
                 cout<<endl;
             }
             */

    }

    int neighbour (vector<vector<int>>& copy,int i,int j)
    {
        if (i<0 || i>=copy.size() || j <0 || j>=copy[0].size())
            return 0;
        if (copy[i][j]==1)
        {
            // cout<<"cood" << i <<","<<j<<endl;
            return 1;}

        return 0;
    }
};