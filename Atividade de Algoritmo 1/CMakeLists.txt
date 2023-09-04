cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled "Área do círculo.c"
        "Produto Simples.c"
        Diferença.c
        Consumo.c
        Cédulas.c
        "Conversão de Tempo.c"
        "Idade em Dias.c"
        Mês.c)
