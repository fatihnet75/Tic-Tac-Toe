#include <stdio.h>
#include <stdlib.h>


int main() {
	//OYUNUMDA ALTTAKÝ b DEÐÝÞKENÝNÝ BÝR BÝR ARTTIRDIÐI ÝÇÝN ÝLK EL 1. OLAN 2. EL SON OLUYOR
    char Q,W,E,R,T,Y,U,I,O,oyuncu1[15],oyuncu2[15];
	int a,b=1,c,x=0,y=0;
    //BU BÖLÜMDE OTUNCU ÝSÝMLERÝNÝ ÝSTEDDÝM VE HANGÝ KARAKTERLE OYNAYACAKLARINI ANLIYORLAR
	printf("Birinci oyuncunun ismini giriniz(x):\n");
	scanf("%s",&oyuncu1);
	
	printf("Ikinci oyuncunun ismini giriniz(o):\n");
	scanf("%s",&oyuncu2);
 do{ //BU BÖLÜMDE CHAR DEÐÝÞKENLERÝNÝN HER BÝRÝNE DEÐER ATAYAYAK HEM TABLODAKÝ SAYILARIN SEÇÝMÝNE HEMDE KOLAYLIK SASÐLASIN DÝYE 
	Q='1';
	W='2';
	E='3';
	R='4';
	T='5';
	Y='6';
	U='7';
	I='8';
	O='9';

	for(b;b==b;b++)
  {//BU BÖLÜMDE TABLOMU OLUÞTURARAK ÝKÝNCÝ DÖNGÜNÜN ÝÇÝNDE ALDIM  B DEÐÝÞKENÝ HER ARTTIKCA YANÝ YENÝSAYI ÝSTEYÝNCE OYUN TABLO GÖZÜKÜCEK
 printf("\t\t\t %c | %c | %c \n",Q,W,E); 
 printf("\t\t\t-----------\n"); 
 printf("\t\t\t %c | %c | %c \n",R,T,Y); 
 printf("\t\t\t-----------\n"); 
 printf("\t\t\t %c | %c | %c \n\n",U,I,O); 
 //BU BÖLÜMDE ÝSESIRASI GELEN OYUNCUYU SEÇMESÝNÝ ÝSTEDÝM EÐER SIFIR GÝRERSE HATA ALMASINIDA YÝNE BURADA SÖYLEDÝM
  if(b%2!=0)
   printf("%s Isimli oyuncunun sirasi (x) \n",oyuncu1);
  else
    printf("%s isimli oyuncunun sirasi(o)\n \n",oyuncu2);
    printf("DIKKAT SADECE RAKAM GIRINIZ\n\n");
   	printf("Secmek istediginiz kutu numarasini giriniz: ");
   scanf("%d",&a);
   if(a==0) { 
   printf("\n\n Yanlis sayi girdiniz lutfen yeniden baslayiniz\n\n");
    break;//SWÝTCH CASE BÖLÜMÜNDE KARARLERÝN ÝÇÝNE KARAKTER YAZDIRMASINI HANGÝ KARAKTERE YAZACAÐINI VS GÝBÝ ÞEYLER ÝSTEDÝM
           }
		switch(a)
   {
	 	case 1: 
	     if(Q=='1')
	     {
		   
		     if(b%2!=0)
	     	 Q='X';
	     	 else
	     	 Q='O';
	     }
	     else
	 	{
	     	printf("yeniden deneyiniz");
	 	    b=b-1;
	 	}
	 	break;
	 	case 2:	
	     if(W=='2')
	   	{
	 	        if(b%2!=0)
	         	W='X';
	         	else
	        	W='O';
	     }
	     else
	   	{
	     	printf("yanlis");
	     	b=b-1;
	    }
		break;
		case 3:
	     if(E=='3')
		 {
		         if(b%2!=0)
	         	E='X';
	         	else
	             E='O';
	     }
	       else
	     {
	     	printf("yanlis");
		     b=b-1;
	     }
		break;
		case 4:
		 if(R=='4')
	   	{
	 	        if(b%2!=0)
	     	    R='X';
	         	else
	         	R='O';
	     }
 	    else
		{
	     	printf("yanlis");
		     b=b-1;
	   	 }
		break;
		case 5:
	     if(T=='5')
	   	{
		         if(b%2!=0)
	          	T='X';
	         	else
	         	T='O';
	     }
 	    else
	     {
	     	printf("yanlis");
		     b=b-1;
 	    }
 		break;
 		case 6:
		 if(Y=='6')
 	    {
		         if(b%2!=0)
	         	Y='X';
	         	else
	         	Y='O';
         }
	         else
 		{
	       	printf("yanlis");
		     b=b-1;
     	}
 		break;
 		case 7:
		 if(U=='7')
	   	{ 
		         if(b%2!=0)
	         	U='X';
	         	else
	         	U='O';
         }
	     else
 	    {
	       	printf("yanlis");
		     b=b-1;
 	    }
		break;	
		case 8:
		 if(I=='8')
	   	{
		   
		         if(b%2!=0)
	         	I='X';
	         	else
	         	I='O';
 	    }
	     else
 	    {
	       	printf("yanlis");
		     b=b-1;
 	    }
	 	break;
	 	case 9:
	 	 if(O=='9')
 	    {
		         if(b%2!=0)
	         	O='X';
	         	else
	         	O='O';
 	    }
	      else
 	    {
	     	printf("yanlis");
		      b=b-1;
		     break;
 	    }	//AYNI ZAMANDA BU BÖLÜMDE KULLANDIÐIM B=B-1 YANLIS BÝR SAYIYI GÝRDÝÐÝNDE SIRANINI YÝNE SANA GELMESÝNÝ SAÐLIYOR
   }
		system("cls");	
		   //KAZANMA ÞARTLARINI AÞÞAÐIDA BELÝRTTÝM  ERABERLÝK ÞARTINIDA EN AÞÞAÐIYA BIRAKTIM
	if(Q=='X'&& W=='X' && E=='X' || R=='X'&& T=='X' && Y=='X' || U=='X'&& I=='X' && O=='X' || Q=='X'&& T=='X' && O=='X' || E=='X'&& T=='X' && U=='X'|| Q=='X'&& R=='X' && U=='X' || E=='X'&& Y=='X' && O=='X' || W=='X'&& T=='X' && I=='X' ) 
	{
		printf("KAZANAN:%s\n",oyuncu1);
		x++;
		break;
	}
		else if(Q=='O'&& W=='O' && E=='O' || R=='O'&& T=='O' && Y=='O' || U=='O'&& I=='O' && O=='O' || Q=='O'&& T=='O' && O=='O' || E=='O'&& T=='O' && U=='O'|| Q=='O'&& R=='O' && U=='O' || E=='O'&& Y=='O' && O=='O' || W=='O'&& T=='O' && I=='O' ) 
	{
		printf("KAZANAN :%s\n",oyuncu2);
		y++;
		break;
	}
	else if(Q!='1' && W!='2' && E!='3'&& R!='4'&& T!='5'&& Y!='6'&& U!='7' && I!='8'&& O!='9'){
	 printf("Beraberlik:\n");
	break;
    } //OYUNU UZU  SÜRE OYNANIRSA DÝYE OYUNUN ÝÇÝNE VE SONUNA SKOR BORD EKLEDÝM
    	printf("\t\t\tSKOR BOARD\n");
    	printf("\t\t ___________________________________\n");
		printf("\t\t| %s(x)=%d          | %s(o)=%d        |\n",oyuncu1,x,oyuncu2,y);
		printf("\t\t-----------------------------------\n");
		
  }     
    printf("Son sonuc\n");
    printf("%s=%d\n",oyuncu1,x);
    printf("%s=%d\n",oyuncu2,y);
    //OYUN OYNANMAK ÝSTEDÝÐÝ SÜRECE OYNANABÝLÝR DURUMA GETÝRDÝM 
	printf("Tekrar baslatmak icin 1 e bas :istemiyorsaniz her hangi bir sayiya basiniz eyer baslarsaniz gecen el ilk baslayan simdi son baslar\n");
	scanf("%d",&c);
	b++;
 }
while(c==1);
	return 0;
}
