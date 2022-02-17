algoritmo "triangulo"
// Função :
// Autor :
// Data : 16/02/2022
// Seção de Declarações 
var
 L1,L2,L3: REAL
 ES,EQ,TRI: LOGICO
inicio
ESCREVA ("DIGITE O PRIMEIRO LADO: ")
LEIA (L1)
ESCREVA ("DIGITE O SEGUNDO LADO: ")
LEIA (L2)
ESCREVA ("DIGITE O TERCEIRO LADO: ")
LEIA (L3)
EQ <- ((L1=L2) e (L2=L3))
ES <- ((L1<>L2) e (L2<>L3) e (L2<>L2))
TRI <-((L1<L2+L3) e (L2<L1+L3) e (L3<L1+L2))
ESCREVAL ("ESSA FORMA PODE SER UM TRINAGULO?", TRI)
ESCREVAL ("O TRIANGULO É EQUILATERO?", EQ)
ESCREVA ("O TRIANGULO É ESCALENO?", ES)
fimalgoritmo
