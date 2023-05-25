//subsets leetcode quetion
#include<bits/stdc++.h>
 using namespace std;
void subset(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans)
{
    if (output.size()==2)
    {
        ans.push_back(output);
        return;
    }
    if (index==nums.size())
    {
        return;
        // ans.push_back(output);
        // return;
    }
    // exclude call
    subset(nums,output,index+1,ans);
    int element=nums[index];
    output.push_back(element);

    //include call
    subset(nums,output,index+1,ans);
    // output.pop_back();
}
int main()
{
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    vector<int>nums={1,2,3,4};
    int k=pow(2,nums.size());
    subset(nums,output,0,ans);
    sort(ans.begin(),ans.end());
    for (int i = 0; i <k; i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}
