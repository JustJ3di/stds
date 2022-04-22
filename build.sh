FLAGS="-Wall -Wextra"

gcc -g -c -o src.o src/std.c  $FLAGS
gcc -g -c -o test.o example.c $FLAGS
gcc -o test test.o src.o  $FLAGS