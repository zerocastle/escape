#include <iostream>
#include <algorithm>

using namespace std;

/*
	C++ STL sort() �Լ� �ٷ�� 
*/

/*
	�⺻������ ���� ���� �ܼ� ������ ���� ����� �ǹ����� �������� �ʴ´� 
	�ǹ������� �����Ͱ� ����ȭ �Ǿ� ���� �ʴ� �������� ������ ������ ��ü ���α׷����� 
	����ϱ� �����̴�. 
*/

class Student{
	public:
		string name;
		int score;
		Student(string anme , int score){
			this->name = name;
			this->score = score;
		} 
		// ���� ������ '������ ��������' 
		 bool operator <(Student &student){
		 	return this->score < student.score;
		 }
};

int main(void){
	Student students[] = {
		Student("�� �� ��", 80),
		Student("�� �� ��", 83),
		Student("�� �� ��", 78),
		Student("�� �� ��", 91)
	};
	sort(students , students + 4);
	
	for(int i = 0; i < 4; i ++){
		cout << students[i].name << ' ';
	}
}
