int main(){
	//Variables
	int edad;

	//Programa
	printf("Introduce la edad que tienes: ")
	scanf("%i", &edad);

	if(edad>=18){
		printf("Eres mayor de edad");
	}else{
		printf("Eres menor de edad");
	}
}