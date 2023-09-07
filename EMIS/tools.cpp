#include "tools.h"

//	键值获取
char get_cmd(char start, char end)
{
	cout << "----------------" << endl;
	cout << "请输入指令" << endl;
	stdin->_IO_read_ptr = stdin->_IO_read_end;
	for(;;)
	{
		char cmd = getch();
		if(start <= cmd && cmd <= end)
		{
			cout << cmd << endl;
			return cmd;
		}
	}
}

//	按任意键继续
void anykey_continue(void)
{
	stdin->_IO_read_ptr = stdin->_IO_read_end;
	cout << "按任意键继续" << endl;
	getch();
}

//	获取id号
int get_mgrid(void)
{
	int m_id;
	int d_id;
	int e_id;
	fstream fs(ID_PATH);
	if(!(fs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{	
		fs >> m_id >> d_id >> e_id;
		m_id++;
		fs.seekg(0);
		fs << m_id << " " << d_id << " " << e_id;  
		fs.close();
	}
	return m_id-1;		
}


int get_deptid(void)
{
	int m_id;
	int d_id;
	int e_id;
	fstream fs(ID_PATH);
	if(!(fs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{	
		fs >> m_id >> d_id >> e_id;
		d_id++;
		fs.seekg(0);
		fs << m_id << " " << d_id << " " << e_id;  
		fs.close();
	}
	return d_id-1;	
}

int get_empid(void)
{
	int m_id;
	int d_id;
	int e_id;
	fstream fs(ID_PATH);
	if(!(fs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{	
		fs >> m_id >> d_id >> e_id;
		e_id++;
		fs.seekg(0);
		fs << m_id << " " << d_id << " " << e_id;    
		fs.close();
	}
	return e_id-1;	
}
