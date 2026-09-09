#include <iostream>
#include <vector>
using namespace std;

class NumArray {
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        return prefix[right];
        else
        return prefix[right]-prefix[left-1];
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

    NumArray* obj = new NumArray(nums);

    int left, right;
    cout << "Enter left and right: ";
    cin >> left >> right;

    cout << "Sum: " << obj->sumRange(left, right) << endl;

    delete obj;

    return 0;
}