//
// Created by amol_ on 03-Sep-2020.
//

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int length = s.length();

        for (int i=length/2 ; i >=1 ; i--){
            if ( length %i==0){
                int num_repeat = length/i;
                string substring = s.substr(0,i);
                string new_string="";
                for ( int j=0 ; j < num_repeat ; j ++ ){
                    new_string+=substring;
                }
                if (new_string==s) return true;
            }
        }

        return false;

    }
};