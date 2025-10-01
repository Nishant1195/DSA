#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest subarray with sum = h
int longestSubarrayWithSumK(vector<int>& arr, int k) {
    int n = arr.size();
    int len=0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
                sum += arr[j];
            
            if(sum==k) { 
                len = max(len, j-i+1);
              
            } 
        }
    }
    return len; // return the answer
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Hardcoded test case
    vector<int> arr = {1, 2, 3, 1, 1};
    int h = 5;

    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nTarget sum: " << h << "\n";

    int result = longestSubarrayWithSumK(arr, h);
    cout << "Length of longest subarray with sum " << h << " is: " << result << "\n";

    return 0;
}