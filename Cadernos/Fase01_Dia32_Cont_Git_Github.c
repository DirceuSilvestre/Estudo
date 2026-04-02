/* ==============================================================
   Fase 01 — DIA 32 — Continuação Git e Github - versionamento a pull request
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
   → git merge nome_da_branch -- cria um commit com dois pais unicos, fazendo uma "uniao"
      - une a branch em que estamos com uma branch escolhida atraves do nome em um novo commit
   → git rebase nome_da_branch -- pega o registro dos commits da branch atual e coloca na branch escolhida
   → git reset HEAD~1 -- volta um ancestral na branch que estamos
   → git revert HEAD -- cria um novo commit sem as alterações do commit pai, revertendo seu estado e podendo dar git push

   
   - Próximo estudo: Continuação de Git e Github - versionamento a pull request


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