class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramGroups;
    
    // Iterate through each string in the input vector
    for (const string& str : strs) {
        // Sort the string to get the key
        string key = str;
        sort(key.begin(), key.end());
        
        // Add the original string to the corresponding anagram group
        anagramGroups[key].push_back(str);
    }
    
    // Prepare the result
    vector<vector<string>> result;
    for (const auto& group : anagramGroups) {
        result.push_back(group.second);
    }
    
    return result;
}
};
