//
// Created by amol_ on 23-Aug-2020.
//

class Solution {
public:
    string defangIPaddr(string address) {

        string new_string;

        for(int i=0 ;i<address.size();i++)
        {
            if (address[i] !='.' )
                new_string.push_back(address[i]);
            else
            {
                new_string.push_back('[');
                new_string.push_back(address[i]);
                new_string.push_back(']');

            }
        }



        // function for printing and verifying
        //cout<<" the new string is "<<new_string;
        return new_string;

    }
};