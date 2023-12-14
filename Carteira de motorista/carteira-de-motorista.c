// Código só pra usar IF e ELSE

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Você tem quantos anos?\n");
    scanf("%d", &idade);

    if (idade > 18 || idade == 18)
    {
        printf("\nVocê tem idade suficiente para tirar a carteira de motorista");
    }
    else
    {
        printf("\nVocê ainda nÃ£o tem idade sufieicnete para tirar a carteira de motorista.");
    }
}
