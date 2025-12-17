#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter number of items: ";
    cin >> n;

    float r[20], p[20], w[20], W;

    cout << "Enter Profits and Weights: \n";
    for (int i = 0; i < n; i++) {
        cout << "Profit[" << i + 1 << "]: ";
        cin >> p[i];
        cout << "Weight[" << i + 1 << "]: ";
        cin >> w[i];
        r[i] = p[i] / w[i];
    }

    cout << "Enter Knapsack Capacity: ";
    cin >> W;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (r[i] < r[j]) {
                swap(r[i], r[j]);
                swap(p[i], p[j]);
                swap(w[i], w[j]);
            }
        }
    }
    float tp = 0, rc = W;
    for (int i = 0; i < n; i++) {
        if (w[i] <= rc) {
            tp += p[i];
            rc -= w[i];
        }
        else {
            tp += r[i] * rc;
            break;
        }
    }
    cout << "\nMaximum Profit: " << tp << endl;
    return 0;
}


/* Fractional Knapsack – Sample Input & Output

Input:
Enter number of items: 3
Enter Profits and Weights:
Profit[1]: 60
Weight[1]: 10
Profit[2]: 100
Weight[2]: 20
Profit[3]: 120
Weight[3]: 30
Enter Knapsack Capacity: 50

Output:
Maximum Profit: 240

*/