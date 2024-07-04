#include <stdio.h> //inclue a biblioteca principal
#include <math.h> //Na biblioteca <math.h> estão contidas diversas funções matemáticas básicas

void main(){
// Questao 1
   /*int valorS,notas100,notas50,notas20,notas10,resto;

   printf("  Quanto voce quer sacar?\n");
   printf("**Limite=1000 e apenas valores terminados em 0**\n");
   scanf("%d",&valorS);

   notas100 = valorS / 100 ;
   resto = valorS%100;

   notas50 = resto/50;
   resto = resto%50;

   notas20 = resto/20;
   resto = resto%20;

   notas10 = resto ;

   printf("notas de 100 = %d ; notas de 50 = %d ; notas de 20 = %d ; notas de 10 = %d", notas100, notas50, notas20, notas10 );
   */

// Questao 2
   /*char a;
   int b,c;

   printf("Insira dois numeros\n");
   scanf("%d %d",&b,&c);

   printf("Escolha qual operacao fazer\n");
   printf("A -adicao,S - subtracao,M - multiplicacao,D - divisao\n");
   scanf("%s",&a);

   switch(a){
   case 'A': printf("%d + %d = %d",b,c,b+c);
             break;
   case 'S': printf("%d - %d = %d",b,c,b-c);
             break;
   case 'M': printf("%d * %d = %d",b,c,b*c);
             break;
   case 'D': printf("%d / %d = %d",b,c,b/c);
             break;
   } */

// Questao 3
    /*int a,b,c,maioR;

    scanf("%d %d %d",&a,&b,&c);

    if( a>b){
        maioR =a ;
    } else {
        maioR =b;
    }
    if(c>maioR){
        maioR=c;
    }

    printf("%d",maioR);
    */

// questao 4
    /*

    int M,T,N,ma,ne,me;

    scanf("%d %d %d",&M,&T,&N);
    printf("\n");

    if(M>T && T>N){
        ma = M;
        ne = T;
        me = N;
    } else {
        if(M>T && N>T){
            ma = M;
            ne = N;
            me = T;
        }
    }

    if(T>M && M>N){
        ma = T;
        ne = M;
        me = N;
    } else {
        if(T>M && N>M){
            ma = T;
            ne = N;
            me = M;
        }
    }

    if(N>T && T>M){
        ma = N;
        ne = T;
        me = M;
    } else {
        if(N>M && M>T){
            ma = N;
            ne = M;
            me = T;
        }
    }


    printf("%d %d %d ",ma,ne,me);
    
    */

// questao 5
    /*
    int time1,time2;

    scanf("%d %d", &time1,&time2);

    if(time1 == time2){
        printf("empate");
    } else {
    if(time1 > time2){
        printf("time 1 ganhou");
    } else {
    printf("time 2 ganhou");
    }
    }
    */
// questao 6
    /*
    int num;
    scanf("%d",&num);
    if(num%2 ==0 ){
        printf("par");
    } else {
    printf("impar");
    }
    */
// questao 7
    /*
    int ano;

    scanf("%d",&ano);

    if(ano%4 == 0){
        printf("ano bissesto");
    } else {
    printf("ano nao bissesto");
    }
    */
// questao 8
    //
// questao 9
    //
// questao 10
    //
// questao 11
    //
// questao 12
    //
// questao 13
    //
// questao 14
    //
// questao 15
    //
// questao 16
    //
}
