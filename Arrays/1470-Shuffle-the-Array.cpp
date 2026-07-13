/*
Problem: 1470. Shuffle the Array
Difficulty: Easy

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ar(2*n);

        for(int i=0,j=n,k=0;i<n && j<2*n;i++,j++,k+=2){
            ar[k]=nums[i];
            ar[k+1]=nums[j];
        }

        return ar;
    }
};
