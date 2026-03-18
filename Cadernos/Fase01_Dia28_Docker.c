/* ==============================================================
   Fase 01 — DIA 28 — Docker e Conteinerização
   ==============================================================

   🧩 CONTEÚDOS PRINCIPAIS:
   - Conteinerização
   - Instância
   - Camadas

   🧠 CONCEITOS FUNDAMENTAIS:
   - Explique brevemente os pontos teóricos
   - Use seus próprios termos
   - Liste insights importantes

   --------------------------------------------------------------
   DOCKER
   --------------------------------------------------------------
   
   O QUE É
   → Uma plataforma que contém um conjunto de ferramentas para criar, executar e gerenciar o ciclo de vida de contêineres
   → Resolve um problema da computação criando um ambiente isolado para rodar a aplicação específica em qualquer maquina compativel com o docker
   → Empacota aplicação, dependência e ambiente, ao invés de toda a máquina e seu SO como uma VM

   COMO FUNCIONA
   → Namespaces criam visões isoladas do sistema, onde em cada instância você só pode ver os processos referentes aquela instância
   → Cgroups são grupos de controle para separar partes de recursos para cada processo, e assim um processo nao usar 100% do cpu
   → Union File System é o conceito de camadas empilhadas para que as aplicações que usam os mesmos programas não precisem duplica-los

   CAMINHO
   → Dockerfile - build - imagem - run - container - stop - remove

   COMPONENTES
   → Dockerfile, um arquivo, que é como uma receita mostrando como a imagem vai ser construida
   → Imagem, é um molde para as instâncias do que quer ser construído, em termos de POO é como se fosse a classe
   → Container, é a instância da imagem rodando, um processo isolado, em termos de POO é como se fosse o objeto

   DOCKERFILE
   → Roteiro de construção, sequência de instruções para montar um sistema mínimo que rode uma aplicação específica
   → FROM imagem -- pré pronta sua ou do docker hub que vai servir como base para a construção do ambiente desejado
   → WORKDIR /pasta -- define um diretório para ser o padrão dentro da imagem e do container
   → COPY arquivos -- copia arquivos do seu computador pra dentro da imagem, como um código já pronto ou etc
   → RUN comandos -- serão executados comandos durante a construção da imagem, como instalação de pacotes e programas
   → CMD comandos -- comandos que serão executados quando a instancia, o container, iniciar, com o comando docker run

   COMANDOS
   → docker --version -- saber a versão atual do programa
   → docker pull imagem -- baixar a imagem
   → docker images -- listar as imagens no programa
   → docker run imagem -- cria e inicia o conteiner da imagem 
   → docker run -it ubuntu bash -- cria um conteiner com uma versão do ubuntu (imagem) executando o comando bash assim que ligar
         -it -- interactive (i) mantem a entrada padrão (stdin) aberta e tty (t) aloca um terminal virtual
   → docker ps -- lista os conteineres rodando naquele momento, em "up"
   → docker ps -a -- lista todos os conteineres, inclusive os que pararam ou deram erro 
   → docker stop ID -- para o conteiner do ID descrito
   → docker rm ID -- remove o conteiner do ID descrito


   - Próximo estudo: Avançar em Docker com - entender totalmente o kernel, camadas, ciclo de vida do container, volume, rede de container, registry(docker hub), arquitetura do docker, processo, imagem, Kernel vs Sistema Operacional, Camadas (build cache), Build vs Run (profundo), Ciclo de vida do container, Processo (container = processo vivo), Dockerfile em profundidade, Rede de containers, Volumes, Docker Hub / Registry


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