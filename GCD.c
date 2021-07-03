#include <stdio.h>
int main()
{
    int a,b,gcd,x;
    printf("Enter two numbers together: ");
    scanf("%d %d",&a,&b);
    if(a==0){
        gcd=b;
    }
    else if(b==0){
        gcd=a;
    }
    else{
        while(b!=0){
            x=b;
            b=a%b;
            a=x;
        }
        gcd=a;
    }
    printf("GCD is %d\n",a,b,gcd);
    return 0;
}
