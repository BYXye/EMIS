#ifndef MANAGER_CTRL_H
#define MANAGER_CTRL_H

#include "manager.h"
#include "tools.h"

//	业务逻辑层，对接受到的数据进行具体的功能实现
class ManagerCtrl
{
public:
	virtual ~ManagerCtrl(void){}
	virtual bool addMgr(Manager& manager) = 0;
	virtual bool delMgr(int id) = 0;
	virtual vector<Manager>& listMgr(void) = 0;
};

#endif//MANAGER_CTRL_H
