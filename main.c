#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct pessoa{
char nome[500];
int idade;

};

int main()
{
    void *pBuffer;
    struct pessoa *p;

    pBuffer = malloc(sizeof(int) + sizeof(char));

    return 0;
}
