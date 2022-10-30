#include <stdio.h>
#include <time.h>

/*
// Struct interna da lib time.h
// struct tm                                                                                                
// {                                                                                                   
//     int tm_sec;           /* Seconds. [0-60] (1 leap second) */      
//     int tm_min;           /* Minutes. [0-59] */                            
//     int tm_hour;          /* Hours.   [0-23] */                       
//     int tm_mday;          /* Day.     [1-31] */             
//     int tm_mon;           /* Month.   [0-11] */                
//     int tm_year;          /* Year - 1900.  */                       
//     int tm_wday;          /* Day of week. [0-6] */                 
//     int tm_yday;          /* Days in year.[0-365] */                        
//     int tm_isdst;         /* DST.     [-1/0/1]*/         
// };


int main(){

    struct tm *atual;

    // Assim conseguimos armazenar o tempo em segundos
    time_t segundos;
    time(&segundos);

    // Dessa maneira convertemos o tempo de segundos para o tempo local
    atual = localtime(&segundos);


    int dia = atual->tm_mday;
    int mes = (atual->tm_mon) + 1 ;
    /* A contagem dos meses começa por 0, 
    por isso o +1*/
    int ano = (atual->tm_year)+1900;
    /* A contagem de anos começa a partir do ano 1900
    por isso é necessária a soma */
    
    printf("\n%d/%d/%d\n",dia,mes,ano);

    return 0;
}