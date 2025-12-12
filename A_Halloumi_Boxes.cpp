#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long n, k; // Variables to store the number of boxes and the maximum length of subarray that can be reversed
        cin >> n >> k; // Read the values of n and k
        vector<long long> a(n); // Vector to store the numbers on the boxes
        for (int i = 0; i < n; i++) // Loop to read the numbers on the boxes
            cin >> a[i]; // Read each number into the vector
        // Inputs are read

        vector<long long> copy_a = a; // Create a copy of the original array
        sort(copy_a.begin(), copy_a.end()); // Sort the copied array in non-decreasing order

        // Check if the original array is already sorted or if k > 1
        if (copy_a == a || k > 1)
            cout << "YES" << endl; // If true, print "YES"
        else
            cout << "NO" << endl; // Otherwise, print "NO"
    }
    return 0; // End of the program
}