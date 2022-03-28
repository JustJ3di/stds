#include"std.h"





string init(string str,int len){

	if (len == -1)len = mystrlen(str);


	Std *new = malloc(sizeof(Std)+ len + 1);

	assert(new!=NULL);

	
	new->size = len;

	
	
	for (int i = 0; i < len+1  ; ++i)
	{	

		new->str[i] = str[i];
	
	}


	return new->str;

}




void upper(string str){


    for (size_t i = 0; i < stdlen(str)+1; i++)
    {
        
        if (str[i] >= 97 && str[i] <= 122)
        {
        
            str[i] = str[i] - 32;   
        
        }
        
    }


}



void lower(string str){


    for (size_t i = 0; i < stdlen(str)+1; i++)
    {
        
        if (str[i] >= 65 && str[i] <= 90)
        {

            str[i] = str[i] + 32;   
        
        }
        
    }


}




int str_char(string src,char token){

    for (size_t i = 0; i < ((Std*)src-1)->size; i++)
    {
        if (src[i] == token )
        {
            return i;
        }
        
    }
    return -1;

}


void println(string str){

	printf("%s\n",str);

}




unsigned int stdlen(const string str){

	return ((Std *)str-1)->size;

}