class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n=nums.size();

        int i=0 ,j =1;

        while(i<n-1 && j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }else if(nums[i]>0 || nums[i]<0){
                i++;
            }
                j++;
        }
        
    }
};
