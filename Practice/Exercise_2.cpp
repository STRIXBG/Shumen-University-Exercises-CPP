#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Bulgarian");
	int numGrades;
	double averageGrade;
	cout << "Âúâåäè áðîÿ îöåíêè: "; cin >> numGrades;
	for(int i=0; i<numGrades; i++){
		cout << "Âúâåäè áðîÿ îöåíêè: ";
		int grade;
		cin >> grade;
		averageGrade += grade;	
	}
	averageGrade /= numGrades;
	cout << "Ñðåäíèÿò óñïåõ: "; cin >> averageGrade;
	return 0;
}
