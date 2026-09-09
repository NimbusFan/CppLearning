#pragma once

template<class T>
class MyArray 
{
public:
	MyArray(int capacity)
	{
		//cout << "有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	MyArray(const MyArray& arr) 
	{
		//cout << "拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=调用" << endl;
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		     
		return *this;
	}

	//尾插法
	void Push_Back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			cout << "数组容量达到上限" << endl;
			return;
		}

		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void Pop_Back() {
		if (this->m_Size == 0)
		{
			cout << "数组已为空" << endl;
			return;
		}

		this->m_Size--;
	}

	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	int Get_Capacity()
	{
		return this->m_Capacity;
	}

	int Get_Size()
	{
		return this->m_Size;
	}

	~MyArray() 
	{
		//cout << "析构函数调用" << endl;
		if (this->pAddress  = nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
	}
private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};