#include<iostream.h>
#include<string.h>
int _atoi(char *str)
{
	int data, result, output,Base;
    data=1; result=0; Base=strlen(str);
    while (Base>= 1)
    {
        Base--;
        output=toascii(str[Base])-48;
        output=output*data;
        result= result+output;
        data=data*10;
    }
 return result;
}
