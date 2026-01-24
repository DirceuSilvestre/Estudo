/* ==============================================================
   Fase 01 — DIA 14 — Terminal Básico com Bash
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Funcionamento do Terminal
   - "Linguagem" Bash
   - [Tópico 3]

   🧠 CONCEITOS FUNDAMENTAIS:
   - Explique brevemente os pontos teóricos
   - Use seus próprios termos
   - Liste insights importantes

   --------------------------------------------------------------
   BASH
   --------------------------------------------------------------

   O QUE É 
   → Linguagem de script com interpretador para os sistemas Linux
   → Interface entre o usuário e o sistema operacional
   → Serve para dar comandos ao computador

   LÓGICA
   → Pensar primeiro em uma árvore, como em grafos, com vertices e arestas
   → Vértices são os locais, e arestas são os caminhos para outros locais, onde podemos ir
   → Sempre estaremos em algum vértice da árvore
   → Diretório é o nome de cada local, cada vértice, conhecido usualmente como pasta

   CURIOSIDADES
   → Antes não existia tanto recurso visual como atualmente
   → Mesmo os recursos visuais eles funcionam a partir de comandos
   → Que vão sendo traduzidos até a compreensão da cpu para execusão do que foi feito

   COMANDOS
   → pwd  -- print working directory -- indica o local atual, qual pasta nós estamos
   → cd  -- change directory -- para mudar de diretório, colocando o nome, .. para ir ao vértice pai do atual, etc
         cd *nome do diretorio* - para ir direto ao diretório daquele nome
         cd .. - para ir ao diretório(vértice) pai do atual
         cd ~ - para ir diretamente ao diretório home do usuário que está logado no momento
         cd / - para ir direto a raiz da árvore, o vértice(nó) raiz
   → ls  -- list -- para listar todos os arquivos e pastas do diretorio atual, incluindo suas flags
         ls -l -- long format -- exibe uma lista com mais detalhes e metadados sobre os arquivos do diretorio
         ls -a -- all -- exibe também os arquivos ocultos como os de configuração que começam com .
         ls -la -- combinação dos dois anteriores exibindo todos os arquivos e com detalhes
   → mkdir  -- make directory -- cria um novo diretorio filho do atual, um novo vértice(nó) filho  
         mkdir -p pasta/pasta/pasta -- com a flag de parents cria de forma recursiva caso não tenha a pasta ainda
   

   - Próximo estudo: Continuação de Terminal com Bash


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