#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    printf("TAS KAGIT MAKAS OYUNU\n\n");

    srand(time(NULL));
    int i=0, tahmin;

    while(i<10){
    printf("Lutfen tahmininiz giriniz(1.tas, 2.kagit, 3.makas):\n");
    scanf("%d",&tahmin);
    int bilgisayartahmini = (rand()%3)+1;

    if(tahmin == 1){
        if(bilgisayartahmini == 3)
        printf("kazandınız\n");
        else if(bilgisayartahmini == 2)
        printf("bilgisayar kazandi\n");
        else if(bilgisayartahmini == 1)
        printf("berabere\n");
    }
    else if(tahmin == 2){
        if(bilgisayartahmini == 3)
        printf("bilgisayar kazandi\n");
        else if(bilgisayartahmini == 1)
        printf("kazandiniz\n");
        else if(bilgisayartahmini == 2)
        printf("berabere\n");
    }
    else if(tahmin == 3){
        if(bilgisayartahmini == 1)
        printf("bilgisayar kazandi\n");
        else if(bilgisayartahmini == 2)
        printf("kazandiniz\n");
        else if(bilgisayartahmini == 3)
        printf("berabere\n");
    }
    else{
        printf("Kural disi!\n");
    }

    i++;

    }

    return 0;
}