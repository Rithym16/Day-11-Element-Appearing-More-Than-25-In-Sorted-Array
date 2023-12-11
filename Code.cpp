class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto &i:mp){
            if(i.second>(n/4)){
                return i.first;
            }
        }
        return 0;
    }
};
