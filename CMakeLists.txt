cmake_minimum_required(VERSION 3.31)
project(tutorial_c)

set(CMAKE_CXX_STANDARD 20)

add_executable(tutorial_c
        fundamentos/variaveis.cpp
        main.cpp
        fundamentos/constantes.cpp
        fundamentos/operadores.cpp
        controle-de-fluxo/condicionais.cpp
        controle-de-fluxo/loops.cpp
        controle-de-fluxo/goto.cpp
        funcoes/definicao.cpp
        funcoes/recursividade.cpp
        funcoes/ponteiros_funcoes.cpp
        ponteiros/aritmetica.cpp
        ponteiros/ponteiro_ponteiro.cpp
        ponteiros/basico.cpp
        alocacao-dinamica/demo_malloc.cpp
        alocacao-dinamica/realloc.cpp
        estruturas/structs.cpp
        estruturas/unions.cpp
        estruturas/enum.cpp
        arquivos/leitura.cpp
        arquivos/escrita.cpp)
