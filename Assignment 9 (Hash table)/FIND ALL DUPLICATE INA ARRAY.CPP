class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
     unordered_map<int,int>mp;
    
     for(int a: nums)
     {
         mp[a]++;
         
    }
    for(auto a:mp){
        if(a.second>1){
        v.push_back(a.first);
        } 
    } 
     return v;
    }
};
