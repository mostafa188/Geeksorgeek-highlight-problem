//User function Template for C++

class Solution {
  public:
    int singleElement(int a[] ,int n) {
        // code here
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1] && a[i]!=a[i-1])
            return a[i];
        }
    }
};
