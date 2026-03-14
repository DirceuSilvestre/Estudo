/* ==============================================================
   Fase 01 — DIA 27 — Continuação a Introdução do Power Shell
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

   CMDLETS
   → Comandos escritos da forma Verbo-Substantivo
   → Nativos do Power Shell, pequenas unidades de funcionalidade que executam tarefas específicas
   → Podem ser implementados em C# ou Power Shell, fazem parte da arquitetura do Power Shell e trabalham com objetos, não texto
   → Command + applet = cmdlet -- pequeno comando especializado
   → Nem todo comando é um cmdlet, outros são script ou executáveis

   OBJETOS
   → São instâncias de classes .NET retornadas pelos comandos.
   → Esse padrão de comandos definidos pela Microsoft tem o objetivo de facilitar o uso, e é mais próximo da linguagem
   → Objetos retornados contém propriedades e métodos
   → Esses objetos podem ser manipulados no pipeline
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

   PIPELINE
   → Mecanismo que permite a saída de um comando seja a entrada do próximo transportando objetos, não texto
   → Feito utilizando o símbolo | chamado de pipe 
   → Lógica: Comando1 → saída → Comando2 → saída → Comando3
   → Comando1 | Comando2 | Comando3
   → $_ ou $PSItem é o objeto especial que representa cada item no pipeline
   → Exemplo: Get-ChildItem | Where-Object { $_.Length -gt 1MB }

   OPERADORES
   → ;  executa comandos em sequência sem passar dados entre eles
   → &&  executa o segundo comando somente se o primeiro funcionar (PowerShell 7+)
   → ||  executa o segundo comando se o primeiro falhar (PowerShell 7+)

   SCRIPT
   → Arquivo de texto .ps1 com sequência de comandos verb-noun que o power shell executa automaticamente
   → Estrutura mínima do script: comentários - comandos - saída
   → Comentários são feitos utilizando # no início da linha
   → Read-Host -- para o script para solicitar e ler uma linha de texto escrita pelo usuário no console
   → Write-Host -- escreve no console mensagens, avisos ou resultados visuais, porém seu conteúdo não pode ser capturado por outros comandos

   COMANDOS BÁSICOS
   → Get-ChildItem -- ls -- lista os arquivos do diretório atual
   → Set-Location --cd -- para mudar o diretório onde está
   → Get-Location -- pwd -- mostrar o caminho do diretório atual
   → New-Item -- touch -- criar um novo arquivo, diretório, etc
   → Copy-Item -- cp -- copia o conteudo de um arquivo para outro, ou diretórios
   → Move-Item -- mv -- move um arquivo de um diretorio para o outro
   → Remove-Item -- rm -- remove arquivo do diretorio atual, ou remove diretório
   → Get-Content -- cat -- exibe na saida padrão (terminal do comando) o conteudo do arquivo
   → New-Item -ItemType Directory -- mkdir -- cria um novo diretorio filho do diretorio atual
   → New-Item -ItemType File -Path -- touch -- a mesma função do New-Item porém com indicação do local ou nao com -Path
   → $variavel -- recebe tanto texto quanto numero, tipagem dinâmica, e é um objeto
   → .\script.ps1 -- executa o script somente se estiver no diretório atual
   → Get-ExecutionPolicy -- verifica a política de execução
   → Set-ExecutionPolicy RemoteSigned -- alterna a política de execução para somente criados localmente e assinaos digitalmente
   → Get-Command -- exibe todos os comandos disponíveis

   OPERADORES
   → -eq -- igual
   → -ne -- diferente
   → -gt -- maior
   → -lt -- menor
   → -ge -- maior ou igual
   → -le -- menor ou igual
   → -like -- igual a, com * para qualquer sequencia, e ? exatamente um caractere "PowerShell" -like "Power*"
   → -match -- busca padrões complexos usando regex como nessa busca por números "abc123" -match "\d+"

   ESTRUTURAS DE CONTROLE
   → Controle de Fluxo, famoso if else
        if ($numero -gt 10) {
            Write-Host "Maior que 10"
        }
        else {
            Write-Host "10 ou menor"
        }
   → Loop, famoso for
        for ($i=1; $i -le 5; $i++) {
            Write-Host $i
        }
        foreach ($n in $nomes) {
            Write-Host $n
        }
        while ($i -le 3) {
            Write-Host $i
            $i++
        }


   - Próximo estudo: 1.3 Docker e conteinerização


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