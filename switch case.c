#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the values:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':
                printf("The addition is %d",a+b);
                break;
        case'-':
                printf("The substraction is %d",a-b);
                break;
        case'*':
                printf("The multiplicatin is %d",a*b);
                break;
        case'/':
                printf("The division is %d",a/b);
                break;
        case'%':
                printf("The remainder is %d",a%b);
                break;
        default:
                printf("Invalid operator");
                break;
    return 0;            
    }
}
