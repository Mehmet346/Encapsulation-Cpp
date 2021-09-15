#include <iostream>
using namespace std;


class Nokta
{
	private:
		int x;
		int y;
	public:
		
	int getX();
	int getY();
	
	void setX(int);
	void setY(int);
};

int Nokta::getX()
{
	return x;
}
int Nokta::getY()
{
	return y;
}

void Nokta::setX(int _x)
{
	x = _x;
}
void Nokta::setY(int _y)
{
	if(_y > 5)
		y = _y;
	else
		y = 2; 
}


int main() 
{
	Nokta n1;
	n1.setX(10);
	n1.setY(6);
	cout << n1.getX() << " " << n1.getY(); 
}
