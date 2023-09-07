#include "manager_view_impl.h"

int main(int argc, char* argv[])
{
	ManagerView* mng_view = new ManagerViewImpl;
	for(;;)
	{
		system("clear");
		cout << "***********" << endl;
		cout << "1.超级管理员" << endl;
		cout << "2.业务管理员" << endl;
		cout << "3.退出系统" << endl;
		switch(get_cmd('1', '3'))
		{
			case '1': mng_view->loginManager(); break;
			case '2': mng_view->loginService(); break;
			case '3': delete mng_view; return 0;
		}
	}		
}
