class Solution {
public:
    //store frequence of every element in an vector 
    //sort the vector so higest frequency is at righ most and all the same frequencies will come together so that it will be easier in calculations
    //run a loop from i=24 because 25is the last element which is dont need to be checked
    //now if any 2 frequencies are same then we make it equal to the previous -1 and add quantnity of removed in delete variable
    //now that element can be lesser then next element so apply same for that element 
    //now if any element is 0 means all its left elements are also 0, so break the loop
    //return delete variable as it as addition of all the deleted element
    int minDeletions(string s) {
        vector<int>freq(26);
        for(char &ch: s)
            freq[ch-'a']++;
        sort(freq.begin(),freq.end());
        int del=0;
        for(int i=24;i>=0;--i)
        {
            if(freq[i]==0)
                break;
            if(freq[i]>=freq[i+1])
            {
                int prev=freq[i];
                freq[i]=max(0,freq[i+1]-1);
                del+=prev-freq[i];
            }
        }
        return del;
    }
};