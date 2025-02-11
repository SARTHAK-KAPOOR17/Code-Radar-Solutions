#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime

    for (int i = 2; i * i <= num; i++) {  // Check up to sqrt(num)
        if (num % i == 0) 
            return 0;  // Found a divisor, not prime
    }
    return 1;  // Prime number
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

