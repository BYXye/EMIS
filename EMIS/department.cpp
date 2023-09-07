#include "department.h"

Department::Department(const char* name)
{
	strcpy(m_strName, name);	
}

//	将其中的员工信息存入文件
Department::~Department(void)
{
	
}

void Department::setId(int id)
{
	m_iId = id;	
}
void Department::setName(const char* name)
{
	strcpy(m_strName, name);
}

int Department::getId(void)
{
	return m_iId;	
}

char* Department::getName(void)
{
	return m_strName;
}
