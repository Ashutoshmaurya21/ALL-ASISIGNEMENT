class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mp;
    int count=0;
        for(int i:stones){
            mp[i]++;

        }
        for(auto j:jewels){
            if(mp[j]>0){
         count=count+mp[j];
            }
          
        }
     
       return count; 
    }
};
