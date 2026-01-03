/* ==============================================================
   Fase 00 — DIA 03 — Finalização Git
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Terminal
   - Git

   🧠 CONCEITOS FUNDAMENTAIS:
   - O terminal mostra, o shell interpreta, o sistema executa
   - Usar o computador por linha de comando pelo terminal
   - Git é o sistema de versionamento de código com uma lógica para o fazer e controlar
   
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
   → Working directory - onde trabalhamos criando, editando e excluindo arquivos do projeto
   → Staging area - onde reúne as mudanças antes de enviar para o repositório local
   → Repositório local - onde fica o histórico completo do projeto, metadados, etc
   
   RASTREABILIDADE
   → Cada commit é como uma foto do projeto em seu estado atual
   → Cada commit gera uma hash que o identifica de forma única
   → Cada commit aponta para um pai, ou mais, formando um grafo do histórico
   
   ARQUITETURA
   → É um banco de dados de objetos que formam um grafo acíclico dirigido
   → Os objetos são: tag, commit, tree, blob
   → Blob tem o conteúdo do arquivo em si, e é o nó folha 
   → Tree é o que liga os blobs e outras tree abaixo, o nó que aponta para as folhas
   → Commit é o que junta tudo, aponta para as tree, quase o nó raiz, e aponta para o commit pai
   → Tag é quem aponta para o commit, marcando commits importantes da árvore
   → Cada um dos objetos gera uma hash unica que os identificam
   → Em git/objects/ os dois primeiros caracteres do hash formam a pasta e o restante o nome do arquivo
   
   PONTEIROS
   → Head é o que aponta para a branch atual que aponta para o commit atual, andamos com o head
   → Branch é um segundo ponteiro para commits, fazendo o nó de onde usou o comando poder ter mais de um filho
   → Ref é a pasta onde ficam todos os ponteiros do seu projeto, tanto branchs quanto tags, entre outros
   
   VERSÃO
   → Criado em 2005 por Linus Torvald
   → Open source, mantido até hoje pela comunidade
   → Licenciado sob GPLv2
   → Mais usada: 2.X
   → Mais atual: 2.51.2


   - Próximo estudo: Github


   🧱 ERROS E SOLUÇÕES:
   - (Liste erros encontrados e como resolveu)

   🗂️ REFERÊNCIAS CONSULTADAS:
   - https://learnshell.org/
   - https://learngitbranching.js.org/?locale=pt_BR

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