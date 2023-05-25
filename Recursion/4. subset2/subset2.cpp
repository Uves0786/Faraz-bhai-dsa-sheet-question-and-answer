
 //subsets 2
class Solution {
public:
    vector<vector<int>>ans;
    void subset(vector<int>&nums,vector<int>&output,int index)
    {
    if (index==nums.size())
    {
        ans.push_back(output);
        return;
    }
    // include call
    output.push_back(nums[index]);
     subset(nums,output,index+1);
      output.pop_back();
   while(index+1<nums.size() and nums[index]==nums[index+1])
   {
       index++;
   }
    //exclude call
    subset(nums,output,index+1);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
       vector<int>output;
       sort(nums.begin(),nums.end());
        subset(nums,output,0);
        return ans; 
    }
};
