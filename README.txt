Analizador Léxico PHP
Si se desea correr el analizador, primero se deben compilar los archivos lex (.l) y yacc (.y) si no fueron previamente compilados y despues se crea el ejecutable. Estas son las lineas de comando que se deben ejecutar independientemente:

	lex lexicalAnalyzer.l
	yacc -d lexicalAnalyzer.y
	gcc -Wall -o miniPHP y.tab.c lex.yy.c

Nota: Se debe ubicar en la carpeta donde estan los archivos, de lo contrario deben indicarse las direcciones en los comandos.
-----------------------------------------------------------------------------------------------------------------------------------------------
Para correr el ejecutable, se ejecuta la siguiente linea junto con el nombre del archivo:

	./miniPHP archivo.php

-----------------------------------------------------------------------------------------------------------------------------------------------
Si el formato esta correcto se desplegara:

	"Analisis concluded. The file does belongs to the PHP Lenguage."

Y se creara el archivo con las correciones respectivas.

-----------------------------------------------------------------------------------------------------------------------------------------------
De lo contrario se desplegaran los errores en consola y se creara el archivo "errors.out" con los comentarios.



Creo que el programa funciona correctamente porque se realizaron exhaustivas pruebas, a su vez es robusto porque cumple con todos los requerimientos solicitados en el enunciado. 
Los errores son manejados con la linea proveida por lex ".{return yytext[0];}" el cual recibe todos los caracteres invalidos, a su vez bison en el archivo yacc maneja el "Error Recovery" el cual al momento de encontrar un error retoma la revision desde donde habia terminado para encontrar demas errores en el archivo, por ultimo al momento de encontrar un error es llamado yyerror() el cual imprime los errores en consola y crea el archivo con ellos.
