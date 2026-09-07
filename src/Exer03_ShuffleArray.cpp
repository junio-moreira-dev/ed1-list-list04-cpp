//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // TODO: Return the array in the form [x1, y1, x2, y2, ..., xn, yn] given nums of 2n elements
    vector<int> shuffle(const vector<int>& nums, int n) {
        // Implementation goes here in 3-leetcode-solution
        return {};
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
    vector<int> in1 = {2, 5, 1, 3, 4, 7};
    int n1 = 3;
    vector<int> exp1 = {2, 3, 5, 4, 1, 7};
    vector<int> res1 = solution.shuffle(in1, n1);

    // out1.resize(res1.size()); // Alternative: resize to match result size
    vector<int> out1(res1.size());
    for (int i = 0; i < res1.size(); i++) {
        out1[i] = res1[i];
    }

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << " | n = " << n1 << "\n";
    cout << "Expected: "; printVector(exp1); cout << "\n";
    cout << "Output:   "; printVector(out1); cout << "\n";
    cout << "Status:   " << (out1 == exp1 ? "Passed" : "Failed") << "\n\n";

    // --- Test 2 ---
    vector<int> in2 = {1, 2, 3, 4, 4, 3, 2, 1};
    int n2 = 4;
    vector<int> exp2 = {1, 4, 2, 3, 3, 2, 4, 1};
    vector<int> res2 = solution.shuffle(in2, n2);

    // out2.resize(res2.size()); // Alternative: resize to match result size
    vector<int> out2(res2.size());
    for (int i = 0; i < res2.size(); i++) {
        out2[i] = res2[i];
    }

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << " | n = " << n2 << "\n";
    cout << "Expected: "; printVector(exp2); cout << "\n";
    cout << "Output:   "; printVector(out2); cout << "\n";
    cout << "Status:   " << (out2 == exp2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}