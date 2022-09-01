  priority_queue<long long,vector<long long>,greater<long long>>minh;
        for(int i=0;i<n;i++){
            minh.push(arr[i]);
        }
        long long a,b,sum=0,cost=0;
        while(minh.size()>1){
            a=minh.top();
            minh.pop();
            b=minh.top();
            minh.pop();
            sum=a+b;
            cost +=sum;
            minh.push(sum);
            
        }
        return cost;
