// A simple program to count set-bits in all numbers from 1 to n.
#include <iostream>
using namespace std;

// A utility function to count set bits in a number x
unsigned int countSetBitsUtil(unsigned int x);

// Returns count of set bits present in all numbers from 1 to n
unsigned int countSetBits(unsigned int n){
	int bitCount = 0; 
  
	for (int i = 1; i <= n; i++)
		bitCount += countSetBitsUtil(i); //pass value i 

	return bitCount;
}

//A utility(উপযোগিতা) function to count set-bits in a number x
unsigned int countSetBitsUtil(unsigned int x){
	if (x <= 0)
		return 0;
	return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2);//use recursion 
}

// Driver program to test above functions
int main(){
	int n ;
  cin >> n;
  
	cout <<"Total set bit count is " << countSetBits(n);
	return 0;
}
