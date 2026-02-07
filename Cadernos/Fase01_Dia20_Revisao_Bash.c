/* ==============================================================
   Fase 01 — DIA 20 — Revisão do Bash
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - O que é Bash
   - Funcionamento e Principais Características
   - Comandos

   🧠 CONCEITOS FUNDAMENTAIS:
   - Conceito de árvore para compreensão de diretórios
   - Comandos interpretados e memória
   - Permissões

   --------------------------------------------------------------
   BASH
   --------------------------------------------------------------

   O QUE É
   → Linguagem interpretada utilizada no linux para dar comandos ao computador
   → Permite interação direta com o SO via linha de comando
   → Anterior as interfaces gráficas

   LÓGICA
   → Trabalha com o conceito de árvores em grafos na organização e acesso de diretórios e arquivos

   PERMISSÕES
   → 3 grupos podem exercer 3 atividades, sempre determinadas pelo usuário com maior permissão sobre a máquina
   → u, g, o (user/owner, group, others) podem nem sempre as três atividades de r, w, x (read, write, execute)

   VARIAVEL DE AMBIENTE
   → Par chave=valor que armazena texto, acessados com $ antes do nome
   → Mais conhecidos são: PATH, HOME, USER, LANG

   SCRIPT
   → Arquivo de texto com uma sequência de comandos em bash

   COMPOSIÇÃO FUNCIONAL
   → Técnica de combinar funções ou comandos, utilizando | entre eles, onde a saída da atual é a entrada da próxima

   COMANDOS BÁSICOS
   → pwd - para saber em que diretório está no momento
   → cd - para mudar o diretório onde está
   → ls - listar arquivos e pastas do diretório onde está
   → mkdir - criar diretório dentro do diretório onde está
   → rmdir - remove o diretório de nome digitado
   → rm - remove o arquivo de nome digitado
   → echo - comando para exibir texto ou valor no terminal
   → ./ - executar arquivo ou script no diretório onde está


   - Próximo estudo: Terminal básico com Power Shell (comandos práticos e scripts simples no Windows)


   🧱 ERROS E SOLUÇÕES:
   - Os erros diminuiram bastante a compreensão na revisão ficou melhor

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