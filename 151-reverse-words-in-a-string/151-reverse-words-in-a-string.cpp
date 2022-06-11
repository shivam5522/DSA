class Solution {
public:
    string reverseWords(string s) {
        vector<string> final;
        string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') temp+=s[i];
            if(s[i]==' ' && temp!=""){
                final.push_back(temp);
                temp="";
            }
            if(i==s.length()-1 && s[i]!=' ' && temp!=""){
                final.push_back(temp);
            }
        }
        string main;
        for(int i=final.size()-1;i>=0;i--){
            if(i==0) main+=final[i];
            else{
                main+=final[i]+' ';
            }
        }
        return main;
    }
};