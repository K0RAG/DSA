#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     vector<int> prefix;
     int l=1,r=nums.size()-1;
     prefix.push_back(nums[0]);
     for(int i=1;i<nums.size();i++)
     prefix.push_back(prefix[i-1]+nums[i]);  

    if(prefix[nums.size()-1]==nums[0])
     return 0;

     while(l<=r){
        if(prefix[l]==prefix[r]-prefix[l-1])
        return l;
        l++;
     }
     return -1;
    }
};

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    cout << "Pivot index: " << obj.pivotIndex(nums) << endl;

    return 0;
}