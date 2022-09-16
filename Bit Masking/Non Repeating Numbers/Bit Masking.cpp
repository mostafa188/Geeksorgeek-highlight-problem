//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> singleNumber(vector<int> arr){
        vector<int>v;
        int x=0;
        int y=0;
        int XOR = arr[0];
        int n = arr.size();
        for(int i=1;i<n;i++){
            XOR ^= arr[i];
        }
        
        int set_bit_no = XOR &(~(XOR-1));
        
        for(int i=0;i<n;i++){
            int p;
            p = arr[i] & set_bit_no;
            if(p){
                x = x^arr[i];
            }else{
                y = y^arr[i];
            }
        }
        
        int maxi = max(x,y);
        int mini = min(x,y);
 	    v.push_back(mini);
 		v.push_back(maxi);
        return v;
    }
};
    

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends
