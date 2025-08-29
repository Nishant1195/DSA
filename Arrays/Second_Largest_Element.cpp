#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargest(vector<int>& nums) {
        int largest = nums[0];
        int second_largest = INT32_MIN;
        int size = nums.size();
        for(int i=0; i <= size; i++){
            if(nums[i]>largest){
                second_largest = largest;
                largest = nums[i];
            }else if(nums[i]<largest && nums[i] > second_largest){
                second_largest = nums[i];
            }
        }
        
        return second_largest; 
    
    }

    int secondSmallest(vector<int>& nums) {
        int smallest = nums[0];
        int second_smallest = INT32_MIN;
        int size = nums.size();
        for(int i=0; i < size; i++){
            if(nums[i] < smallest){
                second_smallest = smallest;
                smallest = nums[i];
            }else if(nums[i]>smallest && nums[i]<second_smallest){
                second_smallest=nums[i];
            }
        }
        return second_smallest; // placeholder return
    }
};

int main() {
    vector<int> nums = {10, 20, 4, 45, 99};

    Solution obj;

    int resultLargest = obj.secondLargest(nums);
    cout << "Second largest element: " << resultLargest << endl;

    int resultSmallest = obj.secondSmallest(nums);
    cout << "Second smallest element: " << resultSmallest << endl;

    return 0;
}
