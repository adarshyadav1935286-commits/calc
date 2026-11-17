#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the first number :");
    scanf("%d %d",&a, &b);
    printf("Enter the operator(+,-,*,/)");
    scanf("%c",&op);

    switch(op)
    {
        case'+':
        printf("sum=%d",a+b);
        break;
        case'-':
        printf("substraction=%d",a-b);
        break;
        case'*':
        printf("multiplication=%d",a*b);
        break;
        case'/':
        printf("division=%d",a/b);
        
        break;
        default:
        printf("Invalid operator");
    }
    return 0;
}