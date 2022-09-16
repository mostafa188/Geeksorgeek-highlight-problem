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
        set<int>s;
        for(int i=0;i<v.size();i++){
          
          /*
            1.first the set is empty 
            2.if element isn't find then insert it
            3.if any element is found then it present twice then it remove
          */
            if(s.find(v[i]) != s.end())
                s.erase(v[i]);
            else
                s.insert(v[i]);
        }

        //pass this unique number to a vector
        for(auto it:s){
          if(it != 0) n.push_back(it);
        }
        return n;
    }
};

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
