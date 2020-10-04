//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=sp-arrays-and-searching&batchId=152#ExpectOP
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// This function rotate array by D elements
// arr: input elements
// n: size of the array
void rotateArr(int arr[], int d, int n){

   // Your code here
   if(n==0 || n==1 )
    return;

   for(int i=0;i<d;i++){
        if(d==2)
        {
            arr[0]=arr[0]^arr[1];
            arr[1]=arr[0]^arr[1];
            arr[0]=arr[0]^arr[1];
            break;
        }
        if(i>=d-i-1)
            break;
        arr[i]=arr[i]^arr[d-i-1];
        arr[d-i-1]=arr[i]^arr[d-i-1];
        arr[i]=arr[i]^arr[d-i-1];

   }
   int k=1;
   for(int i=d;i<n;i++){
        if(n-d==2)
        {
            arr[d]=arr[d]^arr[n-1];
            arr[n-1]=arr[d]^arr[n-1];
            arr[d]=arr[d]^arr[n-1];
            break;
        }
        if(i>=n-k)
            break;
        arr[i]=arr[i]^arr[n-k];
        arr[n-k]=arr[i]^arr[n-k];
        arr[i]=arr[i]^arr[n-k];
        //cout<<arr[i]<<"d"<<endl;
        k++;
   }

  reverse(arr,arr+n);

}



// { Driver Code Starts.

int main() {
	//code

	int t;
	cin >> t;

	while(t--){
	    int n, d;
	    cin >> n >> d;

	    int arr[n];

	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }

	    rotateArr(arr, d,n);

	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;

	}

	return 0;
}  // } Driver Code Ends
