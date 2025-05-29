#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int f = -1;
        int s = -1;

        for(int num : arr) {
            if(num > f) {
                s = f;
                f = num;
            } else if(num < f && num > s) {
                s = num;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    // Example vector
    vector<int> arr = {10, 20, 30, 40, 50};

    int secondLargest = sol.getSecondLargest(arr);
    
    if (secondLargest != -1) {
        cout << "Second largest element is: " << secondLargest << endl;
    } else {
        cout << "Second largest element not found (array might have less than 2 distinct elements)." << endl;
    }

    return 0;
}
