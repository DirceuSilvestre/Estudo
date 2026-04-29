/* ==============================================================
   Fase 01 — DIA 36 — Continuação Git e Github - versionamento a pull request
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Branches
   - Comandos
   - Head

   🧠 CONCEITOS FUNDAMENTAIS:
   - Explique brevemente os pontos teóricos
   - Use seus próprios termos
   - Liste insights importantes

   --------------------------------------------------------------
   GIT
   --------------------------------------------------------------

   COMMIT
   → Registra todos os arquivos no seu diretório
   → Commits seguintes a raíz geralmente registram um conjunto de mudanças, visando manter os commits mais leves possível

   BRANCHE
   → São ponteiros para um determinado commit

   HEAD
   → O commit atualmente ativo, o ultimo commitado
   → A maioria dos comandos do git que realizam mudanças sobre a árvore de trabalho começarão mudando o HEAD

   CAMADAS
   → Os projetos e trabalhos ficam organizados em três camadas: working directory ou tree, staging area ou index, e repositorio local
   → Working Directory é a pasta física no computador onde criamos arquivos e escrevemos codigo
   → Staging Area é uma camada intermediaria que guarda as alteracoes que desejamos incluir no proximo commit
   → Repositório local é onde o git armazena o historico de commits, snapshots e branches
   → Quando fazemos um commit o codigo sai da area de trabalho, passa pela de preparo e fica registrado no repositorio local
   → Somente quando damos git push que enviamos do repositorio local para o repositorio remoto
   → O arquivo pode estar de três formas: modified, staged, e committed
   → Modified, é quando foi alterado no diretorio de trabalho
   → Staged, é o arquivo marcado para commit no staging area
   → Committed, arquivo salvo com segurança no repositório

   COMANDOS
   → git init -- inicia ou reinicia o git na maquina
   → git status 
   → git commit 
   → git branch nome -- cria uma branch com o nome desejado
      - git branch -f main HEAD~3 -- usa referencia relativa para voltar com a branch 3 ancestrais
   → git checkout nome_da_branch -- vai para a branch desejada para poder começar a trabalhar nela
      - git checkout branch^ -- ^ é referencia relativa e dá check no commit pai do atual nessa branch com o HEAD
      - git checkout HEAD^ -- pode dar check no commit e depois ir ao pai usando a HEAD como parte da referencia relativa
      - git checkout HEAD~3 -- til é usado como referencia relativa junto a quantidade de commits que deseja voltar
   → git checkout -b nome_da_branch -- cria uma branch e da checkout no mesmo comando
      - git checkout -B nome_da_branch HEAD -- traz uma branch para o commit onde esta atualmente com o head e faz o checkout na branch que trouxe
   → git merge nome_da_branch -- cria um commit com dois pais unicos, fazendo uma "uniao"
      - une a branch em que estamos com uma branch escolhida atraves do nome em um novo commit
   → git rebase nome_da_branch -- pega o registro dos commits da branch atual e coloca na branch escolhida
      - git rebase -i HEAD~X -- -i de interativo, onde pode decidir a ordem dos commits e quais commits vao aparecer todos em baixo do commit ancestral para qual o HEAD voltou usando numero no lugar do X
   → git reset HEAD~1 -- volta um ancestral na branch que estamos
   → git revert HEAD -- cria um novo commit sem as alterações do commit pai, revertendo seu estado e podendo dar git push
   → git cherry-pick nome_dos_commits -- pega os commits listados e colocam como filhos do commit atual onde esta com a branch que esta atualmente na ordem em que foram listados no comando
   → git tag nome_da_tag nome_do_commit -- coloca uma tag no commit especificado
   → git describe referencia -- descreve onde esta com relação a tag mais próxima, a partir da referencia ou do head se nao tiver especificado a referencia
   → git clone <url-do-repositório> -- clona todos os dados do repositório remoto para o repositório local e ja executa git init
   → git fetch - baixa os commits do remoto no repositorio local e atualiza a referencia pra qual a branch remota aponta
   → git pull - baixa os commits do remoto e faz a junção com o commit atual onde esta o main do repositorio local gerando um novo commit que é a junção do atual local com o mais recente remoto
   → git push - envia as alterações locais, os commits, para o repositório remoto deixando os dois no mesmo estado até o momento


   - Próximo estudo: Markdown


   🧱 ERROS E SOLUÇÕES:
   - (Liste erros encontrados e como resolveu)

   🗂️ REFERÊNCIAS CONSULTADAS:
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