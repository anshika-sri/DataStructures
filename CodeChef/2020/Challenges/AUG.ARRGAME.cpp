//https://www.codechef.com/LTIME87B/submit/ARRGAME

#include <iostream>

using namespace std;

int main() {
    // your code goes here

    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int count = 1;
        int bhere = 0, res;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == 1) res = 0;
            else {
                bhere = 1;
                res++; //increase res 
                count = max(res, count);
            }
        }

        if (count == 1 && bhere) cout << "Yes";
        else if (count == 1 && !bhere) cout << "No";
        else if (count % 2 == 0) cout << "No";
        else cout << "Yes"; 
        
        cout << endl;
        t--;
    }

    return 0;
}
