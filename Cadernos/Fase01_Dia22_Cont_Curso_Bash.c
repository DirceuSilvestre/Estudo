/* ==============================================================
   Fase 01 — DIA 22 — Curso Prático de Bash
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Comandos Básicos
   - Uso de Variavel
   - Manipulação de Argumentos

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
    → ./arquivo.sh arg1 arg2 arg3 -- forma de passar argumento no bash
    → $0, $1, $2... -- primeiro é o nome do arquivo, os seguintes são os argumentos passados
    → $# -- variavel que salva a quantidade de argumentos passados
    → -eq -lt -gt -- em ordem: equal to, menor que e maior que
    → 


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

/*
#!/bin/bash

echo "Total number of arguments: $#"
echo "All arguments:"

count=1
for arg in "$@"; do
  echo "Argument $count: $arg"
  count=$((count + 1))
done
*/

/*
#!/bin/bash

# Define arrays for each cargo bay's inventory
forward_bay=('Space Suits' 'Oxygen Tanks' 'Repair Kits')
midship_bay=("Food Supplies" "Water Containers" "Medical Equipment")
aft_bay=("Square Parts" "Fuel Cells" "Scientific Instruments")

# Check if an argument is provided
if [ $# -eq 0 ]; then
    echo "Please specify a cargo bay: forward, midship, or aft"
    exit 1
fi

# Display inventory based on the argument
if [ "$1" = "forward" ]; then
    count=1
    echo "Forward Bay Inventory:"
    for arg in "${forward_bay[@]}"; do
        echo "${count}. $arg"
        count=$((count+1))
    done
elif [ "$1" = "midship" ]; then
    count=1
    echo "Midship Bay Inventory:"
    for arg in "${midship_bay[@]}"; do
        echo "${count}. $arg"
        count=$((count+1))
    done
elif [ "$1" = "aft" ]; then
    count=1
    echo "Aft Bay Inventory:"
    for arg in "${aft_bay[@]}"; do
        echo "${count}. $arg"
        count=$((count+1))
    done
else
    echo "Invalid cargo bay. Choose forward, midship, or aft."
    exit 1
fi
*/

#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}

