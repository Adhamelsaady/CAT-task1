class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp; 
        vector<vector<string>> ans; 
        
        for(int i=0;i<strs.size();i++){
                string ss = strs[i]; 
                sort(ss.begin(), ss.end()); 
                mp[ss].push_back(strs[i]);
        }
        for(auto v : mp){
            ans.push_back(v.second);
        }
    
        return ans;
    }
};