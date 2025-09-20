# ♟️ Desafio Universidade Estacio de sá — Desafio de Xadrez em C

Este projeto foi desenvolvido como parte de um desafio técnico para simular os movimentos das peças de xadrez utilizando **linguagem C**, com foco em **estruturas de repetição**, **funções recursivas** e **loops complexos**. Cada nível do desafio propõe uma evolução na lógica e na organização do código, culminando em uma simulação avançada e bem documentada.

---

## 🧠 Níveis do Desafio

### 🏅 Nível Novato
- Movimentação básica das peças:
  - **Bispo**: 5 casas na diagonal superior direita (Cima + Direita)
  - **Torre**: 5 casas para a direita
  - **Rainha**: 8 casas para a esquerda
- Utilização de `for`, `while` e `do-while`
- Saída clara com `printf("Direção\n")`

### 🏅 Nível Aventureiro
- Implementação da movimentação do **Cavalo** em "L":
  - 2 casas para baixo + 1 casa para esquerda
- Uso obrigatório de **loops aninhados** (`for` + `while`)
- Separação visual entre movimentos

### 🥇 Nível Mestre
- Refatoração das peças simples com **funções recursivas**
- **Bispo** com recursividade + loops aninhados
- **Cavalo** com múltiplas variáveis, `continue` e `break`
  - Movimento em "L": 2 casas para cima + 1 casa para direita

---

## 🛠️ Tecnologias Utilizadas

- Linguagem **C**
- Compilador GCC
- Terminal Git Bash
- Git e GitHub para versionamento


ABAIXO AS INSTRUÇOES PARA O PROJETO!


# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio de Xadrez - MateCheck

Bem-vindo ao desafio de Xadrez da MateCheck! Este projeto tem como objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.

## Níveis do Desafio

### 🏅 Nível Novato

A equipe de testes da MateCheck recebeu uma solicitação para determinar os limites de utilização do código dentro do jogo. Para isso, a equipe de programação solicitou o envio de blocos de código contendo loops (estruturas de repetição) para avaliação de desempenho e possibilidades de aplicação.

**Movimentação das Peças:**
- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda

No jogo, apenas possuímos movimentação para quatro direções, mas o Bispo se mexe na diagonal. Com isso, foi adicionada uma condição para movimentação dessa peça, em que, para movê-lo, utilizamos o comando `printf` e, em seu valor, colocamos a direção usando a combinação de direções básicas. 

**Requisitos Funcionais:**
1. **Entrada de Dados:**
   - Os valores necessários devem ser inseridos manualmente a partir de variáveis dentro do código.
   - Será permitido o uso de constantes para facilitar a escrita do código e evitar repetição de valores.
2. **Estruturas de Repetição:**
   - Os códigos precisam ser desenvolvidos utilizando estruturas de repetição.
3. **Saída de Dados:**
   - O sistema deve exibir os resultados de cada procedimento de forma clara e legível.

**Requisitos Não Funcionais:**
1. **Performance:**
   - O sistema deve executar os cálculos e apresentar os resultados sem atrasos perceptíveis.
2. **Documentação:**
   - O código deve ser bem documentado, incluindo comentários detalhados sobre a função de cada parte do código.
3. **Manutenibilidade:**
   - O código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento.

**Instruções Detalhadas:**
1. **Entrada de Dados:**
   - Inclua a biblioteca padrão de entrada e saída no início do seu programa.
   - Declare variáveis constantes para definir os valores a serem comparados dentro das estruturas condicionais.
2. **Estruturas de Repetição:**
   - Utilize cada uma das diferentes estruturas de repetição apresentadas.
3. **Saída:**
   - As saídas deverão ser mostradas de forma clara e organizada, com a direção da peça.

**Nomenclatura:**

printf("Cima\n");
printf("Baixo\n");
printf("Esquerda\n");
printf("Direita\n");

### 🏅 Nível Aventureiro
Agora que já conseguimos mover as peças mais simples usando loops, os desenvolvedores pediram para elaborar os loops de outra forma. Para o desafio, moveremos o cavalo, que possui sua movimentação em L. O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma deve ser for e a outra pode ser while ou do-while.

**Movimentação do Cavalo:**

Mover o cavalo em L utilizando loops aninhados.
Obs: É obrigatório o uso de loops aninhados.

### 🥇 Nível Mestre
Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por **funções recursivas**, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

**Movimentação das Peças:**

**Bispo**: 5 casas na diagonal direita para cima
**Torre**: 5 casas para a direita
**Rainha**: 8 casas para a esquerda
**Cavalo**: 1 vez em L para cima à direita
Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Equipe de Ensino - MateCheck
