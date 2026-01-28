/* ==============================================================
   Fase 01 — DIA 17 — Terminal Básico com Bash
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Funcionamento do Terminal
   - "Linguagem" Bash
   - [Tópico 3]

   🧠 CONCEITOS FUNDAMENTAIS:
   - Compreensão da Lógica de pensamento de diretorios e arquivos
   - Comandos básicos de movimentação, criação, exclusão e outros, para diretórios e arquivos
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
   → Que vão sendo traduzidos até a compreensão da cpu para execusão do que foi pedido

   PERMISSÕES
   → Regras de segurança que definem cargos e atribuições, quem pode o que
   → São organizadas em 3 tipos e 3 grupos
   → Os 3 tipos são as flags: -r, -w, -x (read, write, execute)
   → Os 3 grupos são: u, g, o (user/owner, group, others)
   

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
         ls -la - combinação dos dois anteriores exibindo todos os arquivos e com detalhes
   → mkdir  -- make directory -- cria um novo diretorio filho do atual, um novo vértice(nó) filho  
         mkdir -p pasta/pasta/pasta -- parents -- cria de forma recursiva caso não tenha a pasta ainda
   → rkdir  -- remove directory -- remove o diretorio do nome descrito se estiver vazio
         rmdir -r pasta -- recursive -- remove primeiro o conteudo depois o diretorio
   → touch  -- -- cria arquivo vazio
   → cp origem.tipo destino.tipo  -- copy -- copia o arquivo origem para o destino
         cp -i origem destino -- interactive -- se o arquivo já existir no destino perguntará ao usuário se deseja sobrescrever
         cp pasta/origem.tipo destino.tipo - a origem pode ser um arquivo em outro diretorio sendo copiado para o atual
         cp origem.tipo pasta/destino.tipo - ou do diretorio atual para outro diretorio, sempre especificando o caminho
         - comando pode ser usado para renomear o arquivo criando um copia com outro nome
         - se já tiver o arquivo de mesmo nome ele será sobrescrito sem aviso prévio se não usar a flag acima
   → mv origem.tipo destino.tipo  -- move -- move o arquivo da origem para o destino
         mv -i origem.tipo destino.tipo -- interactive -- pergunta pro usuario antes de sobrescrever o arquivo
         - os paths também podem ser utilizados como no comando copy
         - também pode ser utilizado para renomear arquivos caso origem e destino seja o mesmo diretório
         - na renomeação o computador altera somente os ponteiros para o novo nome, chamada renomeação atômica
   → rm arquivo.txt  -- remove -- remove arquivos ou diretorios
         rm -i pasta -- interactive -- solicita confirmação para remover cada arquivo dentro do diretorio 
         rm -f pasta -- force -- ignora arquivos existentes e nao solicita confirmação
         rm -r pasta -- recursive -- necessário para remover diretórios e todo o seu conteúdo
         rm -v pasta -- verbose -- explica o que está fazendo e listando cada arquivo removido
         - recomenda-se usar ls pasta/* para saber tudo que será apagado além do diretório, antes de usar rm -rf pasta/*
         - configurar um alias no arquivo .bashrc (alias rm='rm -i') para que o sistema sempre peça confirmação
         - O uso de sudo rm deve ser restrito ao máximo, pois pode remover arquivos essenciais do sistema operacional, tornando-o inoperante
   → cat arquivo.txt  -- concatenate -- exibe no terminal o conteudo do arquivo
   → less arquivo.txt  -- less is more -- comando para exibição de conteúdo por partes e permitindo navegação controlada
         less -N arquivo.txt -- -- exibe número de linhas ao lado do texto
         less -S arquivo.txt -- chop long line -- corta linhas longas ao inves de quebra-las para a linha de baixo
         less -X arquivo.txt -- -- impede que limpe a tela, deixando o conteudo visivel no historico do terminal
         - setas (cima/baixo) ou espaço rola o texto linha por linha ou página por página
         - g vai para o início do arquivo
         - G vai para o final do arquivo
         - /termo pesquisa por um termo especifico no texto
         - q de quit sai do visualizador e volta para o prompt
   → nano script.sh  -- editor de arquivos -- nativo dos sistemas linux
         - Ctrl + 0 para salvar a edição no arquivo
         - Ctrl + X para sair do editor
   → 
          

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