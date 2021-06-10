#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l;
    printf("digite a letra\n");
    scanf("%c",&l);
    switch (l)
    {
    case 'a':
        printf("voce digitou a vogal a\n");
        break;
    case 'e':
        printf("voce digitou a vogal e\n");
        break;
    case 'i':
        printf("voce digitou a vogal i\n");
        break;
    case 'o':
        printf("voce digitou a vogal o\n");
        break;
    case 'u':
        printf("voce digitou a vogal u\n");
        break;
        default:
        printf("você digitou uma consoante\n");
    }
    return 0;
}
