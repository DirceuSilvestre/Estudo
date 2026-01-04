/* ==============================================================
   Fase — DIA 11 — Configuração das Ferramentas e Boas Práticas
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Conferir as instalações das linguagens, e outros
   - C, Python
   - Git, Docker

   🧠 CONCEITOS FUNDAMENTAIS:
   - Conexão do VS Code com o path que contém o caminho correto para executar o código
   - Ligação das ferramentas baixadas para uso dentro do VS Code junto com o código
   - Liste insights importantes

   --------------------------------------------------------------
   C
   --------------------------------------------------------------

   INSTALAÇÃO
   → Ocorreu de maneira fácil, baixando a extensão pro VS Code
   → Nenhuma correção precisa ser feita assistindo vídeo de instalação
   → A execução ocorre via terminal como normalmente no Linux, o que é bom para o aprendizado e reforço

   --------------------------------------------------------------
   PYTHON
   --------------------------------------------------------------

   INSTALAÇÃO
   → Ocorreu de forma mais completa, somente a extensão não foi suficiente
   → Dado a limpeza que tinhamos feito na máquina tivemos que reinstalar o python
   → Com o python no path conseguimos conectar o interpretador no vs code e rodar

   VENV
   → Isolamento de projetos em ambientes virtuais, anterior ao docker
   → Cada ambiente deve ter um nome
   → Comando de criação: py -m venv nome_do_ambiente
   → Caso tenha algum comando python que não funcione no power shell, usar .\ antes do nome que funciona
   → Dentro do ambiente podemos instalar as bibliotecas que desejamos para o projeto específico
   → Comando para saber tudo instalado com as versões: pip freeze > requeriments.txt


   - Próximo estudo: Verificar a configuração e boas práticas do git e do docker, e a conexão como vs code


   🧱 ERROS E SOLUÇÕES:
   - (Liste erros encontrados e como resolveu)

   🗂️ REFERÊNCIAS CONSULTADAS:
   - (links, vídeos ou livros usados)

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