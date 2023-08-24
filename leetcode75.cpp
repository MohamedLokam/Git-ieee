class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mini;
    for(int i=0 ;i<nums.size()-1;i++)   
    {
        mini=i;
          for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]<nums[mini]){
                mini=j;
            }
           
        }
         swap(nums[mini],nums[i]);
    }
};
};
