#include <stdio.h>
#include <iostream>
#include <string.h>
#include <conio.h>

int sms,n,i,sms_1;
int tot_sms,thn,y;

main(){
    printf("Lama Pemakaian : "); scanf("%d", &y);
    printf("Hari Terakhir : "); scanf("%d", &n);
    printf("Jumlah SMS : "); scanf("%d", &sms_1);
    
    if(y<=3){
		if(y==1){
			thn=20;
		}
      	if(y==2){
      		thn=35;
		}
      	if(y==3){
		  	thn=60;
		}
	}else{
        thn=100;
	}

    tot_sms=0;

    for(i=2; i<=n; i++){
        printf(" ", i); scanf("%d", &sms);
        tot_sms=tot_sms+sms;
    }

    tot_sms=tot_sms+sms_1;
    thn=thn-tot_sms;

    printf("Sisa Bonus SMS : %d", thn);

    getch();
}
