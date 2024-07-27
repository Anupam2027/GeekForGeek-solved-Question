//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int>p;
        vector<int>n;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                p.push_back(arr[i]);
            }
            if(arr[i]<0)
            {
                n.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<p.size();i++)
        {
            arr[i]=p[i];
        }
        int i=p.size();
        int j=0;
        while(i<arr.size())
        {
          arr[i]=n[j];
          i++;
          j++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends