#include <stdio.h>
int main() 
{
    int choice;
    float num1, num2, result;

    printf("Enter the first number:");
    scanf("%f",&num1);

    printf("Enter the second number:");
    scanf("%f",&num2);

    printf("\nChoose your operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice) 
	{
        case 1:
            result = num1+num2;
            printf("Result: %f\n", result);
            break;
        case 2:
            result = num1-num2;
            printf("Result: %f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case 4:
            result = num1 / num2;
            printf("Result: %f\n", result);
           	break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}

