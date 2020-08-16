//problem code: https://www.geeksforgeeks.org/binomial-coefficient-dp-9/

using namespace std; 

const int p = 1e9+7;

int nCrModp(int, int);

// Driver program 
int main() 
{ 
  int t, n, r;
  cin >> t;
  
  while(t--){
      cin >> n >> r;
      cout << nCrModp(n, r) << endl;
  }
  
  return 0; 
}
// } Driver Code Ends


// Returns nCr % p 
int nCrModp(int n, int r) 
{ 
    int c[n+1];
    memset(c, 0, n+1);
    
    if(n<r) return 0;
    
    c[0] = 1;
    for(int i= 1; i<n;i++)
    {
        for(int j= min(i,r); j>0; j--) {
            c[j] =  c[j] + c[j-1];
        }
        
    }
} 
