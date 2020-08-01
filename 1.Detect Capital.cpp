class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int count=0;
        if(word.length()==0)
            return true;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A'&& word[i]<='Z')
                count++;
            
        
        }
       // cout<<count;
        
        if(count==0||count==word.length())
            return true;
        
        if(count==1 && (word[0]>='A'&&word[0]<='Z'))
            return true;
        
        return false;
    }
};
