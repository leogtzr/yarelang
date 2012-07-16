#!/usr/bin/env bash

yacc -d ./sintactico.y || {
	echo -e "\nyacc Error";
	exit 1;
}

lex ./lexico.l || {
	echo -e "\nlex Error";
	exit 1;
}

gcc lex.yy.c y.tab.c interprete.c -o yare -lm && echo -e "Done! :)"
