#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i = n - 2;

        // Step 1: Find first decreasing element from end
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }

        // Step 2: If found, find element just larger than arr[i]
        if (i >= 0) {
            int j = n - 1;
            while (arr[j] <= arr[i]) {
                j--;
            }
            swap(arr[i], arr[j]);
        }

        // Step 3: Reverse the tail part
        reverse(arr.begin() + i + 1, arr.end());
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {2, 4, 1, 7, 5, 0};

    cout << "Original permutation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    sol.nextPermutation(arr);

    cout << "Next permutation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
