#コンパイラ
GPP=g++
ARGS="-Wall -Wextra -std=c++17 -O3"

#コンパイル
if [ -f a.out ]; then
    rm a.out
fi
echo "build: ${GPP} ${1} ${ARGS}"
${GPP} ${1} ${ARGS}