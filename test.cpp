#include<iostream>
#include<string>
#define max 1000
using namespace std;
struct person
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_address;
};
struct addressbooks
{
	struct person personarr[max];
	int m_size;
};
//1.添加联系人
void addperson(addressbooks* abs)
{
	//判断通讯录是否已满，如果满了则不添加
	if (abs->m_size == max)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名" <<endl;
		cin >> name;
		abs->personarr[abs->m_size].m_name = name;
		//性别
		cout << "请输入性别： " << endl;
		cout << "1-----男" << endl;
		cout << "2-----女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarr[abs->m_size].m_sex = sex;
				break;
			}
			cout << "输入有误，请重新输入: " << endl;
		}
		//年龄
		cout << "请输入年龄：" <<endl;
		int  age = 0;
		cin >> age;
		abs->personarr[abs->m_size].m_age = age;
		//电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personarr[abs->m_size].m_phone = phone;
		//住址
		cout << "请输入住址：" << endl;
		string address;
		cin >> address;
		abs->personarr[abs->m_size].m_address = address;
		//更新通讯录人数
		abs->m_size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
//2.显示联系人
void showperson(addressbooks * abs)
{
	//判断通讯录中是否有联系人
	if (abs->m_size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名:" << abs->personarr[i].m_name << "\t";
			cout << "性别：" << (abs->personarr[i].m_sex==1?"男":"女") << "\t";
			cout << "年龄：" << abs->personarr[i].m_age << "\t";
			cout << "电话：" << abs->personarr[i].m_phone << "\t";
		    cout <<"住址:" << abs->personarr[i].m_address << endl;

		}
	}
	system("pause");
	system("cls");
}
//检测联系人是否存在,如果存在，返回联系人在数组中的具体位置，如果不存在，返回-1
int isexist(addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if ( abs->personarr[i].m_name==name)
		{
			return i;
		}
	}
	return -1;
}
//删除联系人
void deleteperson(addressbooks* abs)
{
	cout << "请输入你要删除的联系人的名字：" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personarr[i] = abs->personarr[i + 1];
		}
		abs->m_size--;
	}
	cout << "删除成功" << endl;
	system("pause");
	system("cls");
}
 
//查找联系人
void findperson(addressbooks* abs)
{
	cout << "请输入你要查找的联系人的名字：" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		cout << "姓名:" << abs->personarr[ret].m_name << "\t";
		cout << "性别：" << (abs->personarr[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personarr[ret].m_age << "\t";
		cout << "电话：" << abs->personarr[ret].m_phone << "\t";
		cout << "住址:" << abs->personarr[ret].m_address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void modifyperson(addressbooks* abs)
{
	cout << "请输入要修改的联系人的名字" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personarr[ret].m_name = name;
		//性别
		cout << "请输入性别： " << endl;
		cout << "1-----男" << endl;
		cout << "2-----女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarr[ret].m_sex = sex;
				break;
			}
			cout << "输入有误，请重新输入: " << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int  age = 0;
		cin >> age;
		abs->personarr[ret].m_age = age;
		//电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personarr[ret].m_phone = phone;
		//住址
		cout << "请输入住址：" << endl;
		string address;
		cin >> address;
		abs->personarr[ret].m_address = address;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//清空联系人
void clearperson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
//菜单界面
void showmenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}
int main()
{
	//创建通讯录结构体变量
	addressbooks abs;
	abs.m_size = 0;

	int select = 0;//创建用户选择输入的变量
	while (true)
	{
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人
			addperson(&abs);//用地址传递
			break;
		case 2://2、显示联系人
			showperson(&abs);
			break;
		case 3://3、删除联系人
		/*{
			cout << "请输入删除联系人姓名：" << endl;
			string name;
			cin >> name;
			if (isexist(&abs, name) == -1)
				cout << "查无此人" << endl;
			else
				cout << "找到此人" << endl;
		}*/
			deleteperson(&abs);
			break;
		case 4://4、查找联系人
			findperson(&abs);
			break;
		case 5://5、修改联系人
			modifyperson(&abs);
			break;
		case 6://6、清空联系人
			clearperson(&abs);
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}