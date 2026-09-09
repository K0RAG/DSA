#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<long,int> mpp;
        mpp[0]=1;
        long sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mpp.find(sum-k)!=mpp.end()){
                count+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return count;
    }
};

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    Solution obj;

    cout << "Number of subarrays: " << obj.subarraySum(nums, k) << endl;

    return 0;
}