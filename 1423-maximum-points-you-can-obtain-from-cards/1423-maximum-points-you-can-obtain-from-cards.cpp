class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
       int sum=0;
       for(int i=0;i<k;i++)
           sum+=cards[i];
       int maxsum=sum;
       int j=cards.size()-1,i=k-1;
       while(k--)
       {
           sum-=cards[i--];
           sum+=cards[j--];
           maxsum=max(sum,maxsum);
       }
        return maxsum;
    }
};