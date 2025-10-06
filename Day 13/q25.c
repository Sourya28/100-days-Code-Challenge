#include <stdio.h>

int main()
{
    char operators;              
    float a, b;    

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operators);  

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (operators)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not possible.\n");
            break;

        case '%':
            printf("Result = %d\n", (int)a % (int)b);
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
