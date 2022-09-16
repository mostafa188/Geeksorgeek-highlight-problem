#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> arr) {
        vector<int>v;
	    //unordered_map<int, int> m;
	    map<int, int> m;
	    for (int i = 0; i < arr.size(); i++) {
		    m[arr[i]]++;
	    }

	 /*
     1.Traverse through the map and check if its second element that is the frequency is 1 or not.
     2.If this is 1 than it is the non-repeating element print it.
     3.It is clearly mentioned in problem that all numbers except two are repeated once. 
   */
	   for (auto& x : m){
		    if (x.second == 1){
			      v.push_back(x.first);
		    }
	  }
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
