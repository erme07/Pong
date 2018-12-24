#include<stdio.h>

#define ancho 75     //dimensiones del campo
#define alto 21



void inicio(char campo[alto][ancho],int inicio_p, int fin_p, int inicio_m, int fin_m, int pelota_x, int pelota_y);    
void margen(char campo[alto][ancho]);
void paleta(char campo[alto][ancho],int inicio_p, int fin_p);
void maquina(char campo[alto][ancho],int inicio_m, int fin_m);
void pelota(char campo[alto][ancho],int pelota_x, int pelota_y);
void imprimir(char campo[alto][ancho]);

int main(){
	
	int inicio_p, fin_p, inicio_m, fin_m, pelota_x, pelota_y;
	
	char campo[alto][ancho];
	
	inicio_p = 8;
	fin_p = 13;
	inicio_m = 5;
	fin_m = 16;
	pelota_x = 35;
	pelota_y = 10;
	
	inicio(campo,inicio_p,fin_p,inicio_m,fin_m,pelota_x, pelota_y);
	
	return 0;
}

void inicio(char campo[alto][ancho],int inicio_p, int fin_p,int inicio_m, int fin_m, int pelota_x, int pelota_y){
	
	margen(campo);
	paleta(campo,inicio_p,fin_p);
	maquina(campo,inicio_m,fin_m);
	pelota(campo,pelota_x,pelota_y);
	imprimir(campo);
	
	
}

void margen(char campo[alto][ancho]){
	
	int i,j;
	
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			
			if(i==0||i==alto-1){
			campo[i][j]='-';
			
		}
		else if(j==0||j==ancho-1){
			campo[i][j]='|';
		}
		else{
			campo[i][j]=' ';
		}
		}
		
	}
}

void paleta(char campo[alto][ancho],int inicio_p, int fin_p){
	
	int i;
	
	for(i=inicio_p;i<fin_p;i++){
		campo[i][2]='X';
		campo[i][3]='X';
	}
}

void maquina(char campo[alto][ancho],int inicio_m, int fin_m){
	
	int i;
	
	for(i=inicio_m;i<fin_m;i++){
		campo[i][72]='X';
		campo[i][71]='X';
	}
}

void pelota(char campo[alto][ancho],int pelota_x, int pelota_y){
	
	campo[pelota_y][pelota_x] = 'O';
}

void imprimir(char campo[alto][ancho]){
	
	int i,j;
	
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			
			printf("%c",campo[i][j]);
		}
		printf("\n");
	}
}

