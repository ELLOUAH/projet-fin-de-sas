#include <stdio.h>
#include <stdlib.h>

void icb(){
	char CIN[20];
	char nom_et_prenom[50];
	float montant;
	printf("introduir un compt bancair\n");
	printf ("quelle est votre CIN\n :  ");
	scanf("%s",&CIN);
	printf("quelle est votre nom et prenom\n");
	scanf("%s",nom_et_prenom);
	printf("quelle est votre mantant\n");
	scanf("%f",&montant);
}

void ipcb(){
char CIN[20];
char nom_et_prenom[50];
float montant;
	
	printf("introduir  plusieurs comptes bancaires \n");
	printf ("quelle est votre CIN\n :  ");
	scanf("%S",&CIN);
	printf("quelle est votre nom et prenom\n");
	scanf("%s",nom_et_prenom);
	printf("quelle est votre mantant\n");
	scanf("%f",&montant);
}
void operation(){
	float retrait;
	float depot;
	printf("operation \n");
	printf("retrait \n");
	scanf("%f",&retrait);
	printf("depot");
	scanf("%f",&depot);
}	

void affichag(){
	
	
	
	
	
	
}
int main() 
{   

int choix;
int ex = 1;
	printf("welcome to the banc management\n\n\n");
	
	printf("      1: introduir un compte bancair\n");
	
	printf("      2: introduire plusieur compte\n");
	
	printf("      3: operation\n");
	
	printf("      4: afichage\n");
	
	printf("      5: fidelisation\n");
	
	printf("      0: quitter lapplication");
	
	printf("inserer votre choix (ex:0 pour quitter):  ");
	
	
	scanf("%d",&choix);
	
	switch (choix) {
		
		
		case 1 :{
				icb();
		} break;
		icb();
		
		case 2 :
		ipcb();
		case 3 :
		operation();
		case 4:
		affichag();	
				
	}
	
	
	
	return 0;
	
}
