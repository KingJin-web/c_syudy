#include<iostream>
#include<cstring>
#define PERSON 10 
#define COURSE 3
using namespace std;
struct Student{
	char name[10];
	char numbers[10];
	int  age;
	int  score[COURSE];
	int  Total_score;
};
void sort(int a[],int n){//选择排序法  大->小 
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[k])
				k=j;
		}
		t=a[k];
		a[k]=a[i];
		a[i]=t;
	}
}
int main(){
	Student student[PERSON],student_T,max1[COURSE];
	int i,j,k,t,m;
	cout<<"				姓名	学号	年龄	语文成绩	数学成绩	英语成绩"<<endl;
	for(i=0;i<PERSON;i++){
		cout<<"现在请输入第"<<i+1<<"位小学生的信息";
		cin>>student[i].name>>student[i].numbers>>student[i].age;
		if(student[i].age<6||student[i].age>14){
			cout<<"年龄超出有效范围，请重新输入：";
			cin>>student[i].age;
		}
		for(j=0;j<COURSE;j++){
			cin>>student[i].score[j];
			if(student[i].score[j]<0||student[i].score[j]>100){
				cout<<"成绩超出有效范围，请重新输入第"<<j+1<<"门成绩：";
				cin>>student[i].score[j];
			}
		}		
	}
	for(i=0;i<PERSON;i++)//求总分 
		student[i].Total_score=student[i].score[0]+student[i].score[1]+student[i].score[2];
	
	cout<<"\n"<<"\n"<<"---------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"			姓名	学号	年龄	语文成绩	数学成绩	英语成绩	总分"<<endl;			 
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;			
	for(i=0;i<PERSON;i++){
		cout<<"第"<<i+1<<"位小学生的信息"<<"\t"<<student[i].name<<"\t"<<student[i].numbers<<"\t"<<student[i].age<<"\t";
		for(j=0;j<COURSE;j++)
			cout<<student[i].score[j]<<"\t"<<"\t";
		cout<<student[i].Total_score<<endl;
		} 
	for(i=0;i<PERSON-1;i++){//总分排序
		k=i;
		for(j=i+1;j<PERSON;j++){
			if(student[j].Total_score>student[k].Total_score)
				k=j;
		}
		student_T=student[k];
		student[k]=student[i];
		student[i]=student_T;
	}
	cout<<"\n"<<"\n"<<"	总分排名"<<endl; 
	cout<<"----------------------"<<endl;
	cout<<"排名	姓名	总分"<<endl;
	cout<<"----------------------"<<endl;
	for(i=0;i<PERSON;i++)//输出总分排名 
		cout<<i+1<<"\t"<<student[i].name<<"\t"<<student[i].Total_score<<endl;

	for(m=0;m<COURSE;m++){//最高分排序
		for(i=0;i<PERSON-1;i++){
			k=i;
			for(j=i+1;j<PERSON;j++){
				if(student[j].score[m]>student[k].score[m])
					k=j;
			}
			student_T=student[k];
			student[k]=student[i];
			student[i]=student_T;
		}
		max1[m]=student[0];
	}
	cout<<"\n"<<"\n"<<"		单科最高分"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"科目	最高分	姓名	学号	年龄"<<endl;
	cout<<"------------------------------------"<<endl;
	for(i=0;i<COURSE;i++){
		if(i==0)                 //输出科目 、最高分  
			cout<<"语文"<<"\t"<<max1[0].score[0]<<"\t";
		else if(i==1)
				cout<<"数学"<<"\t"<<max1[1].score[1]<<"\t";
			else if(i==2)
					cout<<"英语"<<"\t"<<max1[2].score[2]<<"\t";
		cout<<max1[i].name<<"\t"<<max1[i].numbers<<"\t"<<max1[i].age<<endl;
	}
	system("pause");
	return 0;
}