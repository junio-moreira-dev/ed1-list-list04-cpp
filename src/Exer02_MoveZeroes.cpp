//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Move all 0's to the end while maintaining relative order of non-zero elements
void move_zeroes(vector<ll>& nums) {
    // Implementation goes here in marathon-solution
}

int main() {
    FAST_IO;

    ll n;
    while (cin >> n) {
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
        }

        move_zeroes(nums);

        for (ll i = 0; i < n; i++) {
            cout << nums[i] << (i + 1 < n ? " " : "");
        }
        cout << "\n";
    }

    return 0;
}