//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    long long findMissing(long long int a[], long long int b[], int n)
    {
        vector<long long>v;
        set<long long>s;
        for(int i=0;i<n;i++) v.push_back(a[i]),s.insert(a[i]);
        for(int i=0;i<n-1;i++) v.push_back(b[i]);
        
        for(auto it:s){
            if(count(v.begin(),v.end(),it)%2 == 1) return it;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n], b[n-1];

        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
          cin>>b[i];
        }
        Solution ob;
        cout<<ob.findMissing(a, b, n)<<endl;
    }
}


// } Driver Code Ends
