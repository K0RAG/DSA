#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int t;
       for(int i=0;i<nums.size();i++){
            if(nums[i]>target){
             t=i;
             break;
            }
            if(nums[i]==target) return i;
        }
        return t; 
    }
};

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    cout << "Insert position: " << obj.searchInsert(nums, target) << endl;

    return 0;
}