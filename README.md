#TRABALHO SOBRE PILHAS

##CONTEÚDOS: 
###Funções com passagem de parâmetro por valor e referência aplicados a estrutura de Pilhas
##ORIENTAÇÕES:
####Ler até final de arquivo ou EOF.
###Exemplo Python:
`while True:`

  `try:`
    `#seu código entra aqui`
  
  `except EOFError:`

`break`

###Exemplo em C++:
`if (scanf(“%d”,&N) != EOF)`

`ou quando for string`

`while(gets(TEXTO))`


#Exercícios
###1 – (0,75) Você deve implementar o que está faltando no código disponibilizado pelo professor. 

###2 – (1,00) Usando o código da questão anterior, modifique a Pilha para permitir caracteres de tamanho até 50 e crie uma solução de criptografia:
####Uma das estratégias utilizadas na criptografia é a mistura das informações de um texto ou de uma senha. Em Setembro irá ocorrer o mês da segurança organizado pelo Centro de Atendimento a Incidentes de Segurança (CAIS - https://memoria.rnp.br/cais/sobre.html) da RNP. Com isso, você foi convidado para criar um programa que após a entrada de várias letras seja utilizada uma pilha que preserve a ordem das palavras, mas inverta o sentido das mesmas: 
###Por exemplo: ESTE EXERCICIO E MUITO FACIL  a saída deve ser  
```ETSE OICICREXE E OTIUM LICAF.```