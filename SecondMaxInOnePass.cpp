// Q.No - 2.
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    // Input
    cout << "Enter Elements In Array: ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }
    // Output
    int mx = INT_MIN;
    int smx = INT_MIN;
    // One pass to find the largest and second largest elements
    for (int i = 0; i <= n-1; i++) {
        if (arr[i] > mx) {
            smx = mx;
            mx = arr[i];
        } else if (arr[i] > smx && arr[i] != mx) {
            smx = arr[i];
        }
    }

    cout << "Largest element: " << mx << endl;
    if (smx == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "Second largest element: " << smx << endl;
    }
}