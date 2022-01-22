#include<bits/stdc++.h>
using namespace std;

//unorder_map 复杂度O(n)
class Solution01 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};

//map 复杂度O(nlgn)
class Solution02 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> temp;
        for(int i=0;i<nums.size();i++){
            auto it=temp.find(target-nums[i]);
            if(it!=temp.end()){
                return {it->second,i};
            }
            else{
                temp.insert(pair<int,int>(nums[i],i));
            }
        }
        return {};
    }
};

int main()
{
    cout<<"kkk"<<endl;
}

