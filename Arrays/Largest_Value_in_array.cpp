#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        int size = nums.size();

        for(int i=0; i < size; i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
    return largest;
    }
};