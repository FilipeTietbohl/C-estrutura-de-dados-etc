#include <stdio.h>

int main(){

    int age;
    float money;
    double pi;
    char name[20];

    printf("Whats your name?\n");
    scanf("%s", &name);
    
    printf("Hello, %s ", name);

    printf("\n\nHow old are u? \n");
    scanf("%i", &age);

    printf("\n%i? You look younger ;) ", age);

    printf("\n\nHow much money you got in the bank? hehehe \n");
    scanf("%f", &money);

    printf("\n\nWell, with %.2f you're getting cutter", money);
    
    printf("\n\nType PI\n");
    scanf("%lf", &pi);

    printf("\n%lf? You're smart, let's go out", pi);
    return 0;
}