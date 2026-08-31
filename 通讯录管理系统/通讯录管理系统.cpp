#include <iostream>
using namespace std;
#define MAX 1000

void showMenu() {
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

struct Person {
	string m_Name;
	int m_Gender = 0;
	int m_Age = 1;
	string m_Phone;
	string m_Addr;
}; 

struct Addressbooks {
	struct Person personArray[MAX];
	int m_size = 0;
};

void addPerson(Addressbooks* abs) {
	if (abs->m_size == MAX) {
		cout << "通讯录人数已满，无法添加" << endl;
		return;
	}
	//输入姓名
	string name;
	cout << "请输入姓名：" << endl;
	cin >> name;
	abs->personArray[abs->m_size].m_Name = name;
	
	//输入性别
	int gender = 0;
	cout << "请输入性别：" << endl;
	cout << "1 --- 男" << endl;
	cout << "2 --- 女" << endl;
	while (true) {
		cin >> gender;
		if (gender == 1 || gender == 2) {
			abs->personArray[abs->m_size].m_Gender = gender;
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}

	//输入年龄
	int age = 0;
	cout << "请输入年龄：" << endl;
	while (true) {
		cin >> age;
		if (age > 0 && age <= 200) {
			abs->personArray[abs->m_size].m_Age = age;
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}

	// 输入电话
	string phone;
	cout << "请输入联系电话：" << endl;
	cin >> phone;
	abs->personArray[abs->m_size].m_Phone = phone;

	// 输入地址
	string addr;
	cout << "请输入家庭住址：" << endl;
	cin >> addr;
	abs->personArray[abs->m_size].m_Addr = addr;

	abs->m_size++;
	cout << "添加联系人成功" << endl;
	system("pause");
	system("cls");
}

void showPerson(Addressbooks* abs) {
	if (abs->m_size == 0) {
		cout << "当前通讯录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name << "\t"
				 << "性别：" << abs->personArray[i].m_Age << "\t"
				 << "年龄：" << (abs->personArray[i].m_Gender == 1 ? "男" : "女") << "\t"
				 << "电话：" << abs->personArray[i].m_Phone << "\t"
				 << "地址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(Addressbooks* abs) {
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs) {
	int res = isExist(abs);
	if (res != -1) {
		for (int i = 0; i < abs->m_size;i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		cout << "删除成功" << endl;
		abs->m_size--;
	}
	else {
		cout << "通讯录中没有此人信息" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs) {
	int res = isExist(abs);
	if (res == -1) {
		cout << "通讯录中没有此人信息" << endl;
	}
	else {
		cout << "姓名：" << abs->personArray[res].m_Name << "\t"
			<< "性别：" << abs->personArray[res].m_Age << "\t"
			<< "年龄：" << (abs->personArray[res].m_Gender == 1 ? "男" : "女") << "\t"
			<< "电话：" << abs->personArray[res].m_Phone << "\t"
			<< "地址：" << abs->personArray[res].m_Addr << "\t";
	}
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs) {
	int res = isExist(abs);
	if (res == -1) {
		cout << "通讯录中没有此人" << endl;
	}
	else {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[res].m_Name = name;

		//输入性别
		int gender = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true) {
			cin >> gender;
			if (gender == 1 || gender == 2) {
				abs->personArray[res].m_Gender = gender;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		//输入年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		while (true) {
			cin >> age;
			if (age > 0 && age <= 200) {
				abs->personArray[res].m_Age = age;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		// 输入电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personArray[res].m_Phone = phone;

		// 输入地址
		string addr;
		cout << "请输入家庭住址：" << endl;
		cin >> addr;
		abs->personArray[res].m_Addr = addr;

		cout << "修改联系人成功" << endl;
		system("pause");
		system("cls");
	}
}

void cleanPerson(Addressbooks* abs) {
	if (abs->m_size == 0) {
		cout << "通讯录已无任何记录" << endl;
	}
	else {
		int confirm = 0;
		cout << "是否确认清空？" << endl
			<< "1 --- 确认" << endl
			<< "2 --- 取消" << endl;
		cin >> confirm;
		if (confirm == 1) {
			abs->m_size = 0;
			cout << "通讯录已清空" << endl;
		}
	}


	system("pause");
	system("cls");
}

int main() {
	int select = 0;
	Addressbooks abs;

	while (true) {
		showMenu();
		cin >> select;

		switch (select) {
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");
	return 0;
}