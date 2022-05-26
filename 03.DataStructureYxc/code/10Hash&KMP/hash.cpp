#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

typedef pair<int, int> PII;

vector<PII> twosub(vector<int>& nums, int target) {
    int i,j;
    vector<PII> res;
    for(i=0;i<nums.size()-1;i++)
    {
        for(j=i+1;j<nums.size();j++)
        {
            if(nums[i]-nums[j]==target || nums[i]-nums[j] == 0 - target)
            {
                res.push_back({i,j});
            }
        }
    }
    return res;
}