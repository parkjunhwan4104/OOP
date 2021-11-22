#include <iostream>
#include <vector>
#include <string>

/*
class Shape {
public:
	
	virtual void draw() {};
};

class RoundedRectangle : public Shape {
	void draw() override {
		std::cout << "Inside RoundedRectangle::draw() method" << std::endl;
	 }
};

class RoundedSquare : public Shape {
	void draw()  override {
		std::cout << "Inside RoundedSquare::draw() method" << std::endl;
	}
};
class Rectangle : public Shape {
	void draw() override {
		std::cout << "Inside Rectangle::draw() method" << std::endl;
	}
};

class Square : public Shape {
	void draw()  override {
		std::cout << "Inside Square::draw() method" << std::endl;
	}
};



class AbstractFactory {
public:
	virtual Shape *getShape(std::string shapeType) = 0;
	
};

class ShapeFactory : public AbstractFactory {
public:
	Shape *getShape(std::string shapeType)  override {
		if (!shapeType.compare("RECTANGLE")) {
			return new Rectangle();
		}
		else if (!shapeType.compare("SQUARE")) {
			return new Square();
		}
		return NULL;
			
	}
};

class RoundedShapeFactory : public AbstractFactory {
public:
	Shape *getShape(std::string shapeType)  override {
		if (!shapeType.compare("RECTANGLE")) {
			return new RoundedRectangle();
		}
		else if (!shapeType.compare("SQUARE")) {
			return new RoundedSquare();
		}
		return NULL;

	}
};


class FactoryProducer {
public: 
	static AbstractFactory *getFactory(bool rounded) {
		if (rounded) {
			return new RoundedShapeFactory();
		}
		else {
			return new ShapeFactory(); 
		}
	}

};


int main() {
	FactoryProducer fp ;
	AbstractFactory *shapeFactory = fp.getFactory(false);

	Shape *shape1 = shapeFactory->getShape("RECTANGLE");
	shape1->draw();

	Shape *shape2 = shapeFactory->getShape("SQUARE");
	shape2->draw();

	AbstractFactory *shapeFactory1 = fp.getFactory(true);

	Shape *shape3 = shapeFactory1->getShape("RECTANGLE");
	shape3->draw();

	Shape *shape4 = shapeFactory1->getShape("SQUARE");
	shape4->draw();
	
}
*/