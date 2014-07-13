#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
UBUNTU: sudo apt-get install xdotool
UBUNTU: sudo apt-get install openssh-server
ANDROID: ConnectBot
*/

int main(void){


char s1[10];
int c;

printf("\n_____CONTROLE VIA SSH_______\n");

while(c < 10){
scanf("%s", s1);

	if(strcmp(s1,"+") == 0 || strcmp(s1,"aumentar") == 0)
	{		
		c = 0;
		printf("\nAUMENTOU - volume\n");
		system("export DISPLAY=':0.0'; xdotool key XF86AudioRaiseVolume");
	}

	else if(strcmp(s1,"-") == 0 || strcmp(s1,"baixar") == 0)
	{
		c = 0;
		printf("\nBAIXANDO - volume\n");
		system("export DISPLAY=':0.0'; xdotool key XF86AudioLowerVolume");	
	}

	else if(strcmp(s1,"=") == 0 || strcmp(s1,"pausar") == 0)
	{
		c = 0;
		printf("\nPAUSE =\n");
		system("export DISPLAY=':0.0'; xdotool key XF86AudioPlay");	
		printf("\nPAUSADO - calma, é somente o player!\n");
	}

	else if(strcmp(s1,">") == 0 || strcmp(s1,"proxima") == 0)
	{
		c = 0;
		printf("\nPróxima música! =\n");
		system("export DISPLAY=':0.0'; xdotool key XF86AudioNext");			
	}

	else if(strcmp(s1,"<") == 0 || strcmp(s1,"anterior") == 0)
	{
		c = 0;
		printf("\nMúsica anterior! =\n");
		system("export DISPLAY=':0.0'; xdotool key XF86AudioPrev");			
	}

	else if(strcmp(s1,"-h") == 0 || strcmp(s1,"--help") == 0)
	{
		c = 0;
		printf("\nTeclas: \n");
		printf("Para AUMENTAR use o comando + ou 'aumentar' (sem aspas doido!) \n");
		printf("Para baixar use o comando - ou 'baixar' (sem aspas loko!) \nEntendeu? :) \n\n");
		printf("Pausar o player = ou 'pausar' (precisa avisar de novo?) \n");
		printf("Próxima faixa > ou 'proxima' \n");
		printf("Faixa anterior < ou 'anteior' \n");												
	}

	else if(strcmp(s1,"exit") == 0 || strcmp(s1,"sair") == 0)
	{
		c = 20;
	}

	else
	{
		c=20;
	}

}



}




