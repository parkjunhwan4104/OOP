#include <iostream>
#include <string>
/*
class Employee {
protected:
	std::string name;
	int age;
public:
	Employee(std::string name, int age) : name(name), age(age) {}
	virtual void showInfo() {
		std::cout << "Name:" << name << ", Age: " << age <<
			std::endl;
	}
};
class Manager : public Employee {
	int managerBonus;
public:
	Manager(int managerBonus, std::string name, int age) :
		managerBonus(managerBonus), Employee(name, age) {}
	void showInfo() {
		std::cout << "Manager Name:" << name << ", Age: " << age <<
			", managerBonus:" << managerBonus << std::endl;
	}
};
class Intern : public Employee {
	std::string majorName;
public:
	Intern(std::string major, std::string name, int age) : majorName(major),
		Employee(name, age) {}
	void showInfo() {
		std::cout << "Intern Name:" << name << ", Age: " << age <<
			", Major:" << majorName << std::endl;
	}
};
class Janitor : public Employee {
	int salary;
public:
	Janitor(int salary, std::string name, int age) : salary(salary),
		Employee(name, age) {}
	void showInfo() {
		std::cout << "Janitor Name:" << name << ", Age: " << age
			<< ", Salary:" << salary << std::endl;
	}
};
int main() {
	Employee** employeelist = new Employee*[6];
	


	employeelist[0] = new Manager(200, "James", 33);
	employeelist[1] = new Manager(150, "Chulsoo", 50);
	employeelist[2] = new Intern("security", "Minsu", 24);
	employeelist[3] = new Intern("HCI", "Yong", 19);
	employeelist[4] = new Janitor(100, "Black", 90);
	employeelist[5] = new Janitor(200, "White", 100);
	employeelist[0]->showInfo();
	employeelist[1]->showInfo();
	employeelist[2]->showInfo();
	employeelist[3]->showInfo();
	employeelist[4]->showInfo();
	employeelist[5]->showInfo();
	getchar();
	return 0;
}
*/