int main(){

	//Variables
	float nota1, nota2, media, notaFinal;

	//Programa
	printf("Introduce la primera nota: ");
	scanf("%f", &nota1);
	printf("\n");
	printf("Introduce la segunda nota: ");
	scanf("%f", &nota2);

	notaFinal=nota1+nota2;
	media=notaFinal/2;

	printf("\n");
	printf("La media de las dos notas es: ");
	printf("%f", media);



}