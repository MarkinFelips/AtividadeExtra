//Voc� foi contratado para desenvolver um sistema simples de registro de opera��es realizadas na bolsa de valores. O sistema deve permitir que o usu�rio registre opera��es de compra e venda de a��es, armazenando informa��es como o Ticket da empresa, a quantidade de a��es em carteira e o pre�o m�dio por a��o. Voc� dever� exibir ao usu�rio um menu para ele selecionar o que deseja fazer. As op��es s�o:
//a quantidade de a��es em carteira e o pre�o m�dio por a��o. Voc� dever� exibir ao usu�rio um menu para ele selecionar o que deseja fazer. As op��es s�o:

//"Registrar compra" - Solicita ao usu�rio informa��es do ticket (cadeia de caracteres de at� 6 letras, ex: ITSA4, TAEE11, BBAS3), quantidade comprada e valor do ativo no momento da compra.
//"Registrar Venda" - Solicita ao usu�rio informa��es do ticket, quantidade vendida e valor do ativo no momento da venda. Uma venda s� pode ser registrada, caso o exista saldo para a venda.
//"Ver o saldo de um ativo (Busca por Ticket)" - Listar o saldo do ativo juntamente com o pre�o m�dio
//"Listar Patrimonio" - Listar todos os ativos do investidor juntamente com a quantidade e o pre�o m�dio.
//"Sair" - Fecha a aplica��o
//Em cada compra realizada o pre�o m�dio ser� modificado, o mesmo n�o ocorre para a venda, onde apenas a quantidade ser� modificada.

//Sua solu��o deve contemplar os seguintes requisitos:

//Uso de Struct
//Uso de Fun��es e Procedures
//Uso de Recursividade (Implemente a busca bin�ria para a consulta dos ativos)

#include <stdio.h>
#include <stlib.h>

struct Ticket{
 char Vetor[6];
 int QuantidadeComprada;
 int Total;
 int Vendas;
 int Carteira;
}
