# Lista Circular

## Descrição

Implementação de uma **Lista Encadeada Circular** em linguagem C. A lista é 
composta por nós alocados dinamicamente, onde cada nó armazena um elemento do 
tipo **TipoItem** e um ponteiro para o próximo nó da sequência.

---

## Estrutura Do Nó 

```c 
typedef int TipoItem;

typedef struct no {
    TipoItem info;
    struct no* prox;
} Lista;
```

---

## Funcionalidades

Operações implementadas:
- `vazia()`: verifica se uma lista é vazia;
- `inserir()`: insere um elemento na cauda da lista;
- `retirar()`: remove a primeira ocorrência de um elemento na lista;
- `imprimir()`: exibe os elementos da lista;
- `liberar()`: libera a memória alocada para lista.

---

## Organização Do Projeto

```c
.
|- menu.c
|- listaCircular.h
|- listaCircular.c
|- utils.h
|- utils.c
|- README.txt
```

---

## Compilação

Utilizando GCC:

```bash
gcc *.c -o listaCircular
```

---

# Execução

Linux/macOS:

```bash
./listaCircular
```

Windows:

```cmd
listaCircular.exe
```

---

## Autor

André Brandão