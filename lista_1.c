#include<stdio.h> //biblioteca principal

void main (){ // função principal
//questao 1

    //int Idade, Ano, Nasc, Id2034; //declara variaveis do tipo inteiro

    //printf("Em que ano estamos?\n"); //imprime a frase
    //scanf("%d",&Ano); // ler a variavel

    //printf("\nQual e a sua idade?\n"); //imprime a frase
    //scanf("%d",&Idade); // ler a variavel

    //Nasc = Ano - Idade ; // atribue a variavel o calculo

    //printf("\nVoce nasceu em %d\n", Nasc); //imprime a frase

    //Id2034 = 2034 - Nasc ; // atribue a variavel o calculo
    //printf("\nEm 2034 voce tera %d anos \n", Id2034); //imprime a frase

//questão 2

    //int ws,pC,pP,wt,tF,tI,vM; // ler as variaveis inteiras

    //printf("Insira abaixo o ponto de chegada\n");
    //scanf("%d",&pC);

    //printf("\nInsira abaixo o ponto de partida\n");
    //scanf("%d",&pP);

    //printf("\nInsira agora o tempo inicial\n");
    //scanf("%d",&tI);

    //printf("\nInsira agora o tempo final\n");
    //scanf("%d",&tF);

    //ws = pC - pP ;
    //wt = tF - tI ;
    //vM = ws/wt ;

    //printf("\nA velocidade media e: %d", vM);

//questão 3

    //float valorP,valorA,valorF,vV;

    //printf("Digite o valor da prestacao em atraso\n");
    //scanf("%f",&valorP);

    //valorA = valorP*1.15;
    //valorF = valorA*0.85;

    //printf("O valor a ser pago e: %f\n", valorF);

    //vV = valorP - valorF ;

    //printf("O comerciante teve um prejuizo de: %f", vV);

//questao 4

    //float c,l,di,pr,custo;

    //printf("Escreva o comprimento do terreno");
    //scanf("%f",&c);

    //printf("Escreva a largura do terreno");
    //scanf("%f",&l);

    //di = (2*c)+(2*l);

    //printf("Insira o preco do metro de cerca de arame");
    //scanf("%f",&pr);

    //custo = pr*di;

    //printf("O custo dessa brincadeira foi a minha sanidade %f", custo);

//questão 5

    //float valorD,valorCE,valorTT;

    //printf("Qual e o valor da diaria?\n");
    //scanf("%f", &valorD);

    //printf("Qual e o valor da cotacao do euro?\n");
    //scanf("%f", &valorCE);

    //valorTT = 10*valorD*valorCE;

    //printf("O valor total da viagem e: %f", valorTT);

//questao 6

    //int bin, dec = 0, i;

    //printf("\nInsira um numero binario: ");
    //scanf("%d", &bin);

    // 'for' e uma maneira de fazer repetições (loops) aq eu mandei repetir ate o num binario
    // for maior que 0 porque quando isso acontecer o num decimal vai ser achado
    // for(inicialização; condição; atualização)
    //for(i = 0; bin > 0; i++)
    //{
        //dec = dec + pow(2, i) * (bin % 10);
        //bin = bin / 10;
    //}
    //printf("\nO numero decimal equivalente e: %d\n", dec);

// Questao 7

     //char nome[100], discp[100];
     //float n1,n2,n3,mA;
     //float pA,eD,mP;

     //printf("Digite o seu nome\n");
     //scanf("%s",&nome);

     //printf("Digite a disciplina\n");
     //scanf("%s",&discp);

     //printf("Insira a nota da 1 avaliação\n");
     //scanf("%f",&n1);

     //printf("Insira a nota da 2 avaliação\n");
     //scanf("%f",&n2);

     //printf("Insira a nota da 3 avaliação\n");
     //scanf("%f",&n3);

     //mA = (n1+n2+n3)/3 ;

     //printf("Qual foi a sua nota no provao?\n");
     //scanf("%f",&pA);

     //printf("Qual foi a sua nota no estudo dirigido?\n");
     //scanf("%f",&eD);

     //mP = (mA*0.2)+(eD*0.2)+(pA*0.6) ;

     //printf("Na disciplina %s o/a aluno/a %s teve %f como media final \n", discp ,nome ,mP);

//questao 8

     //int votosC1, votosC2, votosC3, nulos, brancos, totalE, A;

     //printf("Insira os votos do candidato A\n");
     //scanf("%d", &votosC1);

     //printf("Insira os votos do candidato B\n");
     //scanf("%d", &votosC2);

     //printf("Insira os votos do candidato C\n");
     //scanf("%d", &votosC3);

     //printf("Insira os votos nulos\n");
     //scanf("%d", &nulos);

     //printf("Insira os votos brancos\n");
     //scanf("%d", &brancos);

     //totalE = votosC1 + votosC2 + votosC3 + nulos + brancos ;

     //printf("\no total de eleitores foi: %d\n", totalE);
     //A = totalE / votosC1;
     //printf("o percentual de votos do candidato A e: %d %%\n", A);
     //printf("o percentual de votos do candidato B e: %d %%\n", totalE / votosC2);
     //printf("o percentual de votos do candidato C e: %d %%\n", totalE / votosC3);
     //printf("o percentual de votos nulos e: %d %%\n", totalE / nulos);
     //printf("o percentual de votos brancos e: %d %%\n", totalE / brancos);

//questao 9
     //float custoT,precoI;
     //int vendasX;

     //printf("Insira o custo total do espetaculo\n");
     //scanf("%f", &custoT);

     //printf("Insira o preço do ingresso\n");
     //scanf("%f", &precoI);

     //vendasX = custoT / precoI ;

     //printf("Devem ser vendidos %d ingressos", vendasX);

//questao 10
     //int km,vI,vF,L,precoG,slA;

     //printf("Qual e a quantidade de quilometros que o seu carro faz um litro de gasolina\n");
     //scanf("%d",&km);

     //printf("Qual e o valor inicial do hodometro?\n");
     //scanf("%d",&vI);

     //printf("Qual e o valor final do hodometro?\n");
     //scanf("%d",&vF);

     //L = (vF - vI) / km ;

     //printf("Qual e o preço da gasolina?\n");
     //scanf("%d",&precoG);

     //printf("A quantidade de litros utilizados no percuso foi: %d\n", L);

     //printf("O prejuizo foi de: %d\n", L * precoG);

//Questao 11

    //float salario2023,salario2024, reajuste;

    //printf("Insira o salario minimo de 2023\n");
    //scanf("%f", &salario2023);

    //reajuste = 697 / 100 ;
    //salario2024 = salario2023 * (reajuste / 100) + salario2023 ;
    //printf("%f", salario2024);

//Questao 12

    //float vA,vB,vC,valor,A,a1,a2,a3;
    //printf("Quais foram os valores que cada amigo contribuiu\n");
    //scanf("%f %f %f", &vA ,&vB ,&vC);

    //printf("Insira o valor do premio\n");
    //scanf("%f", &valor);

    //A = valor / (vA+vB+vC);
    //a1 = A*vA;
    //a2 = A*vB;
    //a3 = A*vC;

    //printf("O 1 vai receber: %f\n",a1);
    //printf("O 2 vai receber: %f\n",a2);
    //printf("O 3 vai receber: %f\n",a3);

//Questao 13

    //int seg,min,hr,dia;

    //printf("Qual foi o tempo em segundos\n");
    //scanf("%d",&seg);

    //min = seg / 60;
    //hr = min / 60 ;
    //dia = hr / 24 ;

    //printf("%d dias %d horas %d minutos", dia, hr, min);

//Questao 14

    //char data[9];
    //printf("Digite a data em DDMMAAAA: \n");
    //scanf("%s", data);

    //char dia[3]; strncpy(dia, data, 2); dia[2] = '\0';
    //char mes[3]; strncpy(mes, data + 2, 2); mes[2] = '\0';
    //char ano[5]; strncpy(ano, data + 4, 4); ano[4] = '\0';
    //printf("A data em AAAAMMDD e %s%s%s\n", ano, mes, dia);

//questao 15

    //int n1,n2,n3,a,b,c,d,e,f,g;

    //printf("Insira os 3 digitos :\n");
    //scanf("%d %d %d",&n1,&n2,&n3);

    //a = (n1*100)+(n2*10)+n3 ;
    //b = (n3*100)+(n2*10)+n1 ;
    //c = a + b ;
    //printf("Soma:%d \n",c);

    //d = n1 *1;
    //e = n2 *2;
    //f = n3 *3;
    //g = d+e+f;
    //printf("digito verificador da conta:%d \n",g%10);
}
