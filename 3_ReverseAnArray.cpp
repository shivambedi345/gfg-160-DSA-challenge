#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int s = 0;
        int e = arr.size() - 1;
        while (s < e) {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    sol.reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
