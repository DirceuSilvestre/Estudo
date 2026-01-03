/* ==============================================================
   Fase 00 — DIA 06 — Compreensão das Ferramentas
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Docker

   🧠 CONCEITOS FUNDAMENTAIS:
   - Docker é um programa instalavel
   - Constroi uma imagem com a configuração que o programa roda o mínimo necessário para a execução
   - Mais leve e dinâmico em relação as máquinas virtuais

   --------------------------------------------------------------
   Docker
   --------------------------------------------------------------
   
   SISTEMA DE ENCAPSULAMENTO DE AMBIENTES
   → Cria ambientes isolados, padronizados e replicaveis para rodar aplicações
   
   COMPONENTES
   → Imagem: toda configuração necessária, SO mínimo, dependências, códigos, versões, etc
   → Container: instância da imagem, a materialização da configuração que executa a aplicação
   
   IMAGEM
   → O arquivo é montado em camadas, desde as aplicações mais imutaveis até as mais mutaveis
   → Cada camada é somente de leitura, da camada base a camada final
   
   CONTAINER
   → Gerado a partir da imagem, e contém um espaço de escrita volátil
   → O espaço de escrita some junto com o container quando ele é apagado
   → Pode ser gerado vários containers da mesma imagem que funcionarão igual
   
   
   - Próximo estudo: API


   🧱 ERROS E SOLUÇÕES:
   - De início foi difícil entender se o Docker era um programa instalavel ou outra coisa
   - Após algumas leituras ficou mais fácil a compreensão da imagem e container

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