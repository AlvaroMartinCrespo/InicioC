#include<stdbool.h>

int main(){

	//Variables
	bool lluvia, tareas, Bbtk;
	int numLluvia, numTareas, numBbkt;

	//Programa
	printf("¿Esta lloviendo? (1-Si , 2-No): ");
	scanf("%i", &numLluvia);
	printf("\n");
	printf("¿Has termindado las tereas? (1-Si, 2-No): ");
	scanf("%i", &numTareas);
	printf("\n");
	printf("¿Tienes que ir a la bbtk? (1-Si, 2-No): ");
	scanf("%i", &numBbtk);

	//If para validar los boolean
	if(numLluvia==1){
		numLluvia=true;
	}else{
		numLluvia=false;
	}

	if(numTareas==1){
		numTareas=true;
	}else{
		numTareas=false;
	}

		if(numBbtk==1){
		numBbtk=true;
	}else{
		numBbtk=false;
	}

	if(numBbtk || (numLluvia && numTareas) ){
		printf("Puedes salir");
	}else{
		printf("No puedes salir");
	}
}