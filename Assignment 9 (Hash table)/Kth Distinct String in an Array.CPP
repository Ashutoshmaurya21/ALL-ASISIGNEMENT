class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
         unordered_map<string,int>map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        int count = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(map[arr[i]] == 1)
            {
                count++;
                if(count == k)
                {
                    return arr[i];
                }
            }
        }
       return ""; 
    
        
    }
};
Console
