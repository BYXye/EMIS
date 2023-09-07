#include "service_ctrl_impl.h"

ServiceCtrlImpl::ServiceCtrlImpl(void)
{
	srcMode = new ServiceModeImpl;
	srcMode->load(deptArr);
}

ServiceCtrlImpl::~ServiceCtrlImpl(void)
{
	srcMode->save(deptArr);
	delete srcMode;
}

bool ServiceCtrlImpl::addDept(Department& department)
{
	int id = get_deptid();
	department.setId(id);
	deptArr.push_back(department);
	return true;
}

int ServiceCtrlImpl::delDept(int id)
{
	vector<Department>::iterator it;
	for(it = deptArr.begin(); it!=deptArr.end(); it++)
	{
		if(it->getId() == id)
		{
			deptArr.erase(it);
			return 1;
		}
	}
	return 0;
}

vector<Department>& ServiceCtrlImpl::listDept(void)
{
	return deptArr;
}

bool ServiceCtrlImpl::addEmp(int id, Employee& employee)
{
	int new_id = get_empid();
	employee.setId(new_id);
	vector<Department>::iterator it;
	for(it = deptArr.begin(); it!=deptArr.end(); it++)
	{
		if(it->getId() == id)
		{
			(it->empArr).push_back(employee);
			return true;
		}
	}
	return false;	
}

bool ServiceCtrlImpl::delEmp(int id)
{
	vector<Department>::iterator it;
	for(it = deptArr.begin(); it!=deptArr.end(); it++)
	{	
		vector<Employee>::iterator it1;
		for(it1 = (it->empArr).begin(); it1!=(it->empArr).end(); it1++)
		{
			if(it1->getId() == id)
			{
				(it->empArr).erase(it1);
				return true;
			}
		}
	}
	return false;	
}

bool ServiceCtrlImpl::modEmp(int id, Employee& employee)
{
	vector<Department>::iterator it;
	for(it = deptArr.begin(); it!=deptArr.end(); it++)
	{	
		vector<Employee>::iterator it1;
		for(it1 = (it->empArr).begin(); it1!=(it->empArr).end(); it1++)
		{
			if(it1->getId() == id)
			{
				it1->setAge(employee.getAge());
				it1->setName(employee.getName());
				it1->setSex(employee.getSex());
				return true;
			}
		}
	}
	return false;	
}

Department* ServiceCtrlImpl::listEmp(int id)
{
	vector<Department>::iterator it;
	for(it = deptArr.begin(); it!=deptArr.end(); it++)
	{
		if(it->getId() == id)
		{
			return &(*it);
		}
	}
	return NULL;	
}

vector<Department>& ServiceCtrlImpl::listAllEmp(void)
{
	return deptArr;
}

