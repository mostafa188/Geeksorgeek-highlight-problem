#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int>n;
        	// Create a Map Set to store the numbers
        multiset<int> s;

	      /*Iterate through the array and check if each
	        element is present or not in the set. If the
          element is present, remove it from the array
          otherwise add it to the set.
        */
	    for (int i = 0; i < nums.size(); i++) {
		      auto it = s.find(nums[i]);
		      if (it != s.end())
			        s.erase(it);
		      else
			        s.insert(nums[i]);
	    }
      
        //pass this unique number to a vector
        for(auto it:s){
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
