#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPalindrome(int x){
 int reversed =0 ; 
 
    int number  = x ; 
    int rem = 0 ; 
    if ( x < 0 )
    {
        return false ; 
    } 
while (number  != 0 )
{
    rem = number %10 ; 
    reversed = reversed *10 + rem ;
    number = number / 10  ;  
}
if (reversed == x )
{
    
    return true ; 
}
else 
{
    return false ;
}


}
