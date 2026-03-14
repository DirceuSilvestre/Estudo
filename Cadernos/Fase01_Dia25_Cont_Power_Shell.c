/* ==============================================================
   Fase 01 — DIA 25 — Continuação a Introdução do Power Shell
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
   → Get-ChildItem -- ls -- lista os arquivos do diretório atual
   → Set-Location --cd -- para mudar o diretório onde está
   → Get-Location -- pwd -- mostrar o caminho do diretório atual
   → New-Item -- touch -- criar um novo arquivo (nao cria novo diretorio)
   → Copy-Item -- cp -- copia o conteudo de um arquivo para outro
   → Move-Item -- cp -- move um arquivo de um diretorio para o outro
   → Remove-Item -- rm -- remove arquivo do diretorio atual
   → Get-Content -- cat -- exibe na saida padrão (terminal do comando) o conteudo do arquivo
   → 
   → 
   → 
   → 
   → 


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