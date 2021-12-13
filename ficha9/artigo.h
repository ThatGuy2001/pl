#include <stdio.h>
#include <string.h>
#ifndef ARTIGO_H
    #define ARTIGO_H

#define N 30
#define D 3

typedef 
    struct
    {
    char nome[N];
    char tipo[N];
    char modelo[N];
    char marca[N];
    float preco;
    int unid;
    }artigo_t;

int compararstrg(char s[],char b[],int sz);
void print_artigo(artigo_t a);
void novo_artigo(artigo_t *a);
void total_artigo(artigo_t a[],char marca[],char modelo[],int sz);

void alerta(artigo_t a[],int sz);

#endif