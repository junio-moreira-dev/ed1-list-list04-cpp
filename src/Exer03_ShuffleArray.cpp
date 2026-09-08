//
// Created by Junio Moreira on 03/09/26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Return interleaved vector [x1, y1, x2, y2, ..., xn, yn] given nums of 2n elements
vector<ll> shuffle_array(const vector<ll>& nums, ll n) {
    // Implementation goes here in marathon-solution
    return {};
}

int main() {
    FAST_IO;

    ll n;
    while (cin >> n) {
        ll total = 2 * n;
        vector<ll> nums(total);
        for (ll i = 0; i < total; i++) {
            cin >> nums[i];
        }

        vector<ll> ans = shuffle_array(nums, n);

        for (ll i = 0; i < (ll)ans.size(); i++) {
            cout << ans[i] << (i + 1 < (ll)ans.size() ? " " : "");
        }
        cout << "\n";
    }

    return 0;
}   