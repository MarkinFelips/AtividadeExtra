//Você foi contratado para desenvolver um sistema simples de registro de operações realizadas na bolsa de valores. O sistema deve permitir que o usuário registre operações de compra e venda de ações, armazenando informações como o Ticket da empresa, a quantidade de ações em carteira e o preço médio por ação. Você deverá exibir ao usuário um menu para ele selecionar o que deseja fazer. As opções são:
//a quantidade de ações em carteira e o preço médio por ação. Você deverá exibir ao usuário um menu para ele selecionar o que deseja fazer. As opções são:

//"Registrar compra" - Solicita ao usuário informações do ticket (cadeia de caracteres de até 6 letras, ex: ITSA4, TAEE11, BBAS3), quantidade comprada e valor do ativo no momento da compra.
//"Registrar Venda" - Solicita ao usuário informações do ticket, quantidade vendida e valor do ativo no momento da venda. Uma venda só pode ser registrada, caso o exista saldo para a venda.
//"Ver o saldo de um ativo (Busca por Ticket)" - Listar o saldo do ativo juntamente com o preço médio
//"Listar Patrimonio" - Listar todos os ativos do investidor juntamente com a quantidade e o preço médio.
//"Sair" - Fecha a aplicação
//Em cada compra realizada o preço médio será modificado, o mesmo não ocorre para a venda, onde apenas a quantidade será modificada.

//Sua solução deve contemplar os seguintes requisitos:

//Uso de Struct
//Uso de Funções e Procedures
//Uso de Recursividade (Implemente a busca binária para a consulta dos ativos)

#include <stdio.h>
#include <stlib.h>

struct Ticket{
 char Vetor[6];
 int QuantidadeComprada;
 int Total;
 int Vendas;
 int Carteira;
}
