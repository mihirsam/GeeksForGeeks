//https://practice.geeksforgeeks.org/problems/reverse-the-array/1/?track=sp-arrays-and-searching&batchId=152
// { Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <algorithm>
using namespace std;


 // } Driver Code Ends

//User function Template for C++

//Complete this function
int reverseArray(int arr[],int n)
{
   //Your code here
   reverse(arr,arr+n);

}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];

	    reverseArray(arr,n);

	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }

	    cout<<endl;

	}
	return 0;
}  // } Driver Code Ends
