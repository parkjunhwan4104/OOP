#include <iostream>
#include <vector>
#include <string>

/*
using namespace std;

class DrawAPI {

public:
	virtual void drawCircle(int radius, int x, int y) {};

};

class RedCircle : public DrawAPI {

	void drawCircle(int radius,int x,int y) override{
		std::cout << "Drawing Circle[ color: red, radius:" << radius <<", x:" << x<< ", "<< y << "]"<< std::endl;
	}
};


class GreenCircle : public DrawAPI {
	void drawCircle(int radius, int x, int y) override {
		std::cout << "Drawing Circle[ color: green, radius:" << radius << ", x:" << x << ", " << y << "]" << std::endl;

	}
};

class Shape {
protected:
	DrawAPI* drawAPI;

	Shape(DrawAPI* drawAPI) {
		this->drawAPI = drawAPI;
	}

public:
	virtual void draw() = 0;

};

class Circle : public Shape {
private:
	int x, y, radius;
public:

	Circle(int x, int y, int radius, DrawAPI* drawAPI):Shape(drawAPI) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}
	void draw() override {
		drawAPI->drawCircle(radius, x, y);
	}

};

int main() {

	Shape *redCircle = new Circle(100, 100, 10, new RedCircle());
	Shape *greenCircle = new Circle(100, 100, 10, new GreenCircle());

	redCircle->draw();
	greenCircle->draw();

}
*/