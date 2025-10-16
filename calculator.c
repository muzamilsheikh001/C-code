#include <stdio.h>

int main()
{
    char op; 
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // notice space before %c to ignore newline
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        else
            printf("Error! Division by zero is not allowed.\n");
        break;
    default:
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
