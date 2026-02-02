/* ==============================================================
   Fase 01 — DIA 19 — Terminal Básico com Bash
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Funcionamento do Terminal
   - "Linguagem" Bash
   - [Tópico 3]

   🧠 CONCEITOS FUNDAMENTAIS:
   - Compreensão da Lógica de pensamento de diretorios e arquivos
   - Comandos básicos de movimentação, criação, exclusão e outros, para diretórios e arquivos
   - Conceitos de ambiente do bash, variaveis e estruturas 

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
   → Aparece quando o usuário digita o comando ls -l
   → O formato geral é: [T][rwx][rwx][rwx] ([T][owner][group][others])
   → [T] tipo do arquivo: - arquivo comum, d diretório, l link simbólico, c dispositivo de caractere, b dispositivo de bloco
   → 1º [rwx] significa o que o dono do arquivo pode fazer
   → 2º [rwx] significa o que o group, grupo de usuarios associado ao arquivo, pode fazer
   → 3º [rwx] significa o que others, qualquer outro usuário do sistema, pode fazer

   VARIAVEL DE AMBIENTE
   → Par chave=valor
   → Objeto dinâmico que armazena geralmente texto, define comportamentos e contexto de processos
   → Acessadas usando o símbolo de cifrão $ antes do nome
   → Mais comuns são: PATH, HOME, USER, LANG
   → Visualizadas com 3 comandos: env ou printenv para exibir variaveis exportadas, e set mostra todas locais e de ambiente
   → Temporárias, apenas na sessão atual, ou permanentes se definidas em arquivos .bashrc ou ~/.bash_profile
   → Ativas estão na parte da RAM dedicada aquele processo, enquanto durar o processo estão vivas
   → Persistentes estão em arquivos de texto de configuração, toda vez que o terminal bash é aberto elas são lidas

   SCRIPT
   → Um arquivo de texto com uma sequência de comandos, em linguagem interpretada ou bash
   → Que o SO executa automaticamente, linha por linha, por meio de um interpretador (shell)
   → Comandos de forma organizada e sequencial, para automatizar tarefas que poderiam ser digitadas no terminal
   → Fluxo: arquivo - shell (bash) - SO - chamadas de sistema
   → Estrutura mínima do script: shebang - comentários - comandos - saída
   → Shebang, mais importante, instrução para o SO usar o interpretador determinado na linha
   → Comentários, feitos com #, devem ser como em todo arquivo, esclarecedores, para documentar, facilitar e explicar
   → Variáveis, para endereços e etc, que são de tipagem dinamica, e sempre usam texto no conteúdo
   → Comandos, como os que estão abaixo, ordenados em uma sequência lógica, uma série de passos para um objetivo
   → Controle de fluxo, para verificação de estado, tratamento de erros
   → Loops, para processar vários arquivos, automatizar tarefas
   → Funções, para modularização, reuso, retornam status e não valores
   → Código de Saída, pelo "exit 0", 0 é sucesso e #0 é erro
   
   COMPOSIÇÃO FUNCIONAL
   → Técnica de combinar funções ou comandos, onde a saída da atual é a entrada da próxima
   → Executada através de pipes " | " entre os comandos
   → Permite criar fluxos de processamento, pipelines, decompor tarefas grandes em etapas menores integradas
   → comando1 | comando2

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
   → chmod forma arquivo  -- change mode -- altera as permissões de arquivos
         chmod g-w arquivo -- remove a escrita do grupo
         chmod u+x arquivo -- adiciona a permissão de executar ao usuario
         - letra u, g, o, a -- user, group, others, all
         - símbolo +, -, = -- adiciona, remove, define exatamente
         - permissão r, w, x == read, write, execute
   → echo texto  -- ecoar -- comando para exibir textos ou valores de variaveis na saída padrão (terminal)
   → ./script.sh  -- aqui -- executa um arquivo ou script que esteja no diretório atual
         - pode exigir o comando 'chmod +x arquivo' para dar a permissão do usuario executar o arquivo
         - sem a permissão só funcionaria usando o comando 'bash arquivo'
         - por segurança o bash só procura em diretorios listados na variavel $PATH
         - o diretorio atual não é incluido no $PATH pela vulnerabilidade a scripts malicosos, por isso o comando ./
   → find . -name "*.c"  -- encontre -- busca em algum lugar algum arquivo pelo critério escolhido
         - busca no sistema de arquivos percorrendo toda a estrutura de diretórios a partir de uma origem
         - o . significa o diretório da busca, no caso . é o diretório atual, ou usar caminho absoluto
         - o -name indica que o critério de busca vai ser o nome do arquivo, foca na string do nome
         - o "*.c" indica que será em todos os arquivos que terminam com essa extensão
         - o " " impede que o find expanda o * então ele garante que o find receba o padrão literal buscando em todas as subpastas também
   → grep "main" arquivo.c  -- global regular expression print -- realiza busca de texto em arquivos
         - grep é o comando utilitário
         - "main" é o padrão, o que está buscando, que nesse caso é a string literal que será buscada
         - arquivo.c é o arquivo onde a busca ocorrerá

   ESTRUTURAS
   → Controle de Fluxo, famoso if else
         if [ -f "arquivo.txt" ]; then
            echo "Arquivo existe"
         else
            echo "Arquivo não encontrado"
            fi
   → Loop, famoso for
         for file in *.txt; do
            echo "Processando $file"
         done



   - Próximo estudo: Continuação de Terminal com Bash (variavel de ambiente, script simples)


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