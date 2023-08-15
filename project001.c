#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void listPrimesBetween(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
}

int main() {
    int num1, num2;

    printf("Enter two numbers (separated by space): ");
    scanf("%d %d", &num1, &num2);
   
    listPrimesBetween(num1, num2);

    return 0;
}