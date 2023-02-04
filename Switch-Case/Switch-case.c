#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int pokemon;

    printf("Escolha seu Pokemon inicial!\nDigite 1 para Bulbassauro, 2 para Squirtle e 3 para Charmander!\n");
    scanf("%i", &pokemon);

    switch (pokemon)
    {
        case 1:
            printf("Você escolheu o Bulbassauro!!\nEle é um ótimo inicial para os primeiros ginásios de Kanto!");
        break;
        case 2:
            printf("Você escolheu o Squirtle!!\nEle é um ótimo pokémon no primeiro ginásio e é muito fofo!!");
        break;
        case 3:
            printf("Você escolheu o Charmander!!\nVejo que prefere um caminho mais doloroso no começo e mais recompensador no futuro. Gosto do seu jeito de pensar ;)");
        break;
        default:
        printf("Você inseriu o valor errado. Favor, insira novamente!");
    }
}