/* 
    Lab No - 2
    Date - 
    Question - Program for Additon, Sub, Mul, & Div using switch Case
    Notes - 
*/

#include <stdio.h>
int main() {
    char ch;
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose an operation:\n");
    printf("Enter your choice (+ , - , * , /)");
    scanf(" %c", &ch);

    switch(ch) {
        // plus
        case '+': 
            result = num1 + num2;
            printf("Result of Addition: %.2f\n", result);
            break;
        
        // subtraction
        case '-':
            result = num1 - num2;
            printf("Result of Subtraction: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result of Multiplication: %.2f\n", result);
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result of Division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
