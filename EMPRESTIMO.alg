algoritmo "EMPRESTIMO"

var
   ve,ju,vfinal,par: real
inicio
      escreva ("Qual o valor do emprestimo? R$")
      leia (ve)
      escreva ("Qual será a porcentagem de juros sobre o valor do emprestimo? ")
      leia (ju)
      vfinal <- ((ve*ju)/100+ve)
      escreva ("Em quantas parcelas seráo feitas a realização do pagamento? ")
      leia (par)
      escreva ("O valor final para pagamento será de R$",vfinal,". que será divido em",par," vezes de R$",vfinal/par)
fimalgoritmo
