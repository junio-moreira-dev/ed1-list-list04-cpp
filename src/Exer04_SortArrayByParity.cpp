//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // TODO: Reorganize array so that all even integers precede all odd integers
    vector<int> sortArrayByParity(vector<int>& nums) {
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

// Helper to verify if every even number appears before any odd number
bool isParityPartitionValid(const vector<int>& in, const vector<int>& out) {
    if (in.size() != out.size()) return false;

    bool foundOdd = false;
    for (int i = 0; i < out.size(); i++) {
        if (out[i] % 2 != 0) {
            foundOdd = true;
        } else if (foundOdd) {
            return false; // Even number appeared after an odd number
        }
    }
    return true;
}

int main() {
    Solution solution;

    // --- Test 1 ---
    vector<int> in1 = {3, 1, 2, 4};
    vector<int> exp1 = {2, 4, 3, 1}; // One valid permutation
    vector<int> res1 = solution.sortArrayByParity(in1);

    // out1.resize(res1.size()); // Alternative: resize to match result size
    vector<int> out1(res1.size());
    for (int i = 0; i < res1.size(); i++) {
        out1[i] = res1[i];
    }
    bool passed1 = isParityPartitionValid(in1, out1);

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << "\n";
    cout << "Expected: "; printVector(exp1); cout << " (any even-before-odd arrangement)\n";
    cout << "Output:   "; printVector(out1); cout << "\n";
    cout << "Status:   " << (passed1 ? "Passed" : "Failed") << "\n\n";

    // --- Test 2 ---
    vector<int> in2 = {0};
    vector<int> exp2 = {0};
    vector<int> res2 = solution.sortArrayByParity(in2);

    // out2.resize(res2.size()); // Alternative: resize to match result size
    vector<int> out2(res2.size());
    for (int i = 0; i < res2.size(); i++) {
        out2[i] = res2[i];
    }
    bool passed2 = isParityPartitionValid(in2, out2);

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << "\n";
    cout << "Expected: "; printVector(exp2); cout << "\n";
    cout << "Output:   "; printVector(out2); cout << "\n";
    cout << "Status:   " << (passed2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}