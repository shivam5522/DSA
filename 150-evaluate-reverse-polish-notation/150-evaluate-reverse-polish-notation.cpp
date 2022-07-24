class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n1=0;
        int n2=0;
        int result=0;
        stack<int> st;
        unordered_set<string> ops({"+", "-", "*", "/"});
        for(auto i: tokens){
            if(ops.find(i)==ops.end()){
                st.push(stoi(i));
            }
            else{
                n2=st.top();
                st.pop();
                n1=st.top();
                st.pop();
                if(i=="+") result=n1+n2;
                if(i=="-") result=n1-n2;
                if(i=="*") result=n1*n2;
                if(i=="/") result=n1/n2;
                st.push(result);
            }
        }
        return st.top();
    }
};