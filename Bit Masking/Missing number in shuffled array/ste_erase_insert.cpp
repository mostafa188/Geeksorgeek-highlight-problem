//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define maxi a = a>b ? a:b
class Solution{
    public:
    long long findMissing(long long int a[], long long int b[], int n)
    {
        set<long long>s;
        for(int i=0;i<n;i++){
            if(s.find(a[i]) != s.end()) s.erase(a[i]);
            else s.insert(a[i]);
        }
        for(int i=0;i<n-1;i++){
            if(s.find(b[i]) != s.end()) s.erase(b[i]);
            else s.insert(b[i]);
        }
        auto it = s.begin();
        
        long long c = *next(s.begin(),0);
        return c;
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
