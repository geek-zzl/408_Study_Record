#include <stdio.h>    

struct person    
{    
    char    *name;    
    char     gender;    
    int      age;    
    int      weight;    
    struct  
    {    
        int  area_code;    
        long phone_number;    
    };   
};    

int main(void)    
{  
    struct person jim = {"jim", 'F', 28, 65, {21, 58545566}};  
    printf("%d\n", jim.area_code);       
}   