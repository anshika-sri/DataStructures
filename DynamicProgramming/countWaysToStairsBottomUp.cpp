//problem code: https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1/?track=DSASP-DP&batchId=140

#include<bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

long long countWays(int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends


// function to count ways to reach mth stair
long long countWays(int m) {
    
    int arr[1000];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for(int i =3; i<= m; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    return arr[m];
}
