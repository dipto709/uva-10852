#include<stdio.h>
#include<math.h>
main()
{
    int n,s,flag,s;
    while(scanf("%d",&n)!= EOF){
        if(n==0)
        break;
        flag =0;
        for(i=2;i<n;i++){
            if(n%i ==0){
                flag++;
            }
        }
        s = (pow(2,n-1))*(pow(2,n)-1);
                     
    
    if(n==2||n==3||n==5||n==7||n==13||n==17||n==19){
        print("%d\n",s);
    }
    else {
        if(flag ==0)
            printf("Given number is prime.But, no perfect number is avilable");
            
        else printf("Given number is not prime.No perfect number is avilable\n");
        }
    }
    return 0;
    
}