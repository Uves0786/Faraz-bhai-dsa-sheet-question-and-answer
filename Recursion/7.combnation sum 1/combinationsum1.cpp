
permution
#include<bits/stdc++.h>
 using namespace std;
void permution(vector<int>nums,int index,vector<vector<int>>&ans)
{
    if (index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i =index; i <nums.size(); ++i)
    {
        swap(nums[index],nums[i]);
        permution(nums,index+1,ans);
        // backtrack
        swap(nums[index],nums[i]);
    }
}
int main()
{
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    vector<int>nums={1,2,3};
    int k=pow(2,nums.size());
    permution(nums,index,ans);
    sort(ans.begin(),ans.end());
    for (int i = 0; i <k; i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}


//combination sum 1
class Solution {
public:
    vector<vector<int>>ans;
    void subset(vector<int>&nums,vector<int>&output,int index,int k)
   {
    if (output.size()==k)
    {
        ans.push_back(output);
        return;
    }
    if (index==nums.size())
    {
        return;
    }
    // exclude call
    subset(nums,output,index+1,k);
    int element=nums[index];
    output.push_back(element);
    //include call
    subset(nums,output,index+1,k);
    output.pop_back();    
    }
    
    vector<vector<int>> combine(int n, int k)
    {
        vector<int>output,nums;
        int index=0;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
         subset(nums,output,index,k);
        return ans;
    }
};
