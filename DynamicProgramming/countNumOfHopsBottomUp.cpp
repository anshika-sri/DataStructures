//problem link: https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1/?track=DSASP-DP&batchId=140

#include <bits/stdc++.h>
using namespace std;
 
long long countWays(int);
 
int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		cout << countWays(n) << endl;
	}
    
    return 0;
    
}
// } Driver Code Ends


// function to count number of ways to reach top of the stair
long long countWays(int n){
    
 int arr[n+1];
 
 arr[0] = 1; arr[1] = 1;
 arr[2] = 2;
 
 for(int i = 3; i<=n; i++) {
     arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
 }
 int res = arr[n];
 return (res % 1000000007);
}
