//
// Created by amol_ on 18-Aug-2020.
//
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> result(num_people);

        int loop=0;
        int current_candy=0;
        int current_position=0;

        while (candies>0){
            if(current_position==num_people){
                current_position=0;
                loop++;
            }

            current_candy = (current_position+1)+(loop*num_people);
            if (candies-current_candy < 0)
            {
                result[current_position]+=candies;
            }
            else{
                result[current_position]+=current_candy;
            }

            current_position++;
            candies=candies-current_candy;
        }


        //  cout<<"this is final answer"<<endl;
        //  for (int i=0;i<result.size();i++)
        //      cout<<result[i];

        return result;

    }
};
