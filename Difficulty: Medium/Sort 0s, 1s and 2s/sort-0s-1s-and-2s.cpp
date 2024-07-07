//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        vector<int>v(3,0);
        for(int i=0;i<n;i++)
        {
            v[a[i]]++;
        }
        for(int i=0;i<v[0];i++)
        {
            a[i]=0;
        }
        for(int i=v[0];i<v[0]+v[1];i++)
        {
            a[i]=1;
        }
        for(int i=v[0]+v[1];i<n;i++)
        {
            a[i]=2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends