class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>op;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
 priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

 for(auto &y:mp){
    minHeap.push({y.second, y.first});
    if(minHeap.size() > k){
        minHeap.pop();
    }
 }
 while (!minHeap.empty()) {
            op.push_back(minHeap.top().second);
            minHeap.pop();
        }
        reverse(op.begin(), op.end());
        return op;
        
    }
};

