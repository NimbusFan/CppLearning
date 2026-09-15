#include<iostream>
using namespace std;
#include <vector>
#include <map>
#include<string>
#include<ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
    string m_Name;
    int m_Salary = 0;
};

void createWorker(vector<Worker>& v)
{
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker worker;
        worker.m_Name = "员工";
        worker.m_Name += nameSeed[i];

        worker.m_Salary = rand() % 10000 + 10000; //10000~19999
        v.push_back(worker);
    }
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        int depeId = rand() % 3;//0 1 2

        m.insert(make_pair(depeId, *it));
    }
}

void showWorkerByGourp(multimap<int, Worker>& m)
{
    cout << "策划部门：" << endl;
    multimap<int, Worker>::iterator pos = m.find(CEHUA);
    int count = m.count(CEHUA);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
    }

    cout << "--------" << endl;
    cout << "美术部门：" << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU); 
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
    }

    cout << "--------" << endl;
    cout << "研发部门：" << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
    }
}

int main48()
{
    srand((unsigned int)time(NULL));

    vector<Worker>vWorker;
    createWorker(vWorker);

    multimap<int, Worker>mWorker;
    setGroup(vWorker, mWorker);

    showWorkerByGourp(mWorker);

    system("pause");
    return 0;
}