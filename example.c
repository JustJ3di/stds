#include "src/std.h"

int main()
{
    string mystring = "coao";
    string st = init(mystring,-1);
    println(st);
    
    lower(st);
    println(st);
    
    upper(st);
    reverse(st);
    println(st);

    delstd(st);
    return 0;
}
