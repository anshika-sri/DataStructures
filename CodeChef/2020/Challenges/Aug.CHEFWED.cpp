//challenge link: https://www.codechef.com/AUG20B/problems/CHEFWED
//none testcases passed

#include <iostream>
using namespace std;
#include <algorithm>

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t) {
	    int n,k,a[1000], countTable = 1;
	    cin>>n>>k;
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    
	    for(int i=0;i<n;i++) {
	        if(a[i] == a[i+1]) {
	            countTable ++;
	        }
	    }
	    if((k*countTable) > (k+countTable)) {
	        cout<<k+countTable<<endl;
	    }
	    else{
	        cout<<k*countTable<<endl;
	    }
	    t--;
	}
	return 0;
}
