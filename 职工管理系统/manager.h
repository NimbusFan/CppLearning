#pragma once
#include "worker.h"
#include <string>

class Manager :public Worker {
public:
	Manager(int id, std::string name, int depatid);
	virtual void showInfo();
	virtual std::string getDeptName();
};