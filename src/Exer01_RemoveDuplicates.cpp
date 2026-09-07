//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // TODO: Remove duplicates in-place from sorted array and return the number of unique elements (k)
    int removeDuplicates(vector<int>& nums) {
        // Implementation goes here in 3-leetcode-solution
        return 0;
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
    vector<int> in1 = {1, 1, 2};
    vector<int> exp1 = {1, 2};
    vector<int> nums1 = in1;
    int k1 = solution.removeDuplicates(nums1);

    // out1.resize(k1); // Alternative: resize physical vector to match logical size k
    vector<int> out1(k1);
    for (int i = 0; i < k1; i++) {
        out1[i] = nums1[i];
    }

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << "\n";
    cout << "Expected: "; printVector(exp1); cout << " | k = " << exp1.size() << "\n";
    cout << "Output:   "; printVector(out1); cout << " | k = " << k1 << "\n";
    cout << "Status:   " << (out1 == exp1 ? "Passed" : "Failed") << "\n\n";

    // --- Test 2 ---
    vector<int> in2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> exp2 = {0, 1, 2, 3, 4};
    vector<int> nums2 = in2;
    int k2 = solution.removeDuplicates(nums2);

    // out2.resize(k2); // Alternative: resize physical vector to match logical size k
    vector<int> out2(k2);
    for (int i = 0; i < k2; i++) {
        out2[i] = nums2[i];
    }

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << "\n";
    cout << "Expected: "; printVector(exp2); cout << " | k = " << exp2.size() << "\n";
    cout << "Output:   "; printVector(out2); cout << " | k = " << k2 << "\n";
    cout << "Status:   " << (out2 == exp2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}