#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>
#include <stdlib.h> 
#define _CRT_SECURE_NO_WARNINGS
#define limit 256


using namespace std;

stack<int> number;
int num, Num2;

int Pop() {
	if (!number.empty()) {
		int tmp = number.top();
		number.pop();
		return tmp;
	}
	
}

class Operator {
public:
	virtual int calculator(int num1, int num2) = 0;

};

class Plus : public Operator {
public:
	int calculator(int num1, int num2) {

		return num1 + num2;
	}
};

class Substract : public Operator {
public:
	int calculator(int num1, int num2) {

		return  num2 - num1;
	}

};

class Multiply : public Operator {

public:
	int calculator(int num1, int num2) {

		return num1 * num2;
	}
};

class Divide : public Operator {

public:
	int calculator(int num1, int num2) {

		return num2 / num1;
	}
};

class Context {
private:
	Operator* operation;

public:
	Context(Operator* operation_) {
		this->operation = operation_;
	}

	int excuteOperation(int num1, int num2) {
		return operation->calculator(num1, num2);
	}


};

int topPriority(int operation) {

	if (operation ==40) {
		return 3;
	}

	else if ( operation == 42 || operation == 47) {
		return 2;
	}
	else if (operation == 43 || operation == 45) {
		return 1;
	}
	else {
		return 0;

	}
}

int priorityInExpression(char operation) {
	if (operation =='(') {
		return 3;
	}

	else if (operation == '*' || operation == '/' ) {
		return 2;
	}
	else if (operation == '+' || operation =='-') {
		return 1;
	}
	else {
		return 0;
	}
	
}

char get_token(char *exp, int isSequental) {
	if (isSequental == 0) {
		return exp[num++];
	
	}
	else if (isSequental == 1) {
		return exp[num];
	}
	

	
}

void postfix(char *exp, int *postexp) {

	

	for (int i = 0; i < limit; i++) {
		postexp[i] = 70;
	}

	char tmp; int n, prior;
	int unit = 0;
	int current = 0;
	int hex = 0;
	

	std::string temp = "";
	int i = 0;

	

	while ((tmp = get_token(exp, 0)) != '\0') {
		switch (tmp) {
		case '+': case '-': case '*': case '/':  case '(':  case ')':
			if (unit >= 1) {
				postexp[i++] = current;
				unit = 0; current = 0;
			}
			if (tmp == ')') {
				//				n = number.top();

				while ((n = Pop()) != 40) {
					//					number.pop();
					postexp[i++] = n;
				}
				break;
			}
			while (!number.empty() && (prior = topPriority(number.top())) >= priorityInExpression(tmp)) {
				if (prior == 3) {
					break;
				}
				else {
					postexp[i++] = Pop();

				}

			}
			if (tmp == '+') {
				number.push(43);
			}
			else if (tmp == '-') {
				number.push(45);
			}
			else if (tmp == '*') {
				number.push(42);
			}
			else if (tmp == '/') {
				number.push(47);
			}
			else {
				number.push(40);
			}
			break;
		default:



			current = 10 * current;
			current = current + (tmp - 48);


			unit++;

			if (unit >= 1 && get_token(exp, 1) == '\0') {

				postexp[i++] = current;
			}
			break;
		}



	}

	while (!number.empty()) {
		//		n = number.top();
		//		number.pop();
		if ((n = Pop()) != 40) {

			postexp[i++] = n;
		}
	}

	
}




int calc(int tmp, int num1, int num2) {
	Context* context;

	if (tmp == 43) {
		context = new Context(new Plus());
		return context->excuteOperation(num1, num2);
	}
	else if (tmp == 45) {
		context = new Context(new Substract());
		return context->excuteOperation(num1, num2);
	}
	else if (tmp == 42) {
		context = new Context(new Multiply());
		return context->excuteOperation(num1, num2);
	}
	else if (tmp == 47) {
		context = new Context(new Divide());
		return context->excuteOperation(num1, num2);
	}
	else {

		return 0;
	}

	
}

int resultInStack(int *postexp) { 
	int tmp, result;
	int num1, num2; 
	for (int i = 0; postexp[i] < 65; i++) { 
		tmp = postexp[Num2++];

		switch (tmp) {
		case 43: case 45: case 42: case 47: case 37: case 94:
//			num1= number.top();
//			number.pop();
			num1 = Pop();
//			num2 = number.top();
//			number.pop();
			num2 = Pop();

			result = calc(tmp, num1, num2);
			number.push(result);

			
			break;
		default: 
			if (tmp >= 0)
				number.push(tmp);
			break;
		}
			
	}
	cout << number.top() << endl;
	return number.top(); 
}




int main() {

	char exp[256];
	int postexp[256];
	int result;
	

	while (true) {
		cout << "수식을 입력해주세요(계산기 종료 시 0 입력):";
		


		num = 0;
		Num2 = 0;
		for (int i = 0; i < limit; i++) {
			exp[i] = 70;
		}

		
		scanf_s("%s", exp, limit);
		try {
			if (exp[0] == '-') {
				throw std::out_of_range("Can't exist negative ");
				break;

			}

			for (int i = 0; i < limit; i++) {
				if (exp[i] == '+' || exp[i] == '(' || exp[i] == '*' || exp[i] == '/') {
					if (exp[i + 1] == '-') {

						throw std::out_of_range("Can't exist negative ");

					}
				}
			}
		}
		catch (std::out_of_range& e) {
			std::cout << "Exception :" << e.what() << std::endl;
			break;
		}
		
		if (strcmp(exp,"0") == 0) {
			break;
		}
		
		postfix(exp, postexp);
		
		result = resultInStack(postexp);
		
		
		
		std::cout << "결과 :" << result << endl;

		while (!number.empty()) {
			number.pop();
		}
	
	}
	


	return 0;

}

