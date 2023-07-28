int romanToInt(char * s){
int size = 0 ; 
int i = 0 ; 
while (s [i] !='\0')
{
    switch(s[i])
    {
        case 'I' :  
        switch(s[i+1])
        {
            case 'V' :  size +=4 ; i+=2;        break;
            case 'X' :  size +=9 ;  i+=2;       break;
            default : size +=1;      i++;
        }
        break;
        case 'X': 
        switch(s[i+1])
        {
            case 'L': size+=40; i+=2; break;
            case 'C': size+=90; i+=2; break;
            default : size+=10; i++;  break;
        }  
        break;
        case 'C' :      
        switch(s[i+1])
        {
            case 'D': size+= 400 ; i+=2;                   break;
            case 'M': size+=900;   i+=2;                   break;
            default : size+=100;   i++;                    break;
        }
        break;
        case 'M':size+=1000; i++;                      break;
        case 'D':size+=500; i++;                      break;
        case 'V':size+=5; i++;                      break;
        case 'L':size+=50; i++;                      break;
        default : 
                size = -1 ; break;
    }
}
if (size > 3999 || size < 1 || size == -1 )
{
    return false ; 
}
else {
    return size ; 
}
}