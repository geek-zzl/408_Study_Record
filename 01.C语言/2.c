#include <stdio.h>    

struct phone  
{  
    int  area_code;  
    long phone_number;  
};  

struct person    
{    
    char        *name;    
    char         gender;    
    int          age;    
    int          weight;    
    struct phone office;  
};    

int main(void)    
{  
    struct person jim = {"jim", 'F', 28, 65, {21, 58545566}};  

    printf("%d\n", jim.office.area_code);       
}   