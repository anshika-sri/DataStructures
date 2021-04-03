 void sort012(int a[], int n)
    {
        // coode here 
        
        int count0 =0, count1 = 0, count2 = 0;
        
        for(int i=0;i<n; i++) {
            switch(a[i]) {
                
                    case 0: count0++;
                    break;
                    case 1: count1++;
                    break;
                    case 2: count2++;
                    break;
                
            }
        }
        
       // for(int i=0;i<n; i++) {
       int i =0;
        while(count0 > 0) {
            a[i++] = 0;
            count0--;
        }
        while(count1 > 0) {
            a[i++] = 1;
            count1--;
        }
        while(count2 > 0) {
            a[i++] = 2;
            count2--;
        }
        //}
     }
