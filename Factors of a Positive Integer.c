#include <stdio.h>
int main(){
    int number,i,j;
    j=0;
    printf("give me your number:");
    scanf("%d",&number);
    for ( i = 1; i < number; i++)
    {
        if (number%i==0)
        {
            printf("%d is a factor \n", i);
            j+=1;
        }
        
        
    }
    printf("%d has %d number of factors", number,j);
    return  0;

}
