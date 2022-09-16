//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> v) 
    {
        vector<int>n;
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size()-1;i++){
          int a =v[i]^v[i+1]; 
            if(a == 0){
                v[i] = 0;
                v[i+1] = 0;
                i++;
            }
        }

        for(auto it:v){
          if(it != 0) n.push_back(it);
        }
        return n;
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
