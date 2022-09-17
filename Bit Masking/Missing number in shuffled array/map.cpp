//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    long long findMissing(long long int a[], long long int b[], int n){
       map<long long,long long>m;
        for(int i=0;i<n;i++){
          m[a[i]]++;
        }

        for(int i=0;i<n-1;i++){
          m[b[i]]++;
        }
        long long int ans=0;
          for(auto it : m){
                    if(it.second%2 == 1){
                              ans = it.first;
                    }
          } 
       return ans;
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
