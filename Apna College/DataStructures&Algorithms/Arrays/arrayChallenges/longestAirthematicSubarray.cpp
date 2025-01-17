/*

Problem
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is
A i . She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.

Input:
The first line of the input gives the number of test cases, T . T test cases follow.
Each test case begins with a line containing the integer N . The second line
contains N integers. The i-th integer is A i .

Output:
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.

Constraints:
Time limit: 20 seconds per test set.  1 sec = 10^8 operation(aprox) 20 sec = 2*10^9 operations
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ A i ≤ 10 9 .
Test Set 1
2 ≤ N ≤ 2000.
Test Set 2
2 ≤ N ≤ 2 × 10 5 for at most 10 test cases.
For the remaining cases, 2 ≤ N ≤ 2000.

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int w = 1; w <= x; w++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 2;              // answer
        int pd = arr[1] - arr[0]; // prev common difference
        int j = 2;                // iterator
        int curr = 2;             // current max subarray length

        while (j < n)
        {
            if (pd == arr[j] - arr[j - 1])
            {
                curr++;
            }
            else
            {
                pd = arr[j] - arr[j - 1];
                curr = 2;
            }
            ans = max(ans, curr);
            j++;
        }

        cout << ans << endl;
    }
}
