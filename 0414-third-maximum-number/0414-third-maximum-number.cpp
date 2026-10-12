class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max=INT_MIN;
        int max2=INT_MIN;
        int max3=INT_MIN;
        

unordered_set<int> distinct_elements(nums.begin(), nums.end());
        int count = distinct_elements.size();


    for(int i=0;i<nums.size();i++)
        if (nums[i] > max)
            max=nums[i];
        

    for(int i=0;i<nums.size();i++)
        if (nums[i] > max2 && nums[i] < max)
            max2=nums[i];
        
    for(int i=0;i<nums.size();i++)
        if (nums[i] >= max3 && nums[i] < max2)
            max3=nums[i];

        if(count>=3)
            return max3;
        else
            return max;}
};