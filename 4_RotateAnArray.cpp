#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;  // Handle d > n
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 2; // Number of positions to rotate

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    sol.rotateArr(arr, d);

    cout << "Array after rotating by " << d << " elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
