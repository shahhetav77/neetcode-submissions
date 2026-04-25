class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<pair<int,int>> v;
        vector<int> result;
        for(int x:nums){
            m[x]++;
        }
        for(auto x:m){
            v.push_back({x.second,x.first});
        }
        sort(v.rbegin(), v.rend());
        for(int i=0;i<k;i++){
            result.push_back(v[i].second);
        }
        return result;
    }
};
