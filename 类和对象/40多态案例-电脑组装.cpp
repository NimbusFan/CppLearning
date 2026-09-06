#include <iostream>
using namespace std;

class CPU {
public:
	virtual void calculate() = 0;
};

class VideoCard {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;

	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	~Computer() {
		if (m_cpu != nullptr) {
			delete m_cpu;
			m_cpu = nullptr;
		}

		if (m_vc != nullptr) {
			delete m_vc;
			m_vc = nullptr;
		}

		if (m_mem != nullptr) {
			delete m_mem;
			m_mem = nullptr;
		}
	}
};
//英特尔子类
class IntelCPU :public CPU {
public:
	void calculate() {
		cout << "英特尔的cpu开始工作" << endl;
	}
};

class IntelVideoCard :public VideoCard {
public:
	void display() {
		cout << "英特尔的显卡开始工作" << endl;
	}
};

class IntelMemory :public Memory {
public:
	void storage() {
		cout << "英特尔的内存条开始工作" << endl;
	}
};

//联想子类
class LenovoCPU :public CPU {
public:
	void calculate() {
		cout << "联想的cpu开始工作" << endl;
	}
};

class LenovoVideoCard :public VideoCard {
public:
	void display() {
		cout << "联想的显卡开始工作" << endl;
	}
};

class LenovoMemory :public Memory {
public:
	void storage() {
		cout << "联想的内存条开始工作" << endl;
	}
};

void test() {
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	cout << "第一台电脑开始工作" << endl;
	computer1->work();
	delete computer1;

	cout << "--------------------------" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	cout << "第二台电脑开始工作" << endl;
	computer2->work();
	delete computer2;

	cout << "--------------------------" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	cout << "第二台电脑开始工作" << endl;
	computer3->work();
	delete computer3;
}

int main40() {
	test();
	system("pause");
	return 0;
}