#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*class Animal {
public:
	char * name;
	int age;
	Animal(int age_ ,const char* name_) {
		age = age_;
		name = new char[strlen(name_) + 1];
		strcpy(name, name_);
	}
	Animal (const Animal& a) { //복사 생성자
		age = a.age;
		name = new char[strlen(a.name) + 1];
		strcpy(name, a.name);
	}
	void changeName(const char *newName) {
		strcpy(name, newName);
	}
	void printAnimal() {
		std::cout << "Name: " << name << " Age: "<< age << std::endl;
	}
};
void main() {
	Animal A(10, "Jenny"); //10살 Jenny 생성
	Animal B = A; // 10살 Jenny인 A를 B에게 복사
	A.age = 22; //A의 나이를 22살로 바꿈
	A.changeName("Brown"); //A의 이름을 Brown으로 바꿈
	A.printAnimal();
	B.printAnimal();
	getchar();
}
*/
