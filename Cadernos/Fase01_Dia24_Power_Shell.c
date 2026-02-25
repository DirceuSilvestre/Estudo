/* ==============================================================
   Fase 01 — DIA 24 — Introdução ao Power Shell
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
   POWER SHELL
   --------------------------------------------------------------

   O QUE É
   → É um shell e linguagem orientado a objetos, baseado em .NET, para administração e automação de sistemas
   → Cada comando retorna instâncias reais de classes .NET
   → Não é o Bash do Windows 
   → Bash: Manipula texto puro / Power Shell: Retorna objetos do tipo System.IO.FileInfo
   → Exemplo: (Get-ChildItem)[0].GetType() Retorna um tipo real da biblioteca .NET

   OBJETOS
   → Comandos escritos da forma Verbo-Substantivo
   → Esse padrão de comandos definidos pela Microsoft tem o objetivo de facilitar o uso, e é mais próximo da linguagem
   → Objetos retornados contém propriedades e métodos
   → Exemplo de chamada de método: (Get-Process notepad).Kill()

   LÓGICA
   → Pense em um ambiente de orquestração de objetos, onde a maioria das atividades são de manipulação
   → Apesar dos conceitos de objeto de java ajudar no pensamento, no PS raramente se cria classe
   
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


   - Próximo estudo: Continuar o Terminal básico com Power Shell (comandos práticos e scripts simples no Windows)


   🧱 ERROS E SOLUÇÕES:
   - Os erros diminuiram bastante a compreensão na revisão ficou melhor

   🗂️ REFERÊNCIAS CONSULTADAS:
   -

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