/*���� ) �л��� ��Ÿ���� �ִ� ������ '�̸� ,���� , �������' �϶� �л��� ���� �������
		  �����ϰ��� �Ѵ� . �ٸ� ������ ������ ��� ���̰�  �� � �л��� �� �켱������ ��
		  �ƾ� �Ѵ�.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string,pair<int,int> > a,
			pair<string,pair<int,int> > b){
				// �л� ������ �����Ѱ�� 
				if(a.second.first == b.second.first){
					//��������� �� ���� �л��� �켱������ �����ش�. 
					return a.second.second > b.second.second;
				}else{
					return a.second.first > a.second.first;
				} 
			}

int main(void){
	
	vector<pair<string,pair<int,int> > > v;
	
	v.push_back(pair<string,pair<int, int> >("�� �� ��", pair<int, int>(90,19950212)));
	v.push_back(pair<string,pair<int, int> >("�� �� ��", pair<int, int>(80,19930212)));
	v.push_back(pair<string,pair<int, int> >("�� �� ��", pair<int, int>(80,19940212)));
	v.push_back(pair<string,pair<int, int> >("�� �� ��", pair<int, int>(91,19940212)));
	
	sort(v.begin(),v.end(),compare);
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << '\n';
	}
	
	return 0;
}
