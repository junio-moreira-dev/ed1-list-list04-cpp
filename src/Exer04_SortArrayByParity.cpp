//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Reorganize vector so that all even integers precede all odd integers
vector<ll> sort_array_by_parity(vector<ll>& nums) {
    // Implementation goes here in marathon-solution
    return {};
}

int main() {
    FAST_IO;

    ll n;
    while (cin >> n) {
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<ll> ans = sort_array_by_parity(nums);

        for (ll i = 0; i < (ll)ans.size(); i++) {
            cout << ans[i] << (i + 1 < (ll)ans.size() ? " " : "");
        }
        cout << "\n";
    }

    return 0;
}