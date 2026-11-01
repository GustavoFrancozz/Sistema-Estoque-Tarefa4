#ifndef PRODUTO_H
#define PRODUTO_H

#include "categoria.h"
#define MAX_PRODUTOS 50

typedef struct {
    int codigo;
    char nome[50];
    int prateleira;
    double preco;
    int quantidade;
    int disponivel;
    int categoria_codigo;
} Produto;

int buscar_produto_por_codigo(const Produto produtos[], int total, int codigo);
void cadastrar_produto(Produto produtos[], int *total,
                      const Categoria categorias[], int total_categorias);
void exibir_produto(Produto produto, const Categoria categorias[], int total_categorias);
void listar_produtos(const Produto produtos[], int total,
                    const Categoria categorias[], int total_categorias);
void pesquisar_produto(const Produto produtos[], int total,
                      const Categoria categorias[], int total_categorias);
void carregar_produtos(Produto produtos[], int *total,
                      const Categoria categorias[], int total_categorias);
int salvar_produtos(const Produto produtos[], int total);

#endif
