#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}

