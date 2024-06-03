#include<stdio.h>
#include"utils.h"
char Hstr = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char Hex2Char(int i){
if(i >= 0 && i <= 9){
return i + 0x30;
// return i + '0'
}
if(i >= 10 && i <= 15){
return i + 0x37;
// return i + 'A' - 10
}
return 0;
}

/*
int Hex2Char(int fromi,char *toc)
{
    if(fromi>=0&&fromi<=9)
    {
            *toc= fromi+'0';
    }
    else if(fromi>=10&&fromi<=15)
    {
            *toc = fromi+'A'-10;
    }
    else
    {
        printf("error");
     }
    return 0;
}
int Char2Hex(char fromc,int *toi)
{
        if(fromc>='0'&& fromc<='9')
        {
             *toi= fromc-'0';
        }
        else if(fromc>='A'&& fromc<='F')
        {
             *toi= fromc-'A'+10;

        }
        else
        {
            printf("error");
        }
        return 0;
}
*/
