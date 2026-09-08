//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Remove duplicates in-place from sorted vector and return the count of unique elements (k)
ll remove_duplicates(vector<ll>& nums) {
    // Implementation goes here in marathon-solution
    return 0;
}

int main() {
    FAST_IO;

    ll n;
    while (cin >> n) {
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
        }

        ll k = remove_duplicates(nums);

        cout << k << "\n";
        for (ll i = 0; i < k; i++) {
            cout << nums[i] << (i + 1 < k ? " " : "");
        }
        cout << "\n";
    }

    return 0;
}