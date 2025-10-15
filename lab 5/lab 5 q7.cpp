#include<iostream>
using namespace std;
class ClassSchedule{
	public:
		string day;
		string time;
		ClassSchedule(string d,string t){
			day=d;
			time=t;
		}
	void showSchedule(){
		cout<<"Schedule: "<<day<<" at "<<time<<endl;
	}	
};
class Student{
	private:
		const int enrollmentID;
	public:
	Student(int id):enrollmentID(id){}
    void showStudent() const{
	cout<<"Student Enrollment ID: "<<enrollmentID<<endl;
	}
};
class CourseSection{
	private:
		string sectionName;
		ClassSchedule schedule;
		Student* students[10];
		int studentCount;
	static int totalSections;
	public:
	CourseSection(string name,string day,string time): sectionName(name),schedule(day,time){
		studentCount=0;
		totalSections++;
	}
	void addStudent(Student*s){
		if(studentCount<10){
			students[studentCount++]=s;
		}
	}
	 void showDetails() {
        cout << "\nSection: " << sectionName << endl;
        schedule.showSchedule();
        cout << "Enrolled Students:\n";
        for (int i=0;i<studentCount;i++) {
            students[i]->showStudent();
        }
    }
	static int getTotalSections(){
		return totalSections;
	}
};
int CourseSection::totalSections=0;
int main(){
		Student s1(1001);
		Student s2(1003);
		Student s3(1007);
	CourseSection cs1("BCS-A","Monday","10:00 AM");	
	cs1.addStudent(&s1);
    cs1.addStudent(&s2);
    cs1.addStudent(&s3);	
    cs1.showDetails();
    cout<<"Total Course Sections this sems: "<<CourseSection::getTotalSections()<<endl;
    
}
