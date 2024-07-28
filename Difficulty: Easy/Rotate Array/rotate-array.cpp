//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction
    
     void reverse(int *arr, int start,int end)
    {
        int i=start,j=end;
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    void rotateArr(int arr[], int d, int n){
        d= d % n;  // In case k is greater than the array size
        reverse(arr,0,n-1); //first reverse entire array
        reverse(arr,n-d,n-1); //then reverse last  d elements
        reverse(arr,0,n-d-1); //then reverse remaining elements 
        
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends