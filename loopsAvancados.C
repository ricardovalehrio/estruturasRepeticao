#include <stdio.h>

int main() {
//i e j iniciados ao mesmo tempo

for(int i = 0, j = 10; i < j; i++, j--) { // ++ ou -- 

printf("i = %d, j = %d\n", i, j);

}
// usando && ou ||
for (int a = 0, b = 10; a < 5 && b > 5; a++, b--) {
    printf("a = %d, b = %d\n", a, b);
}

// usando operador ternário

for (int n = 0;
    n < 100;
    n += (n % 2 == 0) ? 1 : 2)
{
    printf("%d ", n);
}

// usando continue e break

for (int k = 0; k < 10; k++) {
        if (k == 5) continue; // Pula a iteração quando k é 5
        if (k == 8) break;    // Sai do loop quando k é 8
        printf("%d ", k);
    }


    return 0;
}