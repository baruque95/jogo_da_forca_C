#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA"); // Cria a pseudostring palavrasecreta.

    int acertou = 0;
    int enforcou = 0;
    int acertos = 0;
    char palpite[strlen(palavrasecreta)];

    do
    {
        printf("\n\n");
        for (int i = 0; i < strlen(palavrasecreta); i++)
        {
            if (palpite[i] != palavrasecreta[i])
            {
                printf("_ ");
            }
            else
            {
                printf("%c", palavrasecreta[i]);
            }
        }
        printf("\n\n");

        char chute;
        printf("Chute uma letra: \n");
        scanf(" %c", &chute); // Quando for utilizar um scanf para char utilizar " %c" *com o espaco*
    } while (!acertou && !enforcou);
}
