class Solution{
    public:
    long long ksmall(long long A[],long long k,long long n){
        priority_queue<long>maxh;
        for(int i=0;i<n;i++){
            maxh.push(A[i]);
        }
        while(maxh.size()>k){
            maxh.pop();
        }
        return maxh.top();
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        long long s1=ksmall(A,K1,N);
        long long s2=ksmall(A,K2,N);
        long long sum=0;
        for(int i=0;i<N;i++){
            if(A[i]>s1 && A[i]<s2)
            sum+=A[i];
        }
       return sum; 
        
    }
};
