# Projeto Final - Sistema de Estoque (Tarefa 5)

Projeto em C para Dev-C++ 5.11, organizado em varios arquivos. Contempla os requisitos acumulados das Tarefas 1 a 5.

## Como abrir no Dev-C++

1. Extraia todos os arquivos desta pasta para uma pasta normal do Windows. **Nao abra de dentro do ZIP**.
2. Abra **Sistema_Estoque.dev** (nao o executavel .exe).
3. Se necessario, selecione **Executar > Reconstruir Tudo** (ou F11 / Compilar e Executar).
4. Os arquivos `.c` estao todos marcados com `Compile=1` e `Link=1` no projeto, para evitar erros de `undefined reference`.

Alternativa GCC: `gcc -std=c99 -Wall -Wextra main.c produto.c categoria.c util.c -o Sistema_Estoque`

## Menu

1. Cadastrar Produto
2. Listar Produtos
3. Pesquisar Produto (por codigo ou nome)
4. Alterar Estoque de um Produto (entrada/saida)
5. Remover Produto (exclusao logica)
6. Categorias (cadastrar/listar)
7. Sair

## Dados salvos

- `categorias.txt`: `codigo|nome`
- `produtos.txt`: `codigo|nome|prateleira|preco|quantidade|disponivel|categoria_codigo|ativo`
- Ao iniciar, carrega os dados existentes; ao alterar/cadastrar, salva os dados; ao sair, grava as duas listas.
- Os arquivos sao criados automaticamente na **pasta de trabalho da execucao**. O programa nao depende de arquivos existentes para iniciar.
- Produtos removidos continuam no arquivo com `ativo=0`, mas ficam invisiveis nas consultas e nao permitem que o mesmo codigo seja reutilizado.
- A disponibilidade (`disponivel`) e sempre atualizada automaticamente com base na quantidade.
- O nome do produto na pesquisa e comparado exatamente (`strcmp`), como pedido pelo professor.
- Um produto nao pode existir sem uma categoria cadastrada.

### Compatibilidade com a Tarefa 4

O carregamento tambem aceita o formato antigo de sete colunas de `produtos.txt`. Como a versao anterior do projeto guardava prateleira como numero (1-4), a migracao transforma 1=A, 2=B, 3=C e 4=D; a disponibilidade e recalculada e todos os produtos antigos validos comecam ativos. Ao sair, o arquivo e regravado no formato da Tarefa 5 (oito colunas).

**Para reaproveitar seu estoque anterior**, copie `categorias.txt` e `produtos.txt` da pasta da Tarefa 4 para esta pasta **antes de executar**. Faca uma copia de seguranca antes da migracao, pois salvar no novo programa atualiza o formato.

## Para atualizar o GitHub

No repositorio que voce ja criou, substitua `main.c`, `produto.c`, `produto.h`, `util.c`, `util.h` e `Sistema_Estoque.dev` pelos arquivos novos. Mantenha tambem `categoria.c`, `categoria.h`, `.gitignore` e este README. Clique em **Commit changes**. Nao envie `.o`, `.exe`, `Makefile.win` ou `.layout`.

## Capturas dos testes

O Word entregue junto deste pacote inclui imagens geradas a partir de **sessoes reais de execucao no terminal automatizado**. Elas nao sao capturas de tela do Dev-C++ no Windows; se o professor exigir prints especificamente do Dev-C++, substitua pelas capturas do programa aberto no seu computador.

## Grupo

Richard Otavio dos Santos Salgado (50407198), Walisson de Melo Teixeira (49750780), Vinicius Prisca de Paula (49209931), Gustavo Araujo Lima Franco (49052632), Otavio Araujo Goncalves Ribeiro (49805240), Pedro de Souza Belvederesi (49603159) e Luigi Damasceno Silva (RGM a preencher).
