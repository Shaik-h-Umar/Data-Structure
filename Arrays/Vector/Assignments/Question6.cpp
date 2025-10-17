/*
Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
that i != j, i != k, and j != k, and nums [i] + nums[j] + nums[k] = = x. Where k is an integer
given by the user.
Note: The solution set must not contain duplicate triplets and should not have 3 loops.
Input: [-1,0,1,2,-1,-4] x=0
Output: 2
Explanation: The two triplets are: -1,0,1 and 1,2,-1
Input: [1,2,3] x=5
Output: 0
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int x = 0;
    int count = 0;

    sort(nums.begin(), nums.end()); // Step 1: sort

    int n = nums.size();
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate first element

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == x) {
                count++;
                // skip duplicates for left and right
                int leftVal = nums[left], rightVal = nums[right];
                while (left < right && nums[left] == leftVal) left++;
                while (left < right && nums[right] == rightVal) right--;
            } else if (sum < x) {
                left++;
            } else { // sum > x
                right--;
            }
        }
    }

    cout << "Number of unique triplets: " << count << endl;
    return 0;
}
