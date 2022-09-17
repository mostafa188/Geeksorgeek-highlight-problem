//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here

        int ans = 0;
        
        for(int i = 0; i < 32; i++){
            int count = 0;
            for(int j = 0; j < N; j++){
                if(arr[j]& 1<<i ){
                    count++;
                }
            }
            if(count%3 == 1) ans += 1<<i;
        }
        
        return ans;
    }
};
