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
//1.�����ϵ��
void addperson(addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������������
	if (abs->m_size == max)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "����������" <<endl;
		cin >> name;
		abs->personarr[abs->m_size].m_name = name;
		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1-----��" << endl;
		cout << "2-----Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarr[abs->m_size].m_sex = sex;
				break;
			}
			cout << "������������������: " << endl;
		}
		//����
		cout << "���������䣺" <<endl;
		int  age = 0;
		cin >> age;
		abs->personarr[abs->m_size].m_age = age;
		//�绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personarr[abs->m_size].m_phone = phone;
		//סַ
		cout << "������סַ��" << endl;
		string address;
		cin >> address;
		abs->personarr[abs->m_size].m_address = address;
		//����ͨѶ¼����
		abs->m_size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
//2.��ʾ��ϵ��
void showperson(addressbooks * abs)
{
	//�ж�ͨѶ¼���Ƿ�����ϵ��
	if (abs->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "����:" << abs->personarr[i].m_name << "\t";
			cout << "�Ա�" << (abs->personarr[i].m_sex==1?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personarr[i].m_age << "\t";
			cout << "�绰��" << abs->personarr[i].m_phone << "\t";
		    cout <<"סַ:" << abs->personarr[i].m_address << endl;

		}
	}
	system("pause");
	system("cls");
}
//�����ϵ���Ƿ����,������ڣ�������ϵ���������еľ���λ�ã���������ڣ�����-1
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
//ɾ����ϵ��
void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�˵����֣�" << endl;
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
	cout << "ɾ���ɹ�" << endl;
	system("pause");
	system("cls");
}
 
//������ϵ��
void findperson(addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�˵����֣�" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		cout << "����:" << abs->personarr[ret].m_name << "\t";
		cout << "�Ա�" << (abs->personarr[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personarr[ret].m_age << "\t";
		cout << "�绰��" << abs->personarr[ret].m_phone << "\t";
		cout << "סַ:" << abs->personarr[ret].m_address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ��
void modifyperson(addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ�˵�����" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personarr[ret].m_name = name;
		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1-----��" << endl;
		cout << "2-----Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarr[ret].m_sex = sex;
				break;
			}
			cout << "������������������: " << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int  age = 0;
		cin >> age;
		abs->personarr[ret].m_age = age;
		//�绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personarr[ret].m_phone = phone;
		//סַ
		cout << "������סַ��" << endl;
		string address;
		cin >> address;
		abs->personarr[ret].m_address = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�����ϵ��
void clearperson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
//�˵�����
void showmenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}
int main()
{
	//����ͨѶ¼�ṹ�����
	addressbooks abs;
	abs.m_size = 0;

	int select = 0;//�����û�ѡ������ı���
	while (true)
	{
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addperson(&abs);//�õ�ַ����
			break;
		case 2://2����ʾ��ϵ��
			showperson(&abs);
			break;
		case 3://3��ɾ����ϵ��
		/*{
			cout << "������ɾ����ϵ��������" << endl;
			string name;
			cin >> name;
			if (isexist(&abs, name) == -1)
				cout << "���޴���" << endl;
			else
				cout << "�ҵ�����" << endl;
		}*/
			deleteperson(&abs);
			break;
		case 4://4��������ϵ��
			findperson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyperson(&abs);
			break;
		case 6://6�������ϵ��
			clearperson(&abs);
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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