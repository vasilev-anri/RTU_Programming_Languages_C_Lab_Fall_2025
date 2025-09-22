#include <stdio.h>
#include <math.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    // TODO: check if n is prime using loop up to sqrt(n)

   
    if (n == 2) {
        return 1; 
    }
    if (n % 2 == 0) {
        return -1; 
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return -1;
    }
    return 1;
  
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    // TODO: validate input and print all primes up to n

    int ans = is_prime(n);

    printf("%d", ans);


    return 0;
}