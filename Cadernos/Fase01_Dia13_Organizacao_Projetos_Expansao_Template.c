/* ==============================================================
   Fase 01 — DIA 13 — Organização de Projeto Expansão de Template
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Como sair do template basico para o avançado
   - Melhor organização e separação de pastas e conteúdos
   - [Tópico 3]

   🧠 CONCEITOS FUNDAMENTAIS:
   - Basicamente separar por responsabilidade
   - Apesar da dificuldade de encaixar cada arquivo em um lugar
   - O importante é deixar tudo auto-explicativo
   - Resolvendo qualquer confusão atual e com oportunidade para alterações futuras

   --------------------------------------------------------------
   EXPANSÃO DE TEMPLATE
   --------------------------------------------------------------

   O QUE É
   → Separar responsabilidades em cada devido local
   → Não deve haver pasta sem explicação ou função

   SRC - SOURCE CODE
   → Implementação, o coração do programa, implementa o sistema, é o sistema

   DOCS
   → Explica o sistema, 
   → Decisões tecnicas, diagramas, explicações e anotação que não são código
   → Não confundir com o Readme, esse é só uma apresentação inicial
   → O apronfudamente da explicação fina nessa pasta

   TESTS
   → Código que verifica se a implementação funciona
   → Contém outras dependências, seguem outra lógica, não são produção
   → Por isso ficam em outra pasta

   SCRIPTS
   → Comandos repetitivos
   → Responsáveis por rodar, limpar, compilar, testar
   → Se conectam ao Bash, Docker, CI/CD

   BUILD
   → Artefatos porém não como vimos anteriormente
   → São arquivos gerados automaticamente
   → Binários, arquivos temporários, exes, logs, etc
   → Sempre estarão no git ignore


   - Próximo estudo: Terminal Básico com Bash


   🧱 ERROS E SOLUÇÕES:
   - No início houve mais dúvidas do que erros
   - As leituras foram fundamentais para evitar erros
   - A correção do conteúdo foi a melhor solução

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