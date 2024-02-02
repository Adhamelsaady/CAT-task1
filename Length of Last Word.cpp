class Solution {
public:
    int lengthOfLastWord(string s) {
       stringstream inp(s);
        string word;
        while(inp >> word){}
        return word.size();
    }
};