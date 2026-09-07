#pragma once
#include "worker.h"
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	int m_EmpNum;
	bool m_FileIsEmpty;

	Worker** m_EmpArray;

	WorkerManager();

	void show_Menu();
	
	void exitSystem();

	void add_Emp();

	void save();

	int get_EmpNum();

	void init_Emp();

	void show_Emp();

	~WorkerManager();
};