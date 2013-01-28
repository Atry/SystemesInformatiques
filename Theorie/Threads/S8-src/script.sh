#!/bin/bash
# script.sh
if [ $# -ne 1 ]
then
    echo "Usage: `basename $0` fichier"
    exit 1
fi
if [ -x ${1} ]
then
    head -1 $1 | grep "^#\!" >>/dev/null
    if [ $? ]
    then
	echo "Script interpr�table"
	exit 0
    else
	echo "Script non-interpr�table"
	exit 1
    fi
else
    echo "Bit x non mis dans les m�tadonn�es"
    exit 1
fi