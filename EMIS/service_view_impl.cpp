#include "service_view_impl.h"

ServiceViewImpl::ServiceViewImpl(void)
{
	srcCtrl = new ServiceCtrlImpl;
}

ServiceViewImpl::~ServiceViewImpl(void)
{
	delete srcCtrl;
}

void ServiceViewImpl::menuSrc(void)
{
	cout << "***********" << endl;
	cout << "1.增加部门" << endl;
	cout << "2.删除部门" << endl;
	cout << "3.列出所有部门" << endl;
	cout << "4.增加员工" << endl;
	cout << "5.删除员工" << endl;
	cout << "6.修改员工" << endl;
	cout << "7.列出某个部门的员工" << endl;
	cout << "8.列出所有员工" << endl;
	cout << "9.退出系统" << endl;	
}

void ServiceViewImpl::addDept(void)
{
	cout << "请输入要添加的部门名" << endl;
	char name[20];
	cin >> name;
	Department department(name);	
	if(srcCtrl->addDept(department))
	{
		cout << "添加部门成功" << endl;
	}
	else
	{
		cout << "不存在此部门" << endl;
	}
	anykey_continue();
}


void ServiceViewImpl::delDept(void)
{
	cout << "请输入要删除的id" << endl;
	int id;
	cin >> id;
	if(srcCtrl->delDept(id))
	{
		cout << "删除部门成功" << endl;
	}
	else
	{
		cout << "此id不存在" << endl;
	}
	anykey_continue();
}

void ServiceViewImpl::listDept(void)
{
	vector<Department>& d = srcCtrl->listDept();
	vector<Department>::iterator it;
	for(it=d.begin(); it!=d.end(); it++)
	{
		cout << *it << endl;
	}
	anykey_continue();	
}

void ServiceViewImpl::addEmp(void)
{
	cout << "请输入要添加员工所属部门的ID" << endl;
	int id;
	cin >> id;
	cout << "请输入要添加员工姓名" << endl;
	char name[20];
	cin >> name;
	cout << "请输入要添加员工性别" << endl;
	char sex;
	cin >> sex;
	cout << "请输入要添加员工年龄" << endl;
	int age;
	cin >> age;
	Employee employee(name, sex, age);	
	if(srcCtrl->addEmp(id, employee))
	{
		cout << "添加员工成功" << endl;
	}
	else
	{
		cout << "此id不存在..." << endl;
	}
	anykey_continue();
}

void ServiceViewImpl::delEmp(void)
{
	cout << "请输入要删除的id" << endl;
	int id;
	cin >> id;
	if(srcCtrl->delEmp(id))
	{
		cout << "删除员工成功" << endl;
	}
	else
	{
		cout << "此id不存在..." << endl;
	}
	anykey_continue();
}

void ServiceViewImpl::modEmp(void)
{
	cout << "请输入要修改的员工ID" << endl;
	int id;
	cin >> id;
	cout << "请输入修改后的员工姓名" << endl;
	char name[20];
	cin >> name;
	cout << "请输入修改后的员工性别" << endl;
	char sex;
	cin >> sex;
	cout << "请输入修改后的员工年龄" << endl;
	int age;
	cin >> age;
	Employee employee(name, sex, age);	
	if(srcCtrl->modEmp(id, employee))
	{
		cout << "修改员工成功" << endl;
	}
	else
	{
		cout << "此id不存在..." << endl;
	}
	anykey_continue();
}

void ServiceViewImpl::listEmp(void)
{
	cout << "请输入要显示的部门的ID" << endl;
	int id;
	cin >> id;
	Department* d = srcCtrl->listEmp(id);
	if(NULL == d)
	{
		cout << "此id不存在..." << endl;
		anykey_continue();
		return;
	}
	cout << *d << endl;
	vector<Employee>::iterator it;
	for(it = (d->empArr).begin(); it!=(d->empArr).end(); it++)
	{
			cout << *it << endl;
	}
	anykey_continue();
}

void ServiceViewImpl::listAllEmp(void)
{
	vector<Department>& e = srcCtrl->listAllEmp();
	vector<Department>::iterator it;
	for(it=e.begin(); it!=e.end(); it++)
	{
		cout << *it << endl;
		vector<Employee>::iterator it1;
		for(it1 = (it->empArr).begin(); it1!=(it->empArr).end(); it1++)
		{
				cout << *it1 << endl;
		}
	}
	anykey_continue();
}
