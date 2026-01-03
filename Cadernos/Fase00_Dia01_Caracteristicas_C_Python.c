/* ==============================================================
   Fase 00 — DIA 01 — Busca e Compreensão das Ferramentas
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - C
   - Python

   🧠 CONCEITOS FUNDAMENTAIS:
   - Compreender as duas linguagens de programação
   - Quais suas principais características operacionais
   - Onde as duas se diferenciam

   --------------------------------------------------------------
   C
   --------------------------------------------------------------
   
   LINGUAGEM DE PROGRAMAÇÃO
   
   PARADIGMA IMPERATIVO
   → Programa executado de cima para baixo, instrução por instrução.
   → O programador descreve "o que fazer" e "como fazer".
   → Controle explícito do fluxo de execução.

   COMPILADA
   → Passa por estágios: pré-processamento → compilação → montagem → linkedição.
   → Erros detectados antes da execução.

   PROCEDURAL / ESTRUTURADA
   → Organização do código em funções e blocos lógicos.
   → Uso de estruturas de controle (sequência, decisão, repetição).
   → Modularização e clareza.

   BAIXO / MÉDIO NÍVEL
   → Permite acesso direto à memória com ponteiros.
   → Combina controle de hardware (baixo nível) com abstrações (alto nível).
   → Sem garbage collector: o programador gerencia memória manualmente.

   TIPAGEM ESTÁTICA E FORTE
   → Tipos definidos na declaração e verificados na compilação.
   → Impede conversões implícitas entre tipos incompatíveis.
   → Requer casting explícito.
   
   VERSÃO 
   → Mais Recente: C23
   → Mais Usada: C99 e C17
   
   --------------------------------------------------------------
   Python
   --------------------------------------------------------------
   
   LINGUAGEM DE PROGRAMAÇÃO
   
   PARADIGMA MULTIPLO
   → Imperativo: fluxo de execução, cima para baixo, instruções claras e objetivas, o que fazer e como fazer
   → Orientado a Objeto: objetos com suas características e atividades comunicando entre si
   → Funcional: trata tudo como trabalhos de funções
   → Controle do fluxo pode ser explícito (laços e condicionais) ou implícito (funções de alto nível e lambdas)
   → Suporta herança, polimorfismo, encapsulamento e classes dinâmicas
   
   INTERPRETADA
   → Código traduzido e executado linha a linha (ou em blocos) por um interpretador CPyhton
   → Estágios: código → bytecode gerado pelo CPyhton → execução do bytecode pelo PVM ou CPython
   → Tem que rodar o código toda vez que for utilizar pois não gera um executável como na compilação
   → Erros são detectados em tempo de execução, se encontrado o erro a interpretação para naquela linha
   
   ALTO NIVEL
   → Possui forte abstração, programador não se preocupa com tamanho ou índice em arrays
   → Esconde completamente os detalhes de hardware e da memória
   → Códigos menores e escritos de maneira simples e rápida
   
   TIPAGEM DINÂMICA E FORTE
   → Tipo das variáveis é inferido automaticamente em tempo de execução
   → Não permite operações de tipos diferentes
   → Conversões entre tipos devem ser explícitas
   
   GERENCIAMENTO AUTOMÁTICO DE MEMÓRIA
   → O Python possui garbage collector, que libera memória automaticamente.
   → O programador não precisa usar malloc() ou free() como em C.
   → A memória é organizada em objetos e referências, e o coletor remove o que não está sendo usado.
   
   PADRÃO DE CÓDIGO (PEP 8)
   → Define convenções de estilo e boas práticas (indentação, nomes, espaçamento).
   → Mantém o código limpo, legível e padronizado.
   
   VERSÃO
   → Mais Recente: Python 3.13
   → Mais Usada: Python 3.10 e 3.11


   - Próximo estudo: Terminal, Git/Github


   🧱 ERROS E SOLUÇÕES:
   - (Liste erros encontrados e como resolveu)
   - A dificuldade de compreensão, e de informações corretas e claras sobre CPython e Python Virtual Machine

   🗂️ REFERÊNCIAS CONSULTADAS:
   - (links, vídeos ou livros usados)
   - https://www.iso-9899.info/wiki/The_Standard

   ==============================================================
   COMMIT PADRÃO:
      FaseXX_DiaXX_nome_do_tema 

   --------------------------------------------------------------

   💻 EXEMPLO / CÓDIGO PRÁTICO:
   ============================================================== */

#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}