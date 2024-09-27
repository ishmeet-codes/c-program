#include<iostream>
using namespace std;
class student_info{
	private:
	char name[30];
	int age;
	char gender;
	public:
	void getBasicInfo(void);
	void putBasicInfo(void);
};
void student_info::getBasicInfo(void){
	cout<<"Enter Student's Information : \n";
	cout<<"\nStudent's name :- ";
	cin>>name;
	cout<<"\nStudent's age :- ";
	cin>>age;
	cout<<"\nStudent's gender :- ";
	cin>>gender;
}
void student_info::putBasicInfo(void){
cout<<"\nName"<<"\t"<<"Age"<<"\t"<<"Gender";
cout<<"\n"<<name<<"\t"<<age<<"\t"<<gender;
}
class school_info : public student_info {
	private:
		string scname;
		int sccode;
		int yos;
 public:
 	public:
    void getSchoolInfo(void);
    void putSchoolInfo(void);
};
void school_info::getSchoolInfo(void){
	cout<<"Enter School's Information : \n";
	cout<<"\nSchool's name :- ";
	cin>>scname;
	cout<<"\nSchool's code :- ";
	cin>>sccode;
	cout<<"\nYears of studying :- ";
	cin>>yos;
}
class result_info : public student_info , public school_info{
	private:
    int totalm;
    float perc;
    char grade;

public:
    void getResultInfo(void);
    void putResultInfo(void);
};
void result_info::getResultInfo(void)
{
    cout << "Enter student's result information :- " << endl;
    cout << "Total Marks :- ";
    cin >> totalm;
    perc = (float)((totalm * 100) / 500);
    cout << "Grade :- ";
    cin >> grade;
}

void result_info::putResultInfo(void)
{
    cout<<"\nTotal"<<"\t"<<"Percentage"<<"\t"<<"Grade";
	cout<<"\n"<<totalm<<" \t "<< perc<<"\t\t"<<grade;
}

int main(){
	result_info std;
	std.getBasicInfo();
	std.getSchoolInfo();
    std.getResultInfo();
    
    std.putBasicInfo();
    std.putResultInfo();
	
    return 0;
}


