#include<iostream>

using namespace std;

struct student {
	int data;
	student* next;
};

void scanfstudent(student* a);
int main() {
	student* s = new student();
	s->data = 1;
	s->next = NULL;
	
	for (int i = 1; i <= 7; i++)
	{
		//cin >> i;
		student* p = new student();   //头插法
		p->data = i;
		p->next = s->next;
		s->next = p;
		//cout << i << endl;
	}
	scanfstudent(s);
    system("pause");
	return 0;
}

void scanfstudent(student* a)   //输出链表
{
    student *p = a;
	while (1)
	{
			
			p = p->next;
            if(p==NULL) break;
            cout << (p->data) <<endl;
	}
}
