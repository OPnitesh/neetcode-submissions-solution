class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int>mp;
        for(auto k:nums){
            mp[k]++;
            
        }
      for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second>1) return true;
      }
      return false;

    }
};
