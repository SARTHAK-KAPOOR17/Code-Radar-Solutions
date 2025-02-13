#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime
    if (n == 2 || n == 3) return 1; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return 0; // Eliminate multiples of 2 and 3
    
    for (int i = 5; i * i <= n; i += 6) { // Check factors in the form of 6k ± 1
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("Pirme");
    else
        printf("Not Prime");

    return 0;
}
