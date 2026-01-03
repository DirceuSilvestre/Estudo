/* ==============================================================
   Fase — DIA XX — [TÍTULO DO TEMA]
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Terminal
   - [Tópico 2]
   - [Tópico 3]

   🧠 CONCEITOS FUNDAMENTAIS:
   - o terminal mostra, o shell interpreta, o sistema executa
   - Use seus próprios termos
   - Liste insights importantes
   
   -------------------------------------------------------------- 
   Terminal 
   -------------------------------------------------------------- 
   
   INTERFACE 
   → Serve para interagir com o computador por comandos de texto 
   → Shell é o programa que interpreta os comandos de texto dentro do terminal
   → Console = Terminal + Shell
   → Prompt é o símbolo que aparece esperando comando ($ ou C:\>)
   
   LINGUAGEM DE PROGRAMAÇÃO 
   → O que é escrito no terminal é considerado uma pois tem as principais características 
   → Manipulação de variáveis, estruturas de controle, sintaxe própria, etc
   → Seus nomes são Bash script ou Power Shell script no Linux ou Windows respectivamente
   
   FUNCIONAMENTO
   → Digita o comando no terminal
   → O shell interpreta e procura o programa correspondente para execução no $PATH ou diretório atual
   → O programa correspondente pede o sistema operacional para criar um processo para executar
   → O resultado volta para o shell que o exibe no terminal (saída padrão)
   
   ESTRUTURA
   → Um comando tem quatro partes principais
   → comando  opções  argumentos  redirecionamento
   
   VERSÕES
   → Linux: Bash
   → Windows: CMD ou Power Shell
   → Mais utilizada: Bash
   
   -------------------------------------------------------------- 
   Git
   -------------------------------------------------------------- 
   
   SISTEMA DE CONTROLE DE VERSÃO
   
   DESCENTRALIZADO
   → Cada dev tem na sua máquina uma cópia completa do projeto e seu histórico
   → Ao enviar para um repositório remoto compara as hashes e envia apenas o que o servidor ainda não tem
   → Ao baixar combina histórico local com o remoto, tenta mesclar divergências ou pede resolução de conflito
   
   FUNCIONAMENTO
   → Trabalha com três áreas: working directory, staging area, repositório local
   → Working directory - onde trabalha, criando, editando e excluindo arquivos do projeto
   → Staging area - onde reúne as mudanças antes de enviar para o repositório local
   → Repositório local - onde fica o histórico completo do projeto, metadados, etc
   
   RASTREABILIDADE
   → Cada commit é uma foto do projeto em seu estado atual
   → Cada commit gera uma hash que o identifica de forma única
   

   - Próximo estudo: [indique o próximo arquivo ou tema]


   🧱 ERROS E SOLUÇÕES:
   - (Liste erros encontrados e como resolveu)

   🗂️ REFERÊNCIAS CONSULTADAS:
   - https://learnshell.org/

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