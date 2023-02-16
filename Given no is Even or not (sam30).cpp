#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even number", num);
    else
        printf("%d is not an even number", num);
    
    return 0;
}
