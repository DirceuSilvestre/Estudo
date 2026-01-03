/* ==============================================================
   Fase — DIA 07 — Revisão Github Docker
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Github 
   - Docker

   🧠 CONCEITOS FUNDAMENTAIS:
   - Repositório remoto online
   - Conjunto de ferramentas para rodar programas e códigos direto no kernel
   
   --------------------------------------------------------------
   Github
   --------------------------------------------------------------

    RESPOSITÓRIO ONLINE
    → Repositório remoto online, onde seus projetos podem ficar visiveis ou não
    → Interface gráfica que facilita a visualização do projeto
    → Utilizado também como currículo e local de networking profissional
    → Estimula a colaboração, projetos open source geridos por comunidades
    → Permite a troca de mensagens entre programadores através das issues
    → Contém funções exclusivas como actions, issues, pull requests
    
   --------------------------------------------------------------
   Docker
   --------------------------------------------------------------
   
   SISTEMA DE AMBIENTES
   → Programa que acessa diretamente o kernel para rodar programas e códigos
   → Cria ambientes isolados, padronizados e replicaveis
   → Trabalha com os conceitos de imagens e containers
   → Imagem é o molde imutavel, a receita, de como o sistema será e programas instalados
   → Conteiner é a instancia da imagem, a configuração descrita na imagem sendo executada
   → Fluxo básico das ações do Docker: CLI → Daemon → containerd/runc → kernel
   
   
   - Próximo estudo: API


   🧱 ERROS E SOLUÇÕES:
   - Novamente foi difícil compreender no que se tratava o programa Docker
   - Porém o conjunto de ferramentas que traduz tudo até a execução no kernel ajudou

   🗂️ REFERÊNCIAS CONSULTADAS:
   - https://www.docker.com/play-with-docker/

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
