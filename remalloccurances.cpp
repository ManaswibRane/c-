class Solution {
    public:
        string removeOccurrences(string s, string part) {
            while(true){
               int idx= s.find(part);
               if(idx==string::npos){
                break;
               }
               s.erase(idx,part.length());
            }
            return s;
    
        }
    };
    class Solution {
        public:
        bool check(stack<char> & st,string &part ,int n){
          stack<char> temp=st;
            for(int i=n-1;i>=0;i--){
                if(part[i]==temp.top()){
                    temp.pop();
                }else{
                    return false;
                }
            }
            return true;
        }
            string removeOccurrences(string s, string part) {
                 int m=s.length(),n=part.length();
                 stack <char> st;
                 for(int i=0;i<m;i++){
                    st.push(s[i]);
                    if(st.size()>=n && check(st,part,n)){
                        for(int i=0;i<n;i++){
                            st.pop();
                        }
                    }
                 }
                 string ans="";
                 while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                 }
                 reverse(begin(ans),end(ans));
                 return ans;
            }
        };
        
        
      
    
    //kmp
    //npos no position