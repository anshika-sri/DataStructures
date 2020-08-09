//challenge link: https://www.codechef.com/AUG20B/problems/CRDGAME3
//time: 0.20 sec

#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t) {
	int rick,chef,rickCount = 0,chefCount = 0;
	cin>>rick>>chef;

	
	for(int i=9;i>0;i--){
	    int checkRick = rick/i;
	    int checkChef = chef/i;
	    rick = rick - ((checkRick)*i);
	    chef = chef - ((checkChef)*i);

	    rickCount += checkRick;
	    chefCount += checkChef;
	}
	cout<<((chefCount>rickCount) ? 0 : 1) << " " << ((chefCount<rickCount) ? chefCount : rickCount)<<endl;
    t--;
	}
	return 0;
}
