#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t>0) {
	    
	    int n, arr[100][2];
	    cin>>n;
	    for(int i = 0; i<n; i++){
	        cin>>arr[i][0]>>arr[i][1];
	    }
	    long long int resMo = 0,resCh =0;
	    for(int i = 0; i<n; i++){
	        long long int ch = arr[i][0], mo = arr[i][1], sumCh = 0, sumMo = 0;
	
	        while(ch) {
	            ch = ch%10;
	            sumCh = sumCh + ch;
	            ch = ch/10;
	        }
	        
	        while(mo) {
	            mo = mo%10;
	            sumMo = sumMo + mo;
	            mo = mo/10;
	        }
	        if(sumMo > sumCh) {
	            resMo++;
	        }
	        else if(sumMo < sumCh) {
	            resCh++;
	        }
	        else{
	            resCh++; resMo++;
	        }
	    }
	    if(resMo > resCh) {
	        cout<<"1 "<<resMo<<endl;
	    }
	    else if(resCh > resMo) {
	        cout<<"0 "<<resCh<<endl;
	    }
	    else{
	        cout<<"2 "<<resMo<<endl;
	    }
    t--;
	
}
return 0;
}
