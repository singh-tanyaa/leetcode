//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
// class Solution{
// public:
// 	vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	class Solution{
public:
    bool check(int num[],int n){
        int l=(n-1)/2;
        int h=n/2;
        while(l>=0){
            if(num[l]>num[h]){
                return 0;
            }
            else if(num[l]<num[h]){
                return 1;
            }
            else{
                l--;
                h++;
            }
        }
        return 1;
    }
    bool isAll9(int num[],int n){
        for(int i=0;i<n;i++){
            if(num[i]!=9){
                return false;
            }
        }
        return true;
    }
  vector<int> generateNextPalindrome(int num[], int n) {
      // code here
      int i=(n-1)/2;
      int j=n/2;
      if(isAll9(num,n)){
          vector<int>ans(n+1,0);
          ans[0]=1;
          ans[n]=1;
          return ans;
      }
      vector<int>res;
      bool flag=check(num,n);
      while(i>=0){
          if(flag){
              if(num[i]==9){
                  num[i]=0;
                  flag=1;
              }
              else{
                  num[i]++;
                  flag=0;
              }
          }
          num[j]=num[i];
          i--;
          j++;
      }
      for(int i=0;i<n;i++){
          res.push_back(num[i]);
      }
      return res;
      
  }

};







	   


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends