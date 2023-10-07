// WAP to calculate arithmetic operator the two variable must be menu driven 
#include <stdio.h> // for printf
int a, b;          //global variable
void getdata()     //without return type without parameter
{
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("\n");
    printf("Enter Second number: ");
    scanf("%d", &b);
}
int add() //with return without parameter
{
    return a+b;
}
int sub() //with return without parameter
{
    return a - b;
}
int mul() //with return without parameter
{
    return a * b;
}
float div() //with return without parameter
{
    return (float)a / (float)b;
}

int main()
{
    int op;
    getdata();
    printf("Menu\n");
    printf(" \n1- Addition 2- Subtraction  3- Multiplication  4- Division\n");
    printf("\nEnter Your Option : ");
    scanf("%d", &op); 
    switch (op)       
    {
    case 1:
        printf("Addition of %d and %d is :%d ", a, b, add());
        break;
    case 2:
        printf("Substraction of %d and %d is:%d ", a, b, sub());
        break;
    case 3:
        printf("Multiplication of %d and %d is: %d ", a, b, mul());
        break;
    case 4:
        printf("Division of %f by %f is = %.5f ", (float)(a), (float)(b), div());
        break;
    default:
        printf("Invalid Input!!!");
        break;
    }
    return 0;
}
