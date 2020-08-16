//problem code:https://practice.geeksforgeeks.org/problems/ways-to-write-n-as-sum-1587115621/1/?track=DSASP-DP&batchId=140#ExpectOP

#include<bits/stdc++.h>


using namespace std;

int countWays(int);

// Driver program
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<countWays(n)<<endl;
    }
    return 0;
}// } Driver Code Ends


// function to count number of ways in which n can
// be written as sum of two or more than two integers

int countWays(int n)
{

        unsigned long long int arr[n+1]; 
        
        memset(arr, 0, sizeof(arr)); 
        arr[0] = 1;
        for(int i=1; i<n; i++) {
            for(int j=i; j<=n; j++) {
                arr[j] += arr[j-i];
            }
            
        }
        return (arr[n] % 10000000007);
}
