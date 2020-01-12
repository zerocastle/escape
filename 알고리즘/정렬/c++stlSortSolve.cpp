/*문제 ) 학생을 나타낼수 있는 정보가 '이름 ,성적 , 생년월일' 일때 학생을 성적 순성대로
		  나열하고자 한다 . 다만 성적이 동일한 경우 나이가  더 어린 학생이 더 우선순위가 높
		  아야 한다.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string,pair<int,int> > a,
			pair<string,pair<int,int> > b){
				// 학생 성적이 동일한경우 
				if(a.second.first == b.second.first){
					//생년월일이 더 느린 학생을 우선순위를 먼저준다. 
					return a.second.second > b.second.second;
				}else{
					return a.second.first > a.second.first;
				} 
			}

int main(void){
	
	vector<pair<string,pair<int,int> > > v;
	
	v.push_back(pair<string,pair<int, int> >("김 영 성", pair<int, int>(90,19950212)));
	v.push_back(pair<string,pair<int, int> >("고 형 주", pair<int, int>(80,19930212)));
	v.push_back(pair<string,pair<int, int> >("이 기 빈", pair<int, int>(80,19940212)));
	v.push_back(pair<string,pair<int, int> >("조 성 현", pair<int, int>(91,19940212)));
	
	sort(v.begin(),v.end(),compare);
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << '\n';
	}
	
	return 0;
}
