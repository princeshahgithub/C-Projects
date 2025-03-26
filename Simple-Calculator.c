#include <stdio.h>

void calculator()
{
    char operator;
    double num1, num2, result;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/': 
            if (num2 != 0) 
                result = num1 / num2; 
            else { 
                printf("Division by zero is not allowed.\n"); 
                return; 
            }
            break;
        default:
            printf("Invalid operator!\n");
            return;
    }
    printf("Result: %.2lf\n", result);
}

int main() {
    calculator();
    return 0;
}
