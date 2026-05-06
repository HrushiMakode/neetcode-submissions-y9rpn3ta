class Solution {
public:

    void swap(int &x,int &y){
        int temp = x;
        x = y;
        y = temp;
    }

    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        int r = nums.size() -1;
        int count = 0;
        for(int n:nums){
            if(n==val) count++;
        }
        while(l<r){
            if(nums[l]==val){
                while(l<r && nums[r]==val){
                    r--;
                }
                swap(nums[l],nums[r]);
            }
            l++;
        }
        return nums.size() - count;
    }
};