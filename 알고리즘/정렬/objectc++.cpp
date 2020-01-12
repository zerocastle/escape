#include <iostream>
#include <algorithm>

using namespace std;

/*
	C++ STL sort() 함수 다루기 
*/

/*
	기본적으로 위와 같은 단순 데이터 정렬 기법은 실무에서 적합하지 않는다 
	실무에서는 데이터가 정형화 되어 있지 않는 여러개의 변수를 포함한 객체 프로그래밍을 
	사용하기 때문이다. 
*/

class Student{
	public:
		string name;
		int score;
		Student(string anme , int score){
			this->name = name;
			this->score = score;
		} 
		// 정렬 기준은 '점수가 작은순서' 
		 bool operator <(Student &student){
		 	return this->score < student.score;
		 }
};

int main(void){
	Student students[] = {
		Student("고 형 주", 80),
		Student("김 영 성", 83),
		Student("조 성 현", 78),
		Student("이 기 빈", 91)
	};
	sort(students , students + 4);
	
	for(int i = 0; i < 4; i ++){
		cout << students[i].name << ' ';
	}
}
