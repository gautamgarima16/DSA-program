#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    // Boyer Moore Voting Algorithm
    for (int x : nums) {
        if (count == 0) {
            candidate = x;
        }

        count += (x == candidate) ? 1 : -1;
    }

    count = 0;

    for (int x : nums) {
        if (x == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    cout << "Majority Element: "
         << majorityElement(nums);

    return 0;
}