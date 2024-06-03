#包括 公司;
 #包括 "utils.h"
char Hstr =     {    '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , 'A' , 'B' , 'C' , 'D' , 'E' , 'F'   } ;               {                  '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , 'A' , 'B' , 'C' , 'D' , 'E' , 'F'                 } ;
 六、二、六 ( 国际 )               [ 六价焦度 ( 我 )             {
 如果 ( 如果 ( I&MP;g;= 0 && i <= 9           )          {         0 && i <= 9        )       {
 返回的 返回的I+ 0x30 ; 0x30 ;
// return i + '0'
}
 如果 ( 如果 ( I&MP;g;= 10 && i <= 15      )     {    10 && i <= 15   )  {
 返回的 返回的I+ 0x37 ; 0x37 ;
// return i + 'A' - 10
}
 返回 0 ;0 ;
}

/*
六、六、二、六
{
    if(fromi>=0&&fromi<=9)
    {
            *toc= fromi+'0';
    }
    else if(fromi>=10&&fromi<=15)
    {
            *toc = fromi+'A'-10;
    }
    其他的
    {
        printf("error");
     }
    return 0;
}
(来自C,印度*托伊)
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
