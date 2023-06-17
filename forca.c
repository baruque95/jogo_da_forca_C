#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA"); // Cria a pseudostring palavrasecreta.

    int acertou = 0;
    int enforcou = 1;
    int acertos = 0;

    do
    {
        char chute;
        printf("Chute uma letra: \n");
        scanf("%c", &chute);

        for (int i = 0; i < strlen(palavrasecreta); i++)
        {
            if (palavrasecreta[i] == chute)
            {
                printf("A posicao %d tem essa letra!\n", i);
            }
        }
    } while (!acertou && !enforcou);
}
