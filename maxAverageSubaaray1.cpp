#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=0,sum=0,maxsum=INT_MIN;
        while(r<nums.size()){
            sum+=nums[r];
            if(r-l+1>k){
                sum-=nums[l];
                l++;
            }
            if(r-l+1==k){
                maxsum=max(maxsum,sum);
            }
            r++;
        }
        double ans=1.0*maxsum/k;
        return ans;
    }
};

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    Solution obj;
    cout << obj.findMaxAverage(nums, k) << endl;

    return 0;
}