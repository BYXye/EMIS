#ifndef MANAGER_VIEW_H
#define MANAGER_VIEW_H

#include "manager.h"
#include "tools.h"

//	ManagerView基类，用户界面
class ManagerView
{
public:
	virtual ~ManagerView(void){}
	virtual void loginManager(void) = 0;
	virtual void loginService(void) = 0;
	virtual void menuMgr(void) = 0;
	virtual void addMgr(void) = 0;
	virtual void delMgr(void) = 0;
	virtual void listMgr(void) = 0;
};

#endif//MANAGER_VIEW_H
