#include <iostream>
using namespace std;
#include <fstream>
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//文件不存在
	if (!ifs.is_open())
	{
		this->m_EmpNum = 0;
		this->m_EmpArray = nullptr;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件存在但是为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->m_EmpNum = 0;
		this->m_EmpArray = nullptr;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件存在，且有数据
	 this->m_EmpNum = this->get_EmpNum();
	 this->m_EmpArray = new Worker*[this->m_EmpNum];
	 this->init_Emp();
}

void WorkerManager:: show_Menu() 
{
	cout << "******************************************************" << endl;
	cout << "***************  欢迎使用职工管理系统  ***************" << endl;
	cout << "******************  0.退出管理系统  ******************" << endl;
	cout << "******************  1.增加职工信息  ******************" << endl;
	cout << "******************  2.显示职工信息  ******************" << endl;
	cout << "******************  3.删除离职职工  ******************" << endl;
	cout << "******************  4.修改职工信息  ******************" << endl;
	cout << "******************  5.查找职工信息  ******************" << endl;
	cout << "******************  6.按照编号排序  ******************" << endl;
	cout << "******************  7.清空所有文档  ******************" << endl;
	cout << "******************************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() 
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

void WorkerManager:: add_Emp() 
{
	cout << "输入添加职工数量：" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//堆区开辟新空间并存入旧数据
		Worker** newSpace = new Worker * [addNum + this->m_EmpNum];

		if (m_EmpArray != nullptr) 
		{
			for (int i = 0;i < this->m_EmpNum;i++) 
			{
				newSpace[i] = m_EmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0;i < addNum; i++)
		{
			int id;
			string name;
			int dptid;
			
			cout << "输入第" << i + 1 << "个新员工的ID：";
			cin >> id;

			cout << "输入第" << i + 1<< "个新员工的姓名：";
			cin >> name;

			cout << "选择该员工的岗位" << endl;
			cout << "1：普通员工" << endl;
			cout << "2：经理" << endl;
			cout << "3：老板" << endl;
			cin >> dptid;

			Worker* worker = nullptr;
			switch (dptid) 
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				cout << "输入岗位无效，默认设置为普通员工！" << endl;
				worker = new Employee(id, name, 1);
				break;
			}

			newSpace[this->m_EmpNum  + i] = worker;

		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum += addNum;
		this->m_FileIsEmpty = false;
		cout << "成功添加" << addNum << "名新员工" << endl;

		this->save();
	}
	else
	{
		cout << "输入有误" << endl;
		return;
	}

	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0;i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}


int WorkerManager::get_EmpNum() 
{
	fstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dptid;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dptid)
	{
		num++;
	}
	return num;
}

void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int dptid;
	int index = 0;

	while(ifs >> id && ifs >> name && ifs >> dptid)
	{
		Worker* worker = nullptr;
		if(dptid == 1)
		{
			worker = new Employee(id, name, dptid);
		}
		else if(dptid == 2)
		{
			worker = new Manager(id, name, dptid);
		}
		else if(dptid == 3)
		{
			worker = new Boss(id, name, dptid);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::show_Emp()
{
	if(this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else{
		for(int i = 0; i < m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::del_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
	}
	else {
		int id = 0;
		cout << "输入想要删除的职工编号：";
		cin >> id;

		if (this->IsExist(id) != -1) 
		{
			for (int i = this->IsExist(id);i < m_EmpNum;i++) 
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			
			this->m_EmpNum--;
			this->save();
			cout << "删除成功" << endl;
		}else
		{
			cout << "删除失败，未找到该员工" << endl;
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0;i < this->m_EmpNum;i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void WorkerManager::Mod_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
		system("pause");
		system("cls");
	}
	else 
	{
		cout << "输入修改的职工编号：";
		
		int id = 0;
		cin >> id;
		int res = this->IsExist(id);

		if (res == -1) 
		{
			cout << "修改失败，职工不存在" << endl;
		}
		else
		{
			int new_id;
			string name;
			int dptid;
			
			delete this->m_EmpArray[res];
			
			cout << "查找到" << id << "号职工，输入新职工号:";
			cin >> new_id;

			cout << "输入新姓名：";
			cin >> name;

			cout << "输入新岗位：" << endl
				 << "1、普通员工" << endl
				 << "2、经理" << endl
				 << "3、老板" << endl;
			cin >> dptid;

			Worker* worker = nullptr;

			switch (dptid) 
			{
			case 1:
				worker = new Employee(new_id, name, dptid);
					break;
			case 2:
				worker = new Manager(new_id, name, dptid);
					break;
			case 3:
				worker = new Boss(new_id, name, dptid);
					break;
			default:
				break;
			}

			this->m_EmpArray[res] = worker;
			this->save();
			cout << "修改成功" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() 
{
	if (this->m_FileIsEmpty) 
	{
		cout << "文件不存在或为空" << endl;
	}
	else 
	{
		cout << "请输入查找的方式：" << endl
			<< "1、按员工编号查找" << endl
			<< "2、按员工姓名查找" << endl;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: 
		{
			int id = 0;
			cout << "输入查找的员工编号：" << endl;
			cin >> id;

			int res = this->IsExist(id);

			if (res == -1)
			{
				cout << "员工不存在" << endl;
			}
			else
			{
				cout << "查找成功" << endl
					 << "员工信息如下:" << endl;
				this->m_EmpArray[res]->showInfo();
			}
		}
			break;
		case 2:
		{
			string name;
			cout << "输入查找员工的姓名：";
			cin >> name;

			bool flag = false;
			
			for (int i = 0;i < m_EmpNum ;i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功" << endl
						<< "员工信息如下：" << endl;

					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}

			if (flag == false)
			{
				cout << "员工不存在" << endl;
			}
		}
			break;
		default:
			cout << "输入选项有误" << endl;
			break;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		cout << "选择排序方式：" << endl
			 << "1、按员工编号升序排列" << endl
			 << "2、按员工编号降序排列" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0;i < m_EmpNum - 1; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_EmpNum;j++)
			{
				if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[minOrMax]->m_Id)
				{
					if (select == 1)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (select == 2)
					{
						minOrMax = j;
					}
				}
			}

			if (minOrMax != i)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
	}

	cout << "排序成功，结果为：" << endl;
	this->save();
	this->show_Emp();
}

void WorkerManager::Clean_File()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		cout << "是否确认清空？：" << endl;
		cout << "1、确认" << endl;
		cout << "2、取消" << endl;
		
		int select;
		cin >> select;

		if (select == 1)
		{
			ofstream ofs;
			ofs.open(FILENAME, ios::trunc);
			ofs.close();

			if (this->m_EmpArray != nullptr)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					delete this->m_EmpArray[i];
				}

				delete this->m_EmpArray;
				this->m_EmpArray = nullptr;

				this->m_EmpNum = 0;
				this->m_FileIsEmpty = true;
			}

		}
	}

	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != nullptr) 
	{
		for (int i = 0;i < this->m_EmpNum;i++)
		{
			delete m_EmpArray[i];
		}
		delete[] m_EmpArray;
		m_EmpArray = nullptr;
	}
}