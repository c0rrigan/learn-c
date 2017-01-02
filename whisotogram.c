#include <stdio.h>
int main(){
    /* wc -> word count
     * sc -> space count
     *
     */
    int c,wc,sc,i;
    int w_count[20];
    wc = sc = 0;
    for(i=0;i<20;++i)
	w_count[i]=0;
    i=0;
    while((c=getchar()) !=EOF){
	if(c == ' '|| c == '\t' || c == '\n'){
	    w_count[i]=wc;
	    wc = 0;
	    ++i;
	}else{
	    ++wc;
	}
    }
    for(i=0;i<20;++i){
	if(w_count[i]!=0){
	    int j;
	    printf("%d",w_count[i]);
	    for(j=0;j<w_count[i];++j)
		putchar('|');
	    putchar('\n');
	}
    }
    return 0;
}
