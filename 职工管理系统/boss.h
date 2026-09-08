#pragma once
#include "worker.h"
#include <string>

class Boss :public Worker
{
public:
	Boss(int id, std::string name, int depatid);
	virtual void showInfo();
	virtual std::string getDeptName();
};