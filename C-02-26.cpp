#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//void bubblesort(int * arr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; len++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 2,31,32,13,6,323,52,0,49,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, len);
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << " ";
//	system("pause");
//	return 0;
//}
//void bubbleSort(int* arr, int len)  //int * arr Ҳ����дΪint arr[]
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////��ӡ���麯��
//void printArray(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//int main() {
//
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(int);
//
//	bubbleSort(arr, len);
//
//	printArray(arr, len);
//
//	system("pause");
//
//	return 0;
//}
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//student s1 = { "lucas",20,80 };
//student* p = &s1;
//#include<string>
//int main()
//{
//	cout << s1.name << " " << p->age << " " << s1.score << endl;
//	system("pause");
//	return 0;
//}
//struct student
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	struct student sarr[5];
//};
//void allocatespace(struct teacher tarr[], int len)
//{
//	string nameseed = "djoqwe";
//	for (int i = 0; i < len; i++)
//	{
//		tarr[i].name = "teacher_";
//		tarr[i].name += nameseed[i];
//		for (int j = 0; j < 5; j++)
//		{
//		
//			tarr[i].sarr[i].name = nameseed[i];
//			int random = rand() % 60 + 40;
//			tarr[i].sarr[i].score = random;
//		}
//	}
//}
//void printTeachers(teacher tarr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tarr[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t������" << tarr[i].sarr[j].name << " ������" << tarr[i].sarr[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	struct teacher tarr[3];
//	int len = sizeof(tarr) / sizeof(tarr[0]);
//	allocatespace(tarr, len);
//	system("pause");
//	return 0;
//}
//struct Student
//{
//	string name;
//	int score;
//};
//struct Teacher
//{
//	string name;
//	Student sArray[5];
//};
//
//void allocateSpace(Teacher tArray[], int len)
//{
//	string tName = "��ʦ";
//	string sName = "ѧ��";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].name = tName + nameSeed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = sName + nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//
//void printTeachers(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>
//
//	Teacher tArray[3]; //��ʦ����
//
//	int len = sizeof(tArray) / sizeof(Teacher);
//
//	allocateSpace(tArray, len); //��������
//
//	printTeachers(tArray, len); //��ӡ����
//
//	system("pause");
//
//	return 0;
//}
struct hero
{
	string name;
	int age;
	string sex;
};
void bubblesort(hero arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void print(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex << " ���䣺 " << arr[i].age << endl;
	}
}
int main()
{
	struct hero arr[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(arr) / sizeof(hero);
	bubblesort(arr,  len);
	print(arr, len);
	system("pause");
	return 0;
}
