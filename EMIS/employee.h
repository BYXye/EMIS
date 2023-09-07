#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "tools.h"

class Employee
{
	char m_strName[20];
	char m_cSex;
	int m_iAge;
	int m_iId;
public:
	Employee(const char* name="", char sex='\0', int age=0);
	void setId(int id);
	void setAge(int age);
	void setName(const char* name);
	void setSex(const char sex);
	int getId(void);
	int getAge(void);
	char* getName(void);
	char getSex(void);
	friend ostream& operator<<(ostream& os, const Employee& employee)
	{
		return os << employee.m_iId << " " << employee.m_strName << " " << employee.m_cSex << " " << employee.m_iAge;
	}
	friend istream& operator>>(istream& is, Employee& employee)
	{
		return is >> employee.m_iId >> employee.m_strName >> employee.m_cSex >> employee.m_iAge;
	}	
};

#endif//EMPLOYEE_H
