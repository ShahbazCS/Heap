class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
         unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(auto i=mp.begin();i!=mp.end();i++){
            minh.push({i->second,i->first});
            if(minh.size()>k) minh.pop();
        }
        vector<int>v(k);
        int i=0;
        int l=k;
        while(l--){
            v[l]=minh.top().second;
            
          //  cout<<minh.top().second;
            minh.pop();
        }
        int j;
        for(int i=0;i<k;i++){
            j=i+1;
            while(mp[v[i]]==mp[v[j]]){
                j++;
            }
            sort(v.begin()+i,v.begin()+j-1,greater<int>());
            i=j;
        }
       // sort(v.begin(),v.end());
        return v;
    }
};
