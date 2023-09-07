#include "manager.h"

//	管理员构造函数
Manager::Manager(const char* name, const char*pwd):m_iId(0)
{
	strcpy(m_strName, name);
	strcpy(m_strPwd, pwd);
}

//	获取管理员ID
int Manager::getId(void)const
{
	return m_iId;
}

//	获取管理员姓名
const char* Manager::getName(void)const
{
	return m_strName;
}

//	获取管理员密码
const char* Manager::getPwd(void)const
{
	return m_strPwd;
}

//	设置管理员ID
void Manager::setId(int id)
{
	m_iId = id;
}

//	设置管理员姓名
void Manager::setName(const char* name)
{
	strcpy(m_strName, name);
}

//	设置管理员密码
void Manager::setPwd(const char* pwd)
{
	strcpy(m_strPwd, pwd);	
}

