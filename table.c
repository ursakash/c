#include<stdio.h>

int main()
{
    
    int t ;
    printf("Enter a number : ");
    scanf("%d",&t);
    
    for(int i=1;i<=10;++i){
    printf("\n%d",i*t);
    }
    
    return 0;
}