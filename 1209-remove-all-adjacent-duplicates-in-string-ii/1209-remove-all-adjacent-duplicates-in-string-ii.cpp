class Solution {
public:
   string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans="";
        s.push_back('*');//so that the last group of characters can be evaluated and pushed into the stack
        int n=s.length();
        char temp=s[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(temp==s[i]){
                
                count++;
				//counting adjacent same characters
                
            }
            else{
                if(count%k!=0){//multiples of k are considered to be removed
			
                    if(st.empty()==false){
                        pair<char,int>b=st.top();
                        if(b.first==temp){	//before inserting the {char,freq} pair into stack check it the char already present in the stack
						//if present remove it and add its freq to count
                            st.pop();
                            count=count+b.second;
                          
                        }
                    }
                    if(count%k!=0){//multiples of k are considered to be removed
                    st.push({temp,count%k});}
                }
                temp=s[i];//considering the current char that didnt match with the temp as temp 
                count=1;
            }
            
        }
        while(st.empty()==false){
           pair<char,int>c=st.top();
          //creating the ans string
            for(int i=0;i<c.second;i++){
                ans.push_back(c.first);
            }
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};