#include <stdio.h>

float res;

float addition(float n1, float n2) {
    res = n1 + n2;
    return res;
}

float subtraction(float n1, float n2) {
    res = n1 - n2;
    return res;
}

float multiplication(float n1, float n2) {
    res = n1 * n2;
    return res;
}

float division(float n1, float n2) {
    if (n2 != 0) {
        res = n1 / n2;
        return res;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y') {
        char ope;
        float n1, n2, result;
        printf("Enter the first number: ");
        scanf("%f", &n1);
        printf("Enter the second number: ");
        scanf("%f", &n2);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &ope);
        
        switch (ope) {
            case '+':
                result = addition(n1, n2);
                printf("%.2f %c %.2f = %.2f\n", n1, ope, n2, result);
                break;
            case '-':
                result = subtraction(n1, n2);
                printf("%.2f %c %.2f = %.2f\n", n1, ope, n2, result);
                break;
            case '*':
                result = multiplication(n1, n2);
                printf("%.2f %c %.2f = %.2f\n", n1, ope, n2, result);
                break;
            case '/':
                result = division(n1, n2);
                printf("%.2f %c %.2f = %.2f\n", n1, ope, n2, result);
                break;
            default:
                printf("Wrong choice! Enter a valid operator.\n");
                break;
        }
        
        printf("Want to Continue?(Y/y): ");
        scanf(" %c", &ch);  
    }
    
    return 0;
}
