#include "../Math/math.hpp"
#include "../Math/declarations.hpp"

using gamehacking::math::Vector3D;

double Magnitude(SDK::FVector& v) {
	return sqrt(pow(v.X, 2) + pow(v.Y, 2) + pow(v.Z, 2));
}

int main(void) {
	Vector3D a, b(1,1,1), c(2,2,2);
	std::cout << a << b << c << b + c;

	std::cout << b.Magnitude() << std::endl;
	std::cout << c.Magnitude() << std::endl;

	SDK::FVector f = c;
	std::cout << "x = " << f.X << ", y = " << f.Y << ", z = " << f.Z << std::endl;

	Vector3D g = f;
	Vector3D h;
	h = f;

	std::cout << g << h << std::endl;

	SDK::FVector i = c;
	std::cout << Magnitude(i) << std::endl;
}