class Solution{
public:	
    
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int,vector<int>,greater<int> >minh;
	    int siz;
	    for(int i=0;i<n;i++){
	        minh.push(arr[i]);
	        siz=minh.size();
	        if(siz>k)
	        minh.pop();
	    }
	    siz--;
	    vector<int>v(siz);
	    while(siz){
	        v[siz-1]=minh.top();
	        minh.pop();
	        siz--;
	    }
	    
	    return v;
	}

};
