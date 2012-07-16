#!/usr/bin/env bash
name=`date +"%F_%R:%S"`
rar a ${name}.rar *
mv -vi ${name}.rar $HOME/programming/respaldos


