//problem code: https://www.geeksforgeeks.org/c-program-for-program-for-nth-catalan-number/
//Execution Time:0.07


//Initial template for C++

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;

cpp_int findCatalan(int);

int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    cout<< findCatalan(n) <<"\n";    
	}
	return 0;
}// } Driver Code Ends


//User function template for C++

// n : given integer value
/**Description: 
 * the formula here is C[i]*C[n-1-i]
 * Lets us dynamic programming to use the overlapping already calculated values
 */
cpp_int findCatalan(int n) {
    cpp_int cat[1000];
    if(n == 0 || n == 1) {
        return 1;
    }
    else {
        cat[0] = 1;  cat[1] = 1; int res = 0;
        for(int i = 2; i<=n; i++) {
            cat[i] = 0;
          for(int j=0; j<i; j++) {
            cat[i] = cat[i] + (cat[j]*cat[i-j-1]);
          }
        }
        return cat[n];
    }
     
    
    //code here
}
