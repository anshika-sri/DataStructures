//problem challenge: https://www.codechef.com/AUG20B/problems/CHEFWARS

#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	// your code goes here
	int t;
	cin>>t;
	while(t) {
	    int darth, chef;
	    cin>>darth>>chef;
	    while(chef>0 && darth>0) {
	        darth = darth - chef;
	        chef = floor(chef/2);
	    }
	    if(darth > 0){
	        cout<<"0"<<endl;
	    }
	    else {
	        cout<<"1"<<endl;
	    }
	    t--;
	}
	return 0;
}
