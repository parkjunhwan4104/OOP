#include <iostream>
#include <vector>
#include <string>


/*
class Student {

private:
	std::string rollNo;
	std::string name;

public:
	std::string getRollNo() {
		return rollNo;
	}

	void setRollNo(std::string rollNo) {
		this->rollNo = rollNo;

	}

	std::string getName() {
		return name;
	}

	void setName(std::string name) {
		this->name = name;

	}
};

class StudentView {
public:
	void printStudentDetails(std::string studentName, std::string studentRollNo) {
		std::cout << "Student: " << std::endl;
		std::cout << "Name: " <<studentName<< std::endl;
		std::cout << "Roll No: " << studentRollNo << std::endl;
	}

};

class StudentController {

private:
	Student* model;
	StudentView* view;

public:
	StudentController(Student* model, StudentView* view) {
		this->model = model;
		this->view = view;
	}

	void setStudentName(std::string name) {
		model->setName(name);
	}

	std::string getStudentName() {
		return model->getName();
	}

	void setStudentRollNo(std::string rollNo) {
		model->setRollNo(rollNo);
	}

	std::string getStudentRollNo() {
		return model->getRollNo();
	}

	void updateView() {
		view->printStudentDetails(model->getName(), model->getRollNo());
	}
};



static Student* retriveStudentFromDatabase() {
			Student* student = new Student();
			student->setName("Robert");
			student->setRollNo("10");
			return student;
}
 
int main() {
		Student* model = retriveStudentFromDatabase();
		StudentView* view = new StudentView();

		StudentController* controller = new StudentController(model, view);

		controller->updateView();

		controller->setStudentName("John");

		controller->updateView();

		return 0;
}

*/

