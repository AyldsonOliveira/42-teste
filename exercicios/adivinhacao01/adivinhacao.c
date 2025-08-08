#include <stdio.h>

int main() {
    printf("********************************\n");
    printf(" * Hello, welcome to the game! *\n");
    printf("********************************\n");

    int numero_secreto = 42;

    int chute;

    printf("Qual e seu chute?");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n", chute);

}