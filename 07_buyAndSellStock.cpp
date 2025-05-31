#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    Solution sol;
    int result = sol.maximumProfit(prices);

    cout << "Maximum Profit: " << result << endl;
    return 0;
}
