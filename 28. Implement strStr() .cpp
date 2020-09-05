//
// Created by amol_ on 03-Sep-2020.
//

class Solution {
public:
    int strStr(string haystack, string needle) {

        if (haystack.length()==0 && needle.size()==0)
            return 0;
        if (haystack.length()==0 && needle.size()!=0)
            return -1;
        if (haystack.length()!=0 && needle.size()==0)
            return 0;

        int subSize = needle.length(), haySize = haystack.length();

        for ( int i=0 ; i<=haySize-subSize;i++)
        {
            string sub = haystack.substr(i, needle.length());

            if(sub==needle)
                return i;
        }


        return -1;
    }
};