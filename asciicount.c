#include <stdio.h>

int main(){
    int c_whspace,c_other,c,i;
    int c_digits[10];
    
    printf("v2");
     for(i=0;i<10;++i)
       c_digits[i]=0;
         
    while((c=getchar())!=EOF){
	if(c>='0' && c<='9')
	    ++c_digits[c-'0'];
	else if(c==' ' || c=='\n' || c=='t')
	    ++c_whspace;
	else
	    ++c_other;

    }
    printf("digits = ");
    for(i=0;i<10;++i)
	printf("%d",c_digits[i]);
    printf("whitespaces = %d other characters = %d\n ",c_whspace,c_other);
    return 0;
}
