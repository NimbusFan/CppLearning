#pragma once
#include "worker.h"
#include <string>

class Employee :public Worker 
{
public:
	Employee(int id, string name, int depatid);
	virtual void showInfo();
	virtual string getDeptName();
};