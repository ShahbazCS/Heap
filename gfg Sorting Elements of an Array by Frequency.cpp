#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    void frequencySort(vector<int>& nums) {
        
          unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        //map built
        
        priority_queue<pair<int,int>>minh;
        for(auto i=mp.begin();i!=mp.end();i++){
            minh.push({i->second,i->first});
           // if(minh.size()>k) minh.pop();
        }
        //heap built
        int n=nums.size();
         vector<int>v(n);
        int i,j=0;;
        int l=minh.size();
        while(l--){
            for(i=j;i<j+minh.top().first;i++){
                v[i]=minh.top().second;
            }
            j=i;
            minh.pop();
        }
        // vector built according to min freq, heap empty
        
         for(i=0;i<n-1; i=j){
            j=i+1;
            while(mp[v[i]]==mp[v[j]]){
                j++;
                if(j>=n) break;
            }
        
              sort(v.begin()+i,v.begin()+j);
           
        }
     for(i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }   
    }
     



int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>nums(n);
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    frequencySort(nums);
	    cout<<endl;
	}
	return 0;
}
