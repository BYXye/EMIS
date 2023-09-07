#include "manager_view_impl.h"

ManagerViewImpl::ManagerViewImpl(void)
{
	mgrCtrl = new ManagerCtrlImpl;
	srcView = new ServiceViewImpl;
}

ManagerViewImpl::~ManagerViewImpl(void)
{
	delete mgrCtrl;
	delete srcView;
}

// 用户界面：数据输入与结果的输出

void ManagerViewImpl::loginManager(void)
{
	for(;;)
	{
		system("clear");
		menuMgr();
		switch(get_cmd('1', '4'))
		{
			case '1': addMgr(); break;
			case '2': delMgr(); break;
			case '3': listMgr(); break;
			case '4': return;
		}
	}
}

void ManagerViewImpl::loginService(void)
{
	for(;;)
	{
		system("clear");
		srcView->menuSrc();
		switch(get_cmd('1', '9'))
		{
			case '1': srcView->addDept(); break;
			case '2': srcView->delDept(); break;
			case '3': srcView->listDept(); break;
			case '4': srcView->addEmp(); break;
			case '5': srcView->delEmp(); break;
			case '6': srcView->modEmp(); break;
			case '7': srcView->listEmp(); break;
			case '8': srcView->listAllEmp(); break;
			case '9': return;
		}
	}
}

//	管理员菜单显示页面
void ManagerViewImpl::menuMgr(void)
{
	cout << "***********" << endl;
	cout << "1.增加管理员" << endl;
	cout << "2.删除管理员" << endl;
	cout << "3.列出所有管理员" << endl;
	cout << "4.退出系统" << endl;
}

//	添加管理员
void ManagerViewImpl::addMgr(void)
{
	cout << "请输入要添加管理员姓名" << endl;
	char name[20];
	cin >> name;
	cout << "请输入要添加管理员密码" << endl;
	char pwd[20];
	cin >> pwd;
	Manager manager(name, pwd);	
	if(mgrCtrl->addMgr(manager))
	{
		cout << "添加管理员成功" << endl;
	}
	else
	{
		cout << "程序维护中..." << endl;
	}
	anykey_continue();	
}

//	删除管理员
void ManagerViewImpl::delMgr(void)
{
	cout << "请输入要删除的id" << endl;
	int id;
	cin >> id;
	if(mgrCtrl->delMgr(id))
	{
		cout << "删除管理员成功" << endl;
	}
	else
	{
		cout << "此id不存在" << endl;
	}
	anykey_continue();
}
void ManagerViewImpl::listMgr(void)
{
	vector<Manager>& m = mgrCtrl->listMgr();
	vector<Manager>::iterator it;
	for(it=m.begin(); it!=m.end(); it++)
	{
		cout <<"ID: "<<it->getId()<<" 用户名: "<< it->getName()<<"密码: "<< it->getPwd() << endl;
	}
	anykey_continue();	 
}	
