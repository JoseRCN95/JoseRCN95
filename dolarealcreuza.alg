algoritmo "semnome"
// Função :
// Autor :
// Data : 16/02/2022
// Seção de Declarações 
var
   QR: REAL
   VD: REAL
   QD: REAL
inicio
       ESCREVA ("QUANTOS REAIS VOCE TEM?" )
       LEIA (QR)
       ESCREVA ("QUAL É O VALOR ATUAL DO DÓLAR EM RELAÇÃO AO REAL? ")
       LEIA (VD)
       QD <- (QR/VD)
       ESCREVA ("VOCE PODE COMPRAR ",QD," DÓLARES")
fimalgoritmo
