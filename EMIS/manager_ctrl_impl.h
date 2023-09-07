#ifndef MANAGER_CTRL_IMPL_H
#define MANAGER_CTRL_IMPL_H

#include "manager_ctrl.h"
#include "manager_mode_impl.h"

class ManagerCtrlImpl:public ManagerCtrl
{
	vector<Manager> mgrArr;	//	存储管理员信息
	ManagerMode* mgrMode;	//	与数据访问层进行信息传递
public:
	ManagerCtrlImpl(void);	
	~ManagerCtrlImpl(void);
	bool addMgr(Manager& manager);
	bool delMgr(int id);
	vector<Manager>& listMgr(void);
};

#endif//MANAGER_CTRL_IMPL_H
