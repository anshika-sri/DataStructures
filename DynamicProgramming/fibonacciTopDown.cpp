//https://practice.geeksforgeeks.org/problems/fibonacci-numbers-top-down-dp/1

//Initial Template for C++


#include <bits/stdc++.h>
#include <fstream>
using namespace std;



 // } Driver Code Ends


//User function Template for C++

/** Description: 
 *  Using Dynamic Programming top down approach
 */ 
long long findNthFibonacci(int number, long long int dp[])
{
    if(number == 1 || number == 2) {
        return 1;
    }
    else{
        dp[1] = 1;
        dp[2] = 1;
        dp[number] = findNthFibonacci(number -1, dp) + findNthFibonacci(number-2, dp);
    }
    return dp[number];
}


// { Driver Code Starts.
long long findNthFibonacci(int number, long long int dp[]);

int main()
 {
    long long dp[100]={0};
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int number;
        cin>>number;
        cout<<findNthFibonacci(number, dp)<<endl;
    }
    
	return 0;
}
  // } Driver Code Ends
