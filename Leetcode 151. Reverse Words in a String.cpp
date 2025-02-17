class Solution {
public:
    string reverseWords(string s){
        stringstream ss(s);
        string word;
        string ans="";
        stack<string>p;
        while(ss>>word)
        {
            if(word!=" ")
            {
                p.push(word);
            }
        }
       while(!p.empty())
       {
        ans+=p.top();
        p.pop();
        ans+=" ";
       }
       ans.erase(ans.end()-1);
       return ans;   
    }
};
