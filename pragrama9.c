int main(){
	
	//Calcular un exponente

	//Variables
	int base, exponente, resultado=1;

	//Inicializamos las variables
	printf("Introduce la base: ");
	scanf("%i", &base);

	printf("Introduce el exponente: ");
	scanf("%i", &exponente);


	//Programa exponente
	if(exponente>=0){

		for(int i=0;i<exponente;i++){
		resultado*=base;
		}

	}else{

		exponente=exponente*(-1);

		for(int j=0;j<exponente;j++){
			resultado*=base;
		}

		resultado=1/(resultado);

	}

	printf("El resultado del exponente es: ");
	printf("\n");
	printf("%i", resultado);

}