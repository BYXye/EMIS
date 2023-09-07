#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "employee.h"
#include "tools.h"

class Department
{
	int m_iId;
	char m_strName[20];
public:
	vector<Employee> empArr;
	Department(const char* name="");
	~Department(void);
	void setId(int id);
	void setName(const char* name);
	int getId(void);
	char* getName(void);
	friend ostream& operator<<(ostream& os, const Department& department)
	{
		return os << department.m_iId << " " << department.m_strName << " " << (department.empArr).size();
	}
	friend istream& operator>>(istream& is, Department& department)
	{
		return is >> department.m_iId >> department.m_strName;
	}
};

#endif//DEPARTMENT_H
