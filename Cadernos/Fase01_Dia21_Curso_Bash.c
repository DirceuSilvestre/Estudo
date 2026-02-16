/* ==============================================================
   Fase 01 — DIA 21 — Curso Prático de Bash
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - [Tópico 1]
   - [Tópico 2]
   - [Tópico 3]

   🧠 CONCEITOS FUNDAMENTAIS:
   - Explique brevemente os pontos teóricos
   - Use seus próprios termos
   - Liste insights importantes

   --------------------------------------------------------------
   BASH
   --------------------------------------------------------------

    INTRODUÇÃO
    → Alia teoria e prática utilizando WebIDE junto com VSCode, rodando no navegador, no próprio site do curso
    
    COMANDOS
    → touch arquivo.sh -- cria arquivo vazio
    → #!/bin/bas -- informa qual interpretador deve executar o script, sempre na primeira linha do arquivo
    → echo "texto" -- exibe na saída padrão o texto
    → chmod +x arquivo.sh -- change mode para o arquivo se tornar executavel para qualquer usuario
    → ./arquivo.sh -- a forma de se executar um script depois do comando anterior
    → cat arquivo.sh -- exibe na saída padrão o conteúdo do arquivo
    → VARIAVEL=5 -- para armazenar numero inteiro
    → Variavel=ABC -- para armazenar string
    → variavel='tex   to' -- para armazenar string com espaços, aspas simples
    → echo "$Variavel" -- $ na frente do nome da variavel na hora de imprimir para exibir o seu conteudo
    → \$ -- usado para imprimir o $ em texto ao inves de executar qualquer comando associado
    → ${Variavel}texto -- {} usado para definir que o conteudo da variavel será introduzida naquele local
    → $variavel - "$variavel" -- a diferença é que o segundo conserva os espaços do texto da variavel e o primeiro não
    → CURRENT_DATE=$(date +"%Y-%m-%d") - o $() permite a captura de uma saída e também a formatação como no exemplo
    → $((X + Y)) -- $(()) permite operações matemáticas + - * / %
    → HOME LOGNAME SHELL PATH -- são variaveis de ambiente disponiveis para todos os processos da sessão atual
    → export - unset -- o primeiro cria e o segundo exclui uma variavel de ambiente feita pelo usuario



   - Próximo estudo: Continuar o curso prático de Bash


   🧱 ERROS E SOLUÇÕES:
   - (Liste erros encontrados e como resolveu)

   🗂️ REFERÊNCIAS CONSULTADAS:
   - https://labex.io/pt/courses/shell-for-beginners

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

