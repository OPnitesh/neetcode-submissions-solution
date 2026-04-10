class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>>res;
         unordered_map<string,vector<string>>mp;

         for(string t:strs){
            string s=t;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
         }
        for(auto & x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};
