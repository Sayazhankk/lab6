
#include <iostream>
using namespace std;

// Function to count common elements
void sim(int n, int a[], int b[]) {
    int cnt = 0;

    // Count unique matches using nested loops
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                cnt++;
                break; // Break to avoid counting duplicates in array a
            }
        }
    }

    // Output the count of common elements
    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n; // Read the size of the arrays

    int a[100], b[100];

    // Read the first array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Read the second array
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }

    // Call the function to count common elements
    sim(n, a, b);

    return 0;
}
