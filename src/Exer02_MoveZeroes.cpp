//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // TODO: Move all 0's to the end of the array while maintaining the relative order of the non-zero elements
    void moveZeroes(vector<int>& nums) {
        // Implementation goes here in 3-leetcode-solution
    }
};

void printVector(const vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << (i + 1 < nums.size() ? ", " : "");
    }
    cout << "]";
}

int main() {
    Solution solution;

    // --- Test 1 ---
    vector<int> in1 = {0, 1, 0, 3, 12};
    vector<int> exp1 = {1, 3, 12, 0, 0};
    vector<int> nums1 = in1;
    solution.moveZeroes(nums1);

    // out1.resize(nums1.size()); // Unnecessary since vector size remains unchanged
    vector<int> out1(nums1.size());
    for (int i = 0; i < nums1.size(); i++) {
        out1[i] = nums1[i];
    }

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << "\n";
    cout << "Expected: "; printVector(exp1); cout << "\n";
    cout << "Output:   "; printVector(out1); cout << "\n";
    cout << "Status:   " << (out1 == exp1 ? "Passed" : "Failed") << "\n\n";

    // --- Test 2 ---
    vector<int> in2 = {0, 0, 0, 1};
    vector<int> exp2 = {1, 0, 0, 0};
    vector<int> nums2 = in2;
    solution.moveZeroes(nums2);

    // out2.resize(nums2.size()); // Unnecessary since vector size remains unchanged
    vector<int> out2(nums2.size());
    for (int i = 0; i < nums2.size(); i++) {
        out2[i] = nums2[i];
    }

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << "\n";
    cout << "Expected: "; printVector(exp2); cout << "\n";
    cout << "Output:   "; printVector(out2); cout << "\n";
    cout << "Status:   " << (out2 == exp2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}