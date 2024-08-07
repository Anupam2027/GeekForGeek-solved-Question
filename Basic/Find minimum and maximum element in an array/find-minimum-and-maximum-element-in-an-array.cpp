//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        pair<long long , long long>p;
        int min=a[0];
        int max=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            min=a[i];
            if(a[i]>max)
            max=a[i];
            
        }
        p.first= min;
        p.second=max;
    return p;    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends