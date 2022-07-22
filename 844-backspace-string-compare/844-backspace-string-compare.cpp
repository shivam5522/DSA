class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        string s1,s2;
        for(auto i:s){
            if(i!='#') st.push(i);
            else{
                if(!st.empty()) st.pop();
            }
        }
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        for(auto i:t){
            if(i!='#') st.push(i);
            else{
                if(!st.empty()) st.pop();
            }
        }
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }
        if(s1==s2) return true;
        return false;
    }
};