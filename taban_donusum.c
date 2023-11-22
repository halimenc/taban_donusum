#include<stdio.h>
#include <math.h>
int main(){
	
	int say,sis,toplam=0,i,bas,x,o,k;
    printf("lutfen donusturmek istediginiz sayiyi giriniz:");
    scanf("%d",&say);
    
    printf("lutfen kaclik sistemde oldugunu giriniz:");
    scanf("%d",&sis);
    
	k=say;
      
	   for (i=say, bas=1; 1; i--, bas++){
    	
		say = floor(say / 10);
    	
		if ( say==0 )
		{
			break;
		}
    
	}
	printf("%d basamakli\n", bas);
	
	for(o=bas-1; o>=0; o--){
		x = floor(k / pow (10,o));
		toplam += x * pow(sis,o);
		k %= (int)pow(10,(int)o);
		printf("x=%d\n",x);
	}
	
	printf("onluk sistemde = %d",toplam);
	
	return 0;
	}
