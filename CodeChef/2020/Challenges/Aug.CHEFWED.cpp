//challenge link: https://www.codechef.com/AUG20B/problems/CHEFWED
//none testcases passed

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int quarrel(int start, int end, int arr[]) {
    unordered_map < int, int > mp;
    int count = 0;

    // Store all the elements in the map with 
    // their occurrence 
    for (int i = start; i < end; i++)
        mp[arr[i]]++;

    // Traverse the map and print all the 
    // elements with occurrence 1 
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it - > second == 1)
            count++;
    }
    return end - start + 1 - count;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, k, i;
        cin >> n >> k;
        int wed[n], dp[n];

        for (int i = 0; i < n; i++) {
            cin >> wed[i];
        }

        dp[0] = k;
	    
        for (i = 1; i < n; i++) {
            dp[i] = dp[i - 1] + k; //2
            for (int k1 = i - 1; k1 >= 1; k1--) {
                dp[i] = min(dp[i], dp[k1 - 1] + k + quarrel(k1, i, wed));
            }
        }

        cout << dp[n - 1] << endl;
        t--;
    }
    return 0;
}
