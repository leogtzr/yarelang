#!/usr/bin/env bash
_bold=$(tput bold);
_reset=$(tput sgr0);
txtbld=$(tput bold)             # Bold
_red=${txtbld}$(tput setaf 1) #  red
_blue=${txtbld}$(tput setaf 4); #  blue
yacc -d ./sintactico.y || {
	echo -e "\n${_red}yacc Error${_reset}";
	exit 1;
}

lex ./lexico.l &> /dev/null || {
	echo -e "\a\n${_red}lex Error${_reset}";
	exit 1;
}

gcc lex.yy.c y.tab.c interprete.c -o yare -lm -lgmp && {
	echo -e "\n${_blue}yare binary generated in '$PWD'${_reset}\n";
	exit 0;
}
