#!/bin/bash

SH_DIR=$(cd $(dirname $0); pwd)

#パス取得
SUP=`dirname ${1}`
#hoge.cpp -> hoge
SUB=`basename ${1} .cpp`
#サンプル格納用ディレクトリ
DIR=${SUP}/${SUB}

#コードからURL取得
HEAD=`head -n 1 < $1`
#先頭が//で始まらないならexit
PR=`echo ${HEAD} | cut -c-2`
URL=`echo ${HEAD} | cut -c3-`
if [ "${PR}" != "//" ]; then
    echo "ERROR: Header is invalid"
    exit 1
fi

${SH_DIR}/build.sh ${1}
if [ -f a.out ]; then
    rm a.out
    echo "submition to ${URL}"
    oj submit ${URL} ${1}
    echo "...done"
fi


