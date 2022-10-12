#include <iostream>
#include<iomanip>
using namespace std;

//BMIを求める
double GetBmi(double weight, double height) {
	return weight / height / height;
}

//肥満度を求める
int getObesity(double bmi) {
	if (bmi < 18.5) {
		return -1;
	}
	else if (bmi < 25) {
		return 0;
	}
	else if (bmi < 30) {
		return 1;
	}
	else if (bmi < 35) {
		return 2;
	}
	else if (bmi < 40) {
		return 3;
	}
	else {
		return 4;
	}
}

int main(){

	const int STD_BMI = 22;  //標準BMI
	double height;           //身長
	double weight;           //体重
	double bmi;              //BMI
	double stdWeight;        //標準体重

	//身長を入力
	cout << "身長(cm)を入力してください：";
	cin >> height;

	//体重を入力
	cout << "体重(kg)を入力してください：";
	cin >> weight;

	//身長を(cm)から(m)に変換
	height /= 100;

	//標準体重を求める
	stdWeight = STD_BMI * height * height;

	//BMIを表示
	cout << "あなたのBMIは" << fixed << setprecision(1) << GetBmi(weight,height) << "です" << endl;
	bmi = getObesity(GetBmi(weight, height));

	//肥満度を表示
	if (bmi == -1) {
		cout << "低体重です" << endl;
	}
	else if (bmi == 0) {
		cout << "通常体重です" << endl;
	}
	else if (bmi == 1) {
		cout << "肥満(１度)です" << endl;
	}
	else if (bmi == 2) {
		cout << "肥満(２度)です" << endl;
	}
	else if (bmi == 3) {
		cout << "肥満(３度)です" << endl;
	}
	else{
		cout << "肥満(４度)です" << endl;
	}

	//標準体重を表示
	cout <<"あなたの標準体重は"<< stdWeight <<"kgです"<< endl;

	string e;
	cin >> e;
	return 0;
}
