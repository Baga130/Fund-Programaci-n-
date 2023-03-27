#include <stdio.h>

int sumDiv(int num) {
    int i, sum = 0;
    for(i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num1, num2, sum1, sum2;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    sum1 = sumDiv(num1); 
    sum2 = sumDiv(num2);
    
    if (num1 == sum2 && num2 == sum1) {
        printf("%d y %d son números amigos.\n", num1, num2);
    } else {
        printf("%d y %d no son números amigos.\n", num1, num2);
    }
    
    return 0;
}