int main(){

	//Variables
	int horasTrabajadas;
	float costoHora;
	float sueldo;

	//Programa
	printf("Introduce las horas trabajadas:");
	scanf("%i", &horasTrabajadas);

	printf("Introduce lo que cobras por hora trabajada:");
	scanf("%f", &costoHora);

	sueldo=horasTrabajadas*costoHora;

	printf("El sueldo total obtenido es de: ");
	printf("%f", sueldo);


}