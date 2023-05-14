//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        /* int s=0,e=(n-1), mid=(s+(e-s)/2), diff=(arr[n-1]-arr[0])/n;
        //int s=0,e=(n-1);
        while(s<=e)
        {
            if(arr[mid+1]-arr[mid]!=diff)
            {
                return arr[mid]+diff;
            }else if(arr[mid]-arr[mid-1]!=diff)
            {
                return arr[mid-1]+diff;
                
            }else if(mid>0 && arr[mid]-arr[0]!=mid*diff)    
            {
                e= mid-1;}
            
            else{
                s=mid+1;
            }
         }
        return -1;*/
        int start = 0;
        int end = n - 1;
        long diff = static_cast<long>(arr[end] - arr[start]) / n;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (arr[mid + 1] - arr[mid] != diff) {
                return arr[mid] + diff;
            } else if (arr[mid] - arr[mid - 1] != diff) {
                return arr[mid - 1] + diff;
            }

            if (arr[mid] != arr[0] + (mid - 0) * diff) {
                end = mid - 1;
            } else {
                ++start;
            }
        }
        
        return -1;
}
};
        
        
    

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends