class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mps,mpt;
		for(int i = 0 ; i < s.length(); i++){
				mps[s[i]]++;
		}
		for(int i = 0 ; i < t.length(); i++){
				mpt[t[i]]++;
		}
		for(int i = 97 ; i < 96 + 26 ; i++){
				if(mps[char(i)] != mpt[char(i)])
						return false;
		}
		return true;
    }
};