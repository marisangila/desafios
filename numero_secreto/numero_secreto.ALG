Algoritmo "numeroSecreto"
Const
   TENTATIVAS = 10
   NUMERO_SECRETO = 42
Var
   palpite, tentativaAtual: inteiro
Inicio

   PARA tentativaAtual DE 1 ATE 10 FACA
      ESCREVAL("Tentativa",tentativaAtual,"de",TENTATIVAS,".")
      ESCREVAL("Digite um número inteiro:")
      LEIA(palpite)

      SE palpite < NUMERO_SECRETO ENTAO
         ESCREVAL("Tente um número maior!")
      SENAO
         SE palpite > NUMERO_SECRETO ENTAO
            ESCREVAL("Tente um número menor!")
         SENAO
            ESCREVAL("Você acertou!")
            INTERROMPA
         FIMSE
      FIMSE
   FIMPARA
   SE tentativaAtual > TENTATIVAS ENTAO
      ESCREVAL("Número de tentativas esgotadas!\nO número secreto é", NUMERO_SECRETO)
   FIMSE
Fimalgoritmo