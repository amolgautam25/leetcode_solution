//
// Created by amol_ on 22-Aug-2020.
//

class Solution {
public:
    /**
     * @param costs: n x 3 cost matrix
     * @return: An integer, the minimum cost to paint all houses
     */
    int minCost(vector<vector<int>> &costs) {

        if (costs.size()==0)
            return 0;

        for ( int i=1 ; i < costs.size();i++)
        {
            costs[i][0] += min(costs[i-1][1],costs[i-1][2]);
            costs[i][1] += min(costs[i-1][0],costs[i-1][2]);
            costs[i][2] += min(costs[i-1][0],costs[i-1][1]);
        }

        return min(costs[costs.size()-1][2],min(costs[costs.size()-1][0],costs[costs.size()-1][1]));
    }
};