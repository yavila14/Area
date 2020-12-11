#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int radio, altura,radioc;
	float area,areac;
	const float PI=3.1416;
	std::cout <<"Escribe el radio del circulo:-->" ;
	std::cin >>radio;
	std::cout <<"Escribe el radio del cilindro:-->" ;
	std::cin >>radioc;
	std::cout <<"Escribe la altura del cilindro:-->" ;
	std::cin >>altura;
	area=PI*(radio*radio);
	areac=2*PI*radioc*(radioc+altura);
	std::cout <<"El area del circulo es:-->" <<area <<"\n";
	std::cout <<"El area del cilindro es:-->" <<areac;
		
	return 0;
}
