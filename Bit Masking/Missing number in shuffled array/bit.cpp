//simple

class Solution{
    public:
    long long findMissing(long long a[], long long b[], int n)
    {
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=ans^a[i]^b[i];
        }
        ans=ans^a[n-1];
        return ans;
    }
};
