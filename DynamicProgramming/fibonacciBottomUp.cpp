//problem link: https://practice.geeksforgeeks.org/problems/fibonacci-numbers-bottom-up-dp/1

//Initial Template for C++

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

long long findNthFibonacci(int number);

 // } Driver Code Ends


//User function Template for C++
// You need to complete this function

/** Description:
 *  Return the number-th Fibonacci
 *  using bottom up appproach aka Dynamic Programming
 */
long long findNthFibonacci(int number)
{
    // Your Code Here
    long long int store[number+1];
    if(number == 1) { return 1; }
    else if(number == 2) { return 1; }
    else
    {
        store[1] = 1, store[2] = 1;
        for(int i=3; i<=number; i++) {
            store[i] = store[i-1] + store[i-2];
        }
        return store[number];
    }
}

// { Driver Code Starts.

int main()
 {
    
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int number;
        cin>>number;
        cout<<findNthFibonacci(number)<<endl;
    }
    
	return 0;
}
  // } Driver Code Ends
