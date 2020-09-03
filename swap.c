#include <stdio.h>
int main()
{   int a=1,b=2;
    
    printf("Before Swapping: \n");
    printf("a=%d and b=%d",a,b);
    //Main Logic for Program
    a = a+b; //a=(1+2)=3
    b = a-b; //b=(3-2)=1
    a = a-b; //a=(3-1)=2
    
    printf("\nAfter Swapping: \n");
    printf("a=%d and b=%d",a,b);
    
    return 0;
}
