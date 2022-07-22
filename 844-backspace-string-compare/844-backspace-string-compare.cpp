class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;
        string s1,s2;
        for(auto i:s){
            if(i!='#') st.push(i);
            else{
                if(!st.empty()) st.pop();
            }
        }
        while(!st.empty()){
            cout<<st.top()<<endl;
            s1+=st.top();
            st.pop();
        }
        for(auto i:t){
            if(i!='#') st2.push(i);
            else{
                if(!st2.empty()) st2.pop();
            }
        }
        while(!st2.empty()){
            s2+=st2.top();
            st2.pop();
        }
        if(s1==s2) return true;
        return false;
    }
};