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
   → Comando - objeto - outro comando 
   → O pipeline transporta objetos tipados, não strings
   → Pensar em Sistema - Objetos - Propriedades - Ações

   VARIÁVEL DE AMBIENTE
   → Variáveis globais do SO que armazenam informações sobre o sistema
   → Mais comuns: PATH, TEMP, USERPROFILE, APPDATA
   → Acessaveis utilizando $Env na frente, da forma $Env:NOME
   → Listar todas as variáveis do ambiente Get-ChildItem Env:
   → $Env:TESTE = "valor" -- Cria uma variavel de ambiente temporária válida apenas na sessão atual
   
   COMPOSIÇÃO FUNCIONAL
   → Técnica de combinar funções ou comandos, utilizando | entre eles, onde a saída da atual é a entrada da próxima

   PIPELINE
   → Mecanismo que permite a saída de um comando seja a entrada do próximo
   → Feito utilizando o símbolo | chamado de pipe 
   → Lógica: Comando1 → saída → Comando2 → saída → Comando3
   → Comando1 | Comando2 | Comando3
   → $_ ou $PSItem é o objeto especial que representa cada item no pipeline
   → Exemplo: Get-ChildItem | Where-Object { $_.Length -gt 1MB }

   OPERADORES
   → ;  executa comandos em sequência sem passar dados entre eles
   → &&  executa o segundo comando somente se o primeiro funcionar 
   → ||  executa o segundo comando se o primeiro falhar
   
   
   
   PERMISSÕES
   → 3 grupos podem exercer 3 atividades, sempre determinadas pelo usuário com maior permissão sobre a máquina
   → u, g, o (user/owner, group, others) podem nem sempre as três atividades de r, w, x (read, write, execute)

   VARIAVEL DE AMBIENTE
   → Par chave=valor que armazena texto, acessados com $ antes do nome
   → Mais conhecidos são: PATH, HOME, USER, LANG

   SCRIPT
   → Arquivo de texto com uma sequência de comandos em bash

   

   COMANDOS BÁSICOS
   → Get-ChildItem -- ls -- lista os arquivos do diretório atual
   → Set-Location --cd -- para mudar o diretório onde está
   → Get-Location -- pwd -- mostrar o caminho do diretório atual
   → New-Item -- touch -- criar um novo arquivo (nao cria novo diretorio)
   → Copy-Item -- cp -- copia o conteudo de um arquivo para outro
   → Move-Item -- cp -- move um arquivo de um diretorio para o outro
   → Remove-Item -- rm -- remove arquivo do diretorio atual
   → Get-Content -- cat -- exibe na saida padrão (terminal do comando) o conteudo do arquivo
   → New-Item -ItemType Directory -- mkdir -- cria um novo diretorio filho do diretorio atual
   → New-Item -ItemType File -Path -- touch -- a mesma função do New-Item porém com indicação do local ou nao com -Path
   → $variavel -- recebe tanto texto quanto numero, tipagem dinâmica, e é um objeto
   → 
   → 


   - Próximo estudo: Continuar o Terminal básico com Power Shell (parte 5 estrutura de script)


   🧱 ERROS E SOLUÇÕES:
   - Sempre buscar mais informações sobre o tema quando não ficar claro

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