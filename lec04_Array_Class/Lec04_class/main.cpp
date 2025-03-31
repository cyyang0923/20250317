#include "Complex.h"
#include "Car.h"

int main(){
	Complex a, b, c;
	a.read("A = ");
	a.print("A = ");

	Car myCar;
	Car momscar(10, "K5", 2);

	myCar.whereAmI();
	momscar.whereAmI();
	myCar .changeGear(3);
	momscar.speedUp();
	momscar.display();

}