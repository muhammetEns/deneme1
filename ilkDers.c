#include<stdio.h>
#include<stdbool.h>
typedef struct{

	int yas ;
	char *isim ;
	bool yasiyormu ;

	int toplama(int a , int b){
		
		return a + b ;
	};


} insan;


int main (){
	

	insan enes ;
	
	enes.yas = 20 ;
	enes.yasiyormu = true ;
	enes.isim ="muhammet enes aydin" ;
	
	printf("%s\n",enes.isim) ;
	printf("%i \n",enes.yas) ;
	if(enes.yasiyormu==1){
		printf("yasiyor") ;
	}else{
		printf("olu") ;
	}
	
	
	printf("%i"  , enes.toplama(67,32)) ;
	
	

	return 0 ;
}
