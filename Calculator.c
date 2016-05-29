#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void mgotoxy(int x, int y){
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}


void tela(){ //funcao de impressao do quadrado
	
	int x;
	for(x=8;x<16;x++){ 
	mgotoxy(27,x); //vertical esquerda
 	printf("%c",219);
	
	}
 
 	for(x=8;x<16;x++){
 	mgotoxy(50,x); //vertical direita
 	printf("%c",219);
 	
	}
 
 	for(x=28;x<50;x++){
 	mgotoxy(x,8); //horizontal superior
 	printf("%c",219);
 	
	}
 	
 	for(x=28;x<50;x++){
 	mgotoxy(x,15); //horizontal inferior
 	printf("%c",219);
 	
	}
 
}

int main(){
	
	int x, y;
	
	double num1, num2, num3;
	char letra;
	
	mgotoxy(34,9);
	printf("CALCULATOR\n\n");
	
	tela();
	mgotoxy(30,12);
	scanf("%lf", &num1);
	
	do{
	
		
	
	
		mgotoxy(33,13);
		scanf("%s %lf", &letra, &num2);
		//scanf("%c", &letra);
		//scanf("%d", &num2);
		system("CLS");
		
		
		if(letra == 's'){  //da o comando para sair
			
			return 0;
		}
	
		if(letra == '+'){ //soma
		
			num1 = num1 + num2;
			mgotoxy(34,9);
			printf("CALCULATOR\n\n");
			tela();
			mgotoxy(34,12);
			printf("%lf", num1);
		}
	
	
		if(letra == '-'){  //subtracao
		
			num1 = num1 - num2;
			mgotoxy(34,9);
			printf("CALCULATOR\n\n");
			tela();
			mgotoxy(34,12);
			printf("%lf", num1);
		}
		
		if(letra == '*'){  //multiplicacao
		
			num1 = num1 * num2;
			mgotoxy(34,9);
			printf("CALCULATOR\n\n");
			tela();
			mgotoxy(34,12);
			printf("%lf", num1);
		}
		
		if(letra == '/'){  //divisao
		
			num1 = num1 / num2;
			mgotoxy(34,9);
			printf("CALCULATOR\n\n");
			tela();
			mgotoxy(34,12);
			printf("%lf", num1);
		}
	
	
	getch();
	system("CLS");
	main();
	
	}while(letra != 's');	
		
	
	
	
	return 0;
}
