#include <iostream>
using namespace std;
#include "employee.h"

Employee::Employee(int id, string name, int depatid) 
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = depatid;
}

void Employee::showInfo() 
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t职工岗位：" << this->getDeptName()
		<< "\t完成经理交给的任务" << endl;
}

string Employee::getDeptName()
{
	return (string)"员工";
}