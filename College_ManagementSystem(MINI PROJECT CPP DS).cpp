#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

/*********************LOG IN*************************/
class log_In
{
	char username[50];
	char password[50];
	int a = 0;
	
	public :
		void logIn();
};

void log_In :: logIn()
{
	do
	{
	
		cout<<endl<<"\t\t\tEnter username:   ";
		cin>>username;
		cout<<endl<<"\t\t\tEnter password:   ";
		cin>>password;
		if(strcmp(username,"admin") == 0 && strcmp(password,"admin") == 0)
		{
			cout<<endl<<"You are in the system";
			cout<<endl;
			
			break;
			
		}
		else
		{
			a = a + 1;
			cout<<endl;
			cout<<"*Oops!! Incorrect Username and Password"<<endl;
			cout<<"Number of attempts remain : ";
		
			cout<<3 - a;
			cout<<endl<<endl;
			if(a >= 3)
			{
				cout<<"Too many Incorrect Attempts...";
				exit(0);
				break;
			}
		}
		
	}while(true);
}
/****************************************************/

//***********STUDENT MODULE**************
class Student_Data
{
	unsigned int Student_Id;
	string Student_Name;
	string Department;
	int Lec_Attended_PerWeek;
	float Last_Year_Percentage;
	unsigned long long Contact_No;
	string Address;
	string Student_Blood_Group;
	string Guardian_Name;
	unsigned long long Guardian_contact_No;
	string Guardian_Address;
            
    public:
		Student_Data *prev = NULL;
	    Student_Data *next = NULL;

    public:
    	Student_Data()
		{
			
		}   
		Student_Data(const Student_Data& record)
    	{
    		this->Student_Id = record.Student_Id;
			this->Student_Name = record.Student_Name;
			this->Department = record.Department;
			this->Lec_Attended_PerWeek = record.Lec_Attended_PerWeek;
			this->Last_Year_Percentage = record.Last_Year_Percentage;
			this->Contact_No = record.Contact_No;
			this->Address = record.Address;
			this->Student_Blood_Group = record.Student_Blood_Group;
			this->Guardian_Name = record.Guardian_Name;
			this->Guardian_contact_No = record.Guardian_contact_No;
			this->Guardian_Address = record.Guardian_Address;
			
		} 	
    	void set_Student_Id(unsigned int Student_Id)
		{
			this->Student_Id = Student_Id;
		}
		unsigned int get_Student_Id()
		{
			return this->Student_Id;
		}
		void set_Student_Name(string Student_Name)
		{
		    this->Student_Name = Student_Name;
		}
		string get_Student_Name()
	    {
	        return this->Student_Name;
	    }
		void set_Department(string Department)
		{
		    this->Department = Department;
		}
		string get_Department()
	    {
	        return this->Department;
	    }
		void set_Attendence(int Lec_Attended_PerWeek)
		{
			this->Lec_Attended_PerWeek = Lec_Attended_PerWeek;
		}
		int get_Attendence()
	    {
	        return this->Lec_Attended_PerWeek;
	    }
		void set_Last_Year_Percentage(float Last_Year_Percentage )
		{
		    this->Last_Year_Percentage = Last_Year_Percentage;
		}
		float get_Last_Year_Percentage()
	    {
	        return this->Last_Year_Percentage;
	    }
		void set_Contact_No(unsigned long long Contact_No)
		{
		    this->Contact_No = Contact_No;
		}
		unsigned long long get_Contact_No()
	    {
	        return this->Contact_No;
	    }
		void set_Address(string Address)
		{
		    this->Address = Address;
		}
		string get_Address()
	    {
	        return this->Address;
	    }
		void set_Blood_Group(string Student_Blood_Group)
		{
		    this->Student_Blood_Group = Student_Blood_Group;
		}
		string get_Blood_Group()
	    {
	        return this->Student_Blood_Group;
	    }
		void set_Guardian_Name(string Guardian_Name)
		{
		    this->Guardian_Name = Guardian_Name;
		}
		string get_Guardian_Name()
	    {
	        return this->Guardian_Name;
	    }
		void set_Guardian_contact_No(unsigned long long Guardian_contact_No)
		{
		    this->Guardian_contact_No = Guardian_contact_No;
		}
		unsigned long long get_Guardian_contact_No()
	    {
	        return this->Guardian_contact_No;
	    }
	 	void set_Guardian_Address(string G_Add)
	    {
	        this->Guardian_Address = G_Add;
	    }
	    string get_Guardian_Address()
	    {
	        return this->Guardian_Address;
	    }
	    
	    friend ostream & operator <<(ostream &out, const Student_Data &record_Obj)
        {
        	out<<record_Obj.Student_Id<<endl;
        	out<<record_Obj.Student_Name<<endl;
        	out<<record_Obj.Department<<endl;
        	out<<record_Obj.Lec_Attended_PerWeek<<endl;
        	out<<record_Obj.Last_Year_Percentage<<endl;
        	out<<record_Obj.Contact_No<<endl;
        	out<<record_Obj.Address<<endl;
        	out<<record_Obj.Student_Blood_Group<<endl;
        	out<<record_Obj.Guardian_Name<<endl;
        	out<<record_Obj.Guardian_contact_No<<endl;
        	out<<record_Obj.Guardian_Address<<endl;
        	return out;
		}
		friend istream & operator >> (istream &in, Student_Data &record_Obj)
		{
			in>>record_Obj.Student_Id;
        	in>>record_Obj.Student_Name;
        	in>>record_Obj.Department;
        	in>>record_Obj.Lec_Attended_PerWeek;
        	in>>record_Obj.Lec_Attended_PerWeek;
        	in>>record_Obj.Last_Year_Percentage;
        	in>>record_Obj.Contact_No;	
			in>>record_Obj.Address;
        	in>>record_Obj.Student_Blood_Group;
        	in>>record_Obj.Guardian_Name;
        	in>>record_Obj.Guardian_contact_No;
        	in>>record_Obj.Guardian_Address;
        	
			return in;
		}
};

class Student_Admin
{
    Student_Data *head = NULL;
    Student_Data *tail = NULL;
		
	unsigned int Student_Id=1;
	string Student_Name;
	string Department;
	int Lec_Attended_PerWeek;
	float Last_Year_Percentage;
	unsigned long long Contact_No;
	string Address;
	string Student_Blood_Group;
	string Guardian_Name;
	unsigned long long Guardian_contact_No;
	string Guardian_Address;	
	    
    public:
		Student_Admin()
		{
			read();
		}
		
		void add_Record();
		void insert_Record(Student_Data*);
		void display_Record();
		void print_Record(Student_Data*);
		void search_Record();
		void delete_Record();
		void update_Record();
		void Student_Menu();
		
		void write(Student_Data* newRecord)
		{
			ofstream out_File("Student_Record.txt", ofstream::out | ofstream::app);
			out_File<<*newRecord;
			out_File.close();
		}
		
		void read()
		{
			ifstream in_File("Student_Record.txt");
			
			Student_Data temp;
			
			while(in_File>>temp)
			{
				Student_Data* newRecord = new Student_Data(temp);
				insert_Record(newRecord);
			}
			
			in_File.close();
		}
};

void Student_Admin :: Student_Menu()
{
	int choice = 0;
	while(choice != 6)
	{
		cout<<endl<<endl<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		cout<<"\n\n\t\t\t\t\t\t  Student Module\n\n";
		cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		
		cout<<endl<<endl<<"\t\t\t\t1. Add New Record.";
   		cout<<endl<<"\t\t\t\t2. Display All Records.";
   		cout<<endl<<"\t\t\t\t3. Search and Display Record.";
   		cout<<endl<<"\t\t\t\t4. Delete Record.";
   		cout<<endl<<"\t\t\t\t5. Update Record.";
   		cout<<endl<<"\t\t\t\t6. Back to Main Menu.";
   		cout<<endl<<endl<<"\t\t\t\tEnter Choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				add_Record();
				   break;
			
			case 2:
				cout<<endl<<"\t\t**********Displaying Records stored in File**********";
   				display_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				
				break;
				
			case 3:
				cout<<endl<<"\t\t**********Searching Record stored in File************";
   				search_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				
				   break;
				
			case 4:
				cout<<endl<<"\t\t**********Deleting Record from File******************";
   				delete_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				
				break;
				
			case 5:
				cout<<endl<<"\t\t**********Update Record into File******************";
   				update_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				
				break;
				
			case 6:
				break;
				
			default :
				cout<<"Choice is INVALID. Try again......";
				break;
		}
	}
}

void Student_Admin :: add_Record()
{

	Student_Data *Student_Obj = new Student_Data();
	

	Student_Obj->set_Student_Id(Student_Id);
	Student_Id++;
	
    cout<<endl<<"Name of Student : ";
    cin.sync(); 
    getline(cin,Student_Name);
    Student_Obj->set_Student_Name(Student_Name);
    
    cout<<endl<<"Department : ";
	cin.sync();
	getline(cin,Department);
	Student_Obj->set_Department(Department);
    
    cout<<endl<<"Total Attendence : ";
    cin.sync();
	cin>>Lec_Attended_PerWeek;
	Student_Obj->set_Attendence(Lec_Attended_PerWeek);
	
	cout<<endl<<"Percentage : ";
	cin.sync();
	cin>>Last_Year_Percentage;
	Student_Obj->set_Last_Year_Percentage(Last_Year_Percentage);
	
	cout<<endl<<"Contact Number : ";
	cin.sync();
	cin>>Contact_No;
	Student_Obj->set_Contact_No(Contact_No);
	
	cout<<endl<<"Student's Address : ";
	cin.sync();
	getline(cin,Address);
	
	Student_Obj->set_Address(Address);
	
	cout<<endl<<"Student's Blood Group : ";
	cin.sync();
	getline(cin,Student_Blood_Group);
	
	Student_Obj->set_Blood_Group(Student_Blood_Group);
	
	
	cout<<endl<<"Guardian Name : ";
	cin.sync();
	getline(cin,Guardian_Name);
	Student_Obj->set_Guardian_Name(Guardian_Name);
	
	cout<<endl<<"Guardian's Contact Number : ";
	cin.sync();
	cin>>Guardian_contact_No;
	Student_Obj->set_Guardian_contact_No(Guardian_contact_No);
	
	cout<<endl<<"Guardian's Address : ";
	cin.sync();
	getline(cin,Guardian_Address);
	Student_Obj->set_Guardian_Address(Guardian_Address);
    
    insert_Record(Student_Obj);
	
	write(Student_Obj);
  
  
}

void Student_Admin :: insert_Record(Student_Data* newRecord)
{
    
    if(head == NULL)
    {
    	head = newRecord;
    	tail = newRecord;
	}
	else
	{
		newRecord->prev = tail;
		tail->next = newRecord;
		tail = newRecord;
	}
	
	Student_Id++;
}

void Student_Admin :: print_Record(Student_Data* record)
{
	cout<<endl<<"Student's ID : "<<record->get_Student_Id()<<endl;
	cout<<"Student's Name : "<<record->get_Student_Name()<<endl;
	cout<<"Student's Department : "<<record->get_Department()<<endl;
	cout<<"Student's Lec Attended PerWeek : "<<record->get_Attendence()<<endl;
	cout<<"Student's Last Year Percentage : "<<record->get_Last_Year_Percentage()<<endl;
	cout<<"Student's Contact No :"<<record->get_Contact_No()<<endl;
	cout<<"Student's Address : "<<record->get_Address()<<endl;
	cout<<"Student's Blood Groupr : "<<record->get_Blood_Group()<<endl;
	cout<<"Student's  Guardian Name : "<<record->get_Guardian_Name()<<endl;
	cout<<"Student's  Guardian contact No : "<<record->get_Guardian_contact_No()<<endl;
	cout<<"Student's Guardian Address : "<<record->get_Guardian_Address()<<endl;
}
void Student_Admin :: display_Record()
{
	
	if(head == NULL)
	{
		cout<<"\t\tNo Record Found...";
	}
	else
	{
		Student_Data *temp = head;
			
		while(temp != NULL)
		{
			cout<<endl<<"Student Id : "<<temp->get_Student_Id()<<endl;
			cout<<"Student Name : "<<temp->get_Student_Name()<<endl;
			cout<<"Department : "<<temp->get_Department()<<endl;
			cout<<"Attendance : "<<temp->get_Attendence()<<endl;
			cout<<"Percentage : "<<temp->get_Last_Year_Percentage()<<endl;
			cout<<"Student Contact No : "<<temp->get_Contact_No()<<endl;
			cout<<"Student Address : "<<temp->get_Address()<<endl;
			cout<<"Student Blood Group : "<<temp->get_Blood_Group()<<endl;
			cout<<"Guardian Name : "<<temp->get_Guardian_Name()<<endl;
			cout<<"Guardian contact No : "<<temp->get_Guardian_contact_No()<<endl;
			cout<<"Guardian Address : "<<temp->get_Guardian_Address()<<endl;
			
			temp = temp->next;
		}
	}
}
void Student_Admin :: search_Record()
{
	bool flag = false;
	
	if(head == NULL)
	{
		cout<<endl<<"\t\tNo Record is available in File...";
	}
	
	else
	{
		unsigned int key;
		cout<<endl<<"\t\tKey to Search Record : ";
		cin>>key;
		
		Student_Data *temp = head;
		while(temp != NULL)
		{
			if(temp->get_Student_Id() == key)
			{
				flag = true;
				cout<<"Student's ID : "<<endl<<temp->get_Student_Id()<<endl;
				cout<<"Student's Name : "<<temp->get_Student_Name()<<endl;
				cout<<"Student's Deparment : "<<temp->get_Department()<<endl;
				cout<<"Student's Attendence : "<<temp->get_Attendence()<<endl;
				cout<<"Student's Last Year Percentage : "<<temp->get_Last_Year_Percentage()<<endl;
				cout<<"Student's Contact No :"<<temp->get_Contact_No()<<endl;
				cout<<"Student's Address : "<<temp->get_Address()<<endl;
				cout<<"Student's Blood Group : "<<temp->get_Blood_Group()<<endl;
				cout<<"Student's Guardian Name : "<<temp->get_Guardian_Name()<<endl;
				cout<<"Student's Guardian contact No : "<<temp->get_Guardian_contact_No()<<endl;
				cout<<"Student's Guardian Address : "<<temp->get_Guardian_Address()<<endl;
				
				break;
			}
			
			temp = temp->next;
		}
		
		if(flag == false)
		{
			cout<<endl<<"\t"<<"Search key is not match with any Record";
		}
	}
}

void Student_Admin :: delete_Record()
{
	bool flag = false;
	if(head == NULL)
	{
		cout<<endl<<"\t\tNo Record is available in File...";
	}
	else
	{
	
		unsigned int key;
		cout<<endl<<"\t\tKey to Delete Record : ";
		cin>>key;
		
		Student_Data *temp = head;
		while(temp != NULL)
		{
			if(temp->get_Student_Id() == key)
			{
				flag = true;
				if(temp == head)
				{
					head = temp->next;
				}
				
				if(temp == tail)
				{
					tail = temp->prev;
				}
				
				if(temp->next != NULL)
				{
					temp->next->prev = temp->prev;
				}
				
				if(temp->prev != NULL)
				{
					temp->prev->next = temp->next;
				}
				
				delete temp;
				cout<<"Record Deleted Successfully!!!!!"<<endl;
				break;
			}
			temp = temp->next;
		}
		
		if(flag == false)
		{
			cout<<endl<<"\t\tkey is not match with any Record";
		}
	}
	
}

void Student_Admin :: update_Record()
{
	
	bool flag = false;
	if(head == NULL)
	{
		cout<<endl<<"\t\tNo Record is available in File...";
	}
	
	else
	{
		unsigned int key;
		int ch;
		char ans;
		cout<<endl<<"\t\tKey to Update Record : ";
		cin>>key;
		
		Student_Data *temp = head;
		while(temp != NULL)
		{
			if(temp->get_Student_Id() == key)
			{
				flag = true;
				do
				{
					cout<<"\nWHAT DO YOU WANT TO UPDATE \n1.Student_Name\n2.Department\n3.Lec_Attended_PerWeek\n4.percentage\n5.Student_Contact_No\n6.Student_Address\n7.Student_Blood_Group\n8.Name_Of_Guardian\n9.Guardian_Mobile_No\n10.Guardian_Address\n";
					cout<<"Enter the Choice:";
					cin>>ch;
					switch(ch)
					{
						case 1:
							cout<<"ENTER NEW Name of Student = ";
							cin.ignore();
							getline(cin,Student_Name);
			
							temp->set_Student_Name(Student_Name);
							break;
							
						case 2:
							cout<<"ENTER the new Deparment = ";
							cin.ignore();
							getline(cin,Department);
			
							temp->set_Department(Department);
							break;
						
						case 3:
							cout<<"ENTER NEW Lec_Attended_PerWeek = ";
							cin>>Lec_Attended_PerWeek;
							temp->set_Attendence(Lec_Attended_PerWeek);
							break;
							
						case 4:
							cout<<"ENTER NEW percentage = ";
							cin.ignore();
							cin>>Last_Year_Percentage;
							temp->set_Last_Year_Percentage(Last_Year_Percentage);
							break;
						case 5:
							cout<<"ENTER the new Student_M_No = ";
							cin.ignore();
							cin>>Contact_No;
							temp->set_Contact_No(Contact_No);
							break;
						case 6:
							cout<<"ENTER NEW Student_Address = ";
							cin.ignore();
							getline(cin,Address);
							temp->set_Address(Address);
							break;
						case 7:
							cout<<"ENTER NEW Student_Blood_Group = ";
							cin.ignore();
							getline(cin,Student_Blood_Group);
			
							temp->set_Blood_Group(Student_Blood_Group);
							break;
							
						case 8:
							cout<<"ENTER NEW Name_Of_Guardian = ";
							cin.ignore();
							getline(cin,Guardian_Name);
			
							temp->set_Guardian_Name(Guardian_Name);
							break;
						case 9:
							cout<<"ENTER NEW Guardian_Mobile_No = ";
							cin.ignore();
							cin>>Guardian_contact_No;
			
							temp->set_Guardian_contact_No(Guardian_contact_No);
							break;
						case 10:
							cout<<"ENTER NEW Guardian_Address = ";
							cin.ignore();
							getline(cin,Guardian_Address);
							temp->set_Guardian_Address(Guardian_Address);
							break;
					}
				cout<<"Update Record Successfully..."<<endl;
				cout<<"DO YOU WANT TO CONTINUE UPDATING [y/n]";
				cin>>ans;
				}while(ans=='y');
			
			
			}
			temp = temp->next;
		}
		
		if(flag == false)
		{
			cout<<endl<<"\t\tSearch key is not match with any Record";
		}
	}
}


/****************************************************/


/***********TEACHER MODULE**************/
class Teacher_Record
{
	unsigned int teacher_Id;
	string teacher_Name;
	string teacher_Qualification;
	string teacher_Experience;
	string teacher_Lec_Per_Week;
	string teacher_Address;
	string teacher_Subject;
	unsigned long long teacher_Phone_No;
	unsigned long long teacher_Emergency_contact;
	string teacher_Blood_Group;
            
    public:
		Teacher_Record *prev = NULL;
	    Teacher_Record *next = NULL;

    public:
    	
    	Teacher_Record()
    	{
		}
		
    	Teacher_Record(const Teacher_Record& record)
    	{
    		this->teacher_Id = record.teacher_Id;
			this->teacher_Name = record.teacher_Name;
			this->teacher_Qualification = record.teacher_Qualification;
			this->teacher_Experience = record.teacher_Experience;
			this->teacher_Lec_Per_Week = record.teacher_Lec_Per_Week;
			this->teacher_Address = record.teacher_Address;
			this->teacher_Subject = record.teacher_Subject;
			this->teacher_Phone_No = record.teacher_Phone_No;
			this->teacher_Emergency_contact = record.teacher_Emergency_contact;
			this->teacher_Blood_Group = record.teacher_Blood_Group;
		}
    	
    	void set_Teacher_Id(unsigned int teacher_Id)
    	{
    		this->teacher_Id = teacher_Id;
		}
		
		unsigned int get_Teacher_Id()
		{
			return this->teacher_Id;
		}
		
	    void set_Teacher_Name(string teacher_Name)
	    {
	        this->teacher_Name = teacher_Name;
	    }
	    
	    string get_Teacher_Name()
	    {
	        return this->teacher_Name;
	    }
	
	    void set_Teacher_Qualification(string teacher_Qualification)
	    {
	        this->teacher_Qualification = teacher_Qualification;
	    }
	    
	    string get_Teacher_Qualification()
	    {
	        return this->teacher_Qualification;
	    }
	
	    void set_Teacher_Experience(string teacher_Experience)
	    {
	    	this->teacher_Experience = teacher_Experience;
	    }
	
		string get_Teacher_Experience()
	    {
	    	return this->teacher_Experience;
	    }
	
	    void set_Teacher_Lec_Per_Week(string teacher_Lec_Per_Week)
	    {
	        this->teacher_Lec_Per_Week = teacher_Lec_Per_Week;
	    }
	    
	    string get_Teacher_Lec_Per_Week()
	    {
	        return this->teacher_Lec_Per_Week;
	    }
	    
	    void set_Teacher_Subject(string teacher_Subject)
	    {
	        this->teacher_Subject = teacher_Subject;
	    }
	    
	    string get_Teacher_Subject()
	    {
	        return this->teacher_Subject;
	    }
	
	    void set_Teacher_Address(string teacher_Address)
	    {
	        this->teacher_Address = teacher_Address;
	    }
	
		string get_Teacher_Address()
	    {
	        return this->teacher_Address;
	    }
	
		void set_Teacher_Phone_No(unsigned long long teacher_Phone_No)
	    {
	        this->teacher_Phone_No = teacher_Phone_No;
	    }
	
		unsigned long long get_Teacher_Phone_No()
	    {
	        return this->teacher_Phone_No;
	    }
	
		void set_Teacher_Emergency_contact(unsigned long long teacher_Emergency_contact)
	    {
	        this->teacher_Emergency_contact = teacher_Emergency_contact;
	    }
	
		unsigned long long get_Teacher_Emergency_contact()
	    {
	        return this->teacher_Emergency_contact;
	    }
	    
	 	void set_Teacher_Blood_Group(string teacher_Blood_Group)
	    {
	        this->teacher_Blood_Group = teacher_Blood_Group;
	    }
	    
	    string get_Teacher_Blood_Group()
	    {
	        return this->teacher_Blood_Group;
	    }
	    
	    friend ostream & operator <<(ostream &out, const Teacher_Record &record_Obj)
        {
        	out<<record_Obj.teacher_Id<<endl;
        	out<<record_Obj.teacher_Name<<endl;
        	out<<record_Obj.teacher_Qualification<<endl;
        	out<<record_Obj.teacher_Experience<<endl;
        	out<<record_Obj.teacher_Lec_Per_Week<<endl;
        	out<<record_Obj.teacher_Subject<<endl;
        	out<<record_Obj.teacher_Address<<endl;
        	out<<record_Obj.teacher_Phone_No<<endl;
        	out<<record_Obj.teacher_Emergency_contact<<endl;
        	out<<record_Obj.teacher_Blood_Group<<endl;
        	
        	return out;
		}
		
		friend istream & operator >> (istream &in, Teacher_Record &record_Obj)
		{
			in>>record_Obj.teacher_Id;
        	in>>record_Obj.teacher_Name;
//        	getline(in, record_Obj.teacher_Name, '\n');
//        	getline(in, record_Obj.teacher_Qualification,'\n');
//        	getline(in, record_Obj.teacher_Experience,'\n');
//        	getline(in, record_Obj.teacher_Lec_Per_Week,'\n');
//        	getline(in, record_Obj.teacher_Subject,'\n');
//        	getline(in, record_Obj.teacher_Address,'\n');
        	
        	in>>record_Obj.teacher_Qualification;
        	in>>record_Obj.teacher_Experience;
        	in>>record_Obj.teacher_Lec_Per_Week;
        	in>>record_Obj.teacher_Subject;
        	in>>record_Obj.teacher_Address;	
			in>>record_Obj.teacher_Phone_No;
        	in>>record_Obj.teacher_Emergency_contact;
//        	getline(in, record_Obj.teacher_Blood_Group,'\n');
        	in>>record_Obj.teacher_Blood_Group;
        	
			return in;
		}
    
};

class Teacher_Admin
{
    Teacher_Record *head = NULL;
    Teacher_Record *tail = NULL;

	unsigned int teacher_Id = 1;
	string teacher_Name;
	string teacher_Qualification;
	string teacher_Experience;
	string teacher_Lec_Per_Week;
	string teacher_Subject;
	string teacher_Address;
	unsigned long long teacher_Phone_No;
	unsigned long long teacher_Emergency_contact;
	string teacher_Blood_Group;
            
            
    public:
    	Teacher_Admin()
    	{
    		//ifstream in("Teacher_Record.txt");
    		read();
		}
                
	    void add_Record();
	    void insert_Record(Teacher_Record*);
	    void display_Record();
	    void print_Record(Teacher_Record*);
	    void search_Record();
	    void delete_Record();
	    void update_Record();
	    void teacher_Menu();
	    
	     void write(Teacher_Record* newRecord)
		{
			ofstream out_File("Teacher_Record.txt", ofstream::out | ofstream::app);
			out_File<<*newRecord;
			out_File.close();
		}
		
		void read()
		{
			ifstream in_File("Teacher_Record.txt");
			
			Teacher_Record temp;
			
			while(in_File>>temp)
			{
				Teacher_Record* newRecord = new Teacher_Record(temp);
				insert_Record(newRecord);
			}
			
			
			in_File.close();
		}
                
};

void Teacher_Admin :: teacher_Menu()
{
   
   int choice = 0;
   while(choice != 6)
   {
   	
   		cout<<endl<<endl<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		cout<<"\n\n\t\t\t\t\t\t  Teacher Module\n\n";
		cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";

   		cout<<endl<<endl<<"\t\t\t\t1. Add New Record.";
   		cout<<endl<<"\t\t\t\t2. Display All Records.";
   		cout<<endl<<"\t\t\t\t3. Search and Display Record.";
   		cout<<endl<<"\t\t\t\t4. Delete Record.";
   		cout<<endl<<"\t\t\t\t5. Update Record.";
   		cout<<endl<<"\t\t\t\t6. Back to Main Menu.";
   		cout<<endl<<endl<<"\t\t\t\tEnter Choice : ";
   		cin>>choice;
   		
   		switch(choice)
   		{
   			case 1:
   				add_Record();
				   break;
   			
   			case 2:
   				cout<<endl<<"\t\t**********Displaying Records stored in File**********";
   				display_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				break;
   				
   			case 3:
   				cout<<endl<<"\t\t**********Searching Record stored in File************";
   				search_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				
   				break;
   				
   			case 4:
   				cout<<endl<<"\t\t**********Deleting Record from File******************";
   				delete_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				break;
   				
   			case 5:
   				cout<<endl<<"\t\t**********Update Record into File******************";
   				update_Record();
   				cout<<endl<<"\t\t*****************************************************";
   				break;
   				
   			case 6:
   				break;
   				
   			default :
   				cout<<endl<<"Choice is INVALID. Try again......"<<endl;
   				break;
		}
   }
}

void Teacher_Admin :: add_Record()
{

    Teacher_Record *teacher_Obj = new Teacher_Record();
    
    teacher_Obj->set_Teacher_Id(teacher_Id);

    cout<<endl<<"Teacher's Name : ";
    cin.sync(); 
    getline(cin,teacher_Name);
    
    teacher_Obj->set_Teacher_Name(teacher_Name);

    
    
    cout<<endl<<"Teacher's Qualification : ";
    cin.sync(); 
    getline(cin,teacher_Qualification);
    
    teacher_Obj->set_Teacher_Qualification(teacher_Qualification);

    
    
    cout<<endl<<"Teacher's Experience : ";
   	cin.sync();
    getline(cin,teacher_Experience);
    
    teacher_Obj->set_Teacher_Experience(teacher_Experience);

    
    cout<<endl<<"Teacher's Lec_Per_Week : ";
   	cin.sync();
    getline(cin,teacher_Lec_Per_Week);
    
    teacher_Obj->set_Teacher_Lec_Per_Week(teacher_Lec_Per_Week);

	cout<<endl<<"Teacher's Subject : ";
    cin.sync();
    getline(cin,teacher_Subject);
    
    teacher_Obj->set_Teacher_Subject(teacher_Subject);
    
    cout<<endl<<"Teacher's Address : ";
    cin.sync();
    getline(cin,teacher_Address);
    
    teacher_Obj->set_Teacher_Address(teacher_Address);

    cout<<endl<<"Teacher's Phone No : ";
    cin.sync();
    cin>>teacher_Phone_No;
    
    teacher_Obj->set_Teacher_Phone_No(teacher_Phone_No);
    
    cout<<endl<<"Teacher's Emergency Contact : ";
    cin.sync();
    cin>>teacher_Emergency_contact;
    
    teacher_Obj->set_Teacher_Emergency_contact(teacher_Emergency_contact);
    
    cout<<endl<<"Teacher's Blood_Group : ";
    cin.sync();
    getline(cin,teacher_Blood_Group);
    
    teacher_Obj->set_Teacher_Blood_Group(teacher_Blood_Group);
    
    insert_Record(teacher_Obj);
	
	write(teacher_Obj);
  
}

void Teacher_Admin :: insert_Record(Teacher_Record* newRecord)
{
    
    if(head == NULL)
    {
    	head = newRecord;
    	tail = newRecord;
	}
	else
	{
		newRecord->prev = tail;
		tail->next = newRecord;
		tail = newRecord;
	}
	
	teacher_Id++;
}

void Teacher_Admin :: print_Record(Teacher_Record* record)
{
	cout<<endl<<"Teacher's ID : \t\t\t"<<record->get_Teacher_Id()<<endl;
	cout<<"Teacher's Name : \t\t"<<record->get_Teacher_Name()<<endl;
	cout<<"Teacher's Qualification : \t"<<record->get_Teacher_Qualification()<<endl;
	cout<<"Teacher's Experience : \t\t"<<record->get_Teacher_Experience()<<endl;
	cout<<"Teacher's Lectures Per Week : \t"<<record->get_Teacher_Lec_Per_Week()<<endl;
	cout<<"Teacher's Subject of Teaching :\t"<<record->get_Teacher_Subject()<<endl;
	cout<<"Teacher's Address : \t\t"<<record->get_Teacher_Address()<<endl;
	cout<<"Teacher's Phone Number : \t"<<record->get_Teacher_Phone_No()<<endl;
	cout<<"Teacher's Emergency Contact : \t"<<record->get_Teacher_Emergency_contact()<<endl;
	cout<<"Teacher's Blood Group : \t"<<record->get_Teacher_Blood_Group()<<endl;
}

void Teacher_Admin :: display_Record()
{
	
	if(head == NULL)
	{
		cout<<endl<<endl<<"\t\tNo Record is available in File...";
	}
	else
	{
		Teacher_Record *temp = head;
		
		//cout<<"|ID|Name|Qualification|Experience|Lectures/Week|Subject|Address|Phone No|Emergency Contact|Blood Group|"<<endl;
			
		while(temp != NULL)
		{
			print_Record(temp);
			
			temp = temp->next;
		}
	}
}
void Teacher_Admin :: search_Record()
{
	bool flag = false;
	if(head == NULL)
	{
		cout<<endl<<"\t\tNo Record is available in File...";
	}
	else
	{
		unsigned int key;
		cout<<endl<<"\t\tKey to Find Record : ";
		cin>>key;
		
		
		Teacher_Record *temp = head;
		while(temp != NULL)
		{
			if(temp->get_Teacher_Id() == key)
			{
				//cout<<"|ID|Name|Qualification|Experience|Lectures/Week|Subject|Address|Phone No|Emergency Contact|Blood Group|"<<endl;
			
				flag = true;
				
				print_Record(temp);
				
				break;
			}
			
			temp = temp->next;
		}
		
		if(flag == false)
		{
			cout<<endl<<"\t\tSearch key is not matched with any Record....";
		}
	}
}

void Teacher_Admin :: delete_Record()
{
	bool flag = false;
	if(head == NULL)
	{
		cout<<endl<<"\t\tNo Record is available in File...";
	}
	else
	{
		unsigned int key;
		cout<<endl<<"\t\tKey to Delete Record : ";
		cin>>key;
		
		Teacher_Record *temp = head;
		while(temp != NULL)
		{
			if(temp->get_Teacher_Id() == key)
			{
				flag = true;
				
				if(temp == head)
				{
					head = temp->next;
				}
				
				if(temp == tail)
				{
					tail = temp->prev;
				}
				
				if(temp->next != NULL)
				{
					temp->next->prev = temp->prev;
				}
				
				if(temp->prev != NULL)
				{
					temp->prev->next = temp->next;
				}
				cout<<"\t\tRecord has been deleted...";
				delete temp; 
				break;
				
			}
			
			temp = temp->next;
		}
		
		if(flag == false)
		{
			cout<<endl<<"\t\tSearch key is not match with any Record";
		}
	}
}

void Teacher_Admin :: update_Record()
{
	bool flag = false;
	if(head == NULL)
	{
		cout<<endl<<"\t\tNo Record is available in File...";
	}
	
	else
	{
		unsigned int key;
		cout<<endl<<"\t\tKey to Update Record : ";
		int recordNo = 0;
		cin>>key;
		
		Teacher_Record *temp = head;
		while(temp != NULL)
		{
			char yes;
			recordNo++;
	
			if(temp->get_Teacher_Id() == key)
			{
				flag = true;
				
				
				do
				{
					int choice;
					cout<<endl<<"What fields do you want to Update : ";
					cout<<endl<<"1. Name\n2. Qualification\n3. Experience\n4. Lectures Per Week\n5. Subject";
					cout<<endl<<"6. Address\n7. Phone Number\n8. Emergency Contact\n9. Blood Group";
					cout<<endl<<endl<<"Enter Your Choice : ";
					cin>>choice;
					
					switch(choice)
					{
						case 1:
							cout<<endl<<"Teacher's Name : ";
						    cin.sync(); 
						    getline(cin,teacher_Name);
						    
						    temp->set_Teacher_Name(teacher_Name);
						
						    break;
						    
						case 2:    
						    cout<<endl<<"Teacher's Qualification : ";
						    cin.sync(); 
						    getline(cin,teacher_Qualification);
						    
						    temp->set_Teacher_Qualification(teacher_Qualification);
						
						    break;
						    
						case 3:
						    cout<<endl<<"Teacher's Experience : ";
						   	cin.sync();
						    getline(cin,teacher_Experience);
						    
						    temp->set_Teacher_Experience(teacher_Experience);
						
						    break;
						    
						case 4:
						    cout<<endl<<"Teacher's Lec_Per_Week : ";
						   	cin.sync();
						    getline(cin,teacher_Lec_Per_Week);
						    
						    temp->set_Teacher_Lec_Per_Week(teacher_Lec_Per_Week);
							break;
							
						case 5:
							cout<<endl<<"Teacher's Subject : ";
						    cin.sync();
						    getline(cin,teacher_Subject);
						    
						    temp->set_Teacher_Subject(teacher_Subject);
						    break;
						    
						case 6:
						    cout<<endl<<"Teacher's Address : ";
						    cin.sync();
						    getline(cin,teacher_Address);
						    
						    temp->set_Teacher_Address(teacher_Address);
							break;
							
						case 7:
						    cout<<endl<<"Teacher's Phone No : ";
						    cin.sync();
						    cin>>teacher_Phone_No;
						    
						    temp->set_Teacher_Phone_No(teacher_Phone_No);
						    break;
						    	
						case 8:
						    cout<<endl<<"Teacher's Emergency Contact : ";
						    cin.sync();
						    cin>>teacher_Emergency_contact;
						    
						    temp->set_Teacher_Phone_No(teacher_Emergency_contact);
						    break;
						    
						case 9:
							 
							 
							 
							 
							 
						    cout<<endl<<"Teacher's Blood_Group : ";
						    cin.sync();
						    getline(cin,teacher_Blood_Group);
						    
						    temp->set_Teacher_Blood_Group(teacher_Blood_Group);
						    
						    break;
						    
						default:
						    	
						   	cout<<endl<<"Invalid Choice try again.....";
						   	break;
						   	
					}
					
					
					cout<<endl<<endl<<"Do you want to continue Updating.? [Y/N] : ";
				    cin>>yes;
				}while(yes == 'Y' || yes == 'y');
				
				ofstream ofs("Teacher_Record.txt", ios::in|ios::out|ios::binary); 
				ofs.seekp((recordNo - 1) * sizeof(Teacher_Record)); 
				ofs<<*temp;
				ofs.close(); 
				   
				cout<<"\t\tRecord has been Updated...";
				break;
			}
			
			temp = temp->next;
			
		}
		
		if(flag == false)
		{
			cout<<endl<<"\t\tSearch key is not match with any Record";
		}
	}
}



/****************************************************/
/******************Attendance Module****************/

class Attendence_Calculation
{
private : 
    string Student_Name;
    //int Lecture_Conducted_Day;
    int Lecture_Attended_Per_Day;
    float Percent_Lectures_Attended;
    unsigned int Student_Id;


public : 

    Attendence_Calculation *prev = NULL;
    Attendence_Calculation *next = NULL;

    int Total_Lectures_Conducted;
    int Lecture_Conducted_Day;

        void set_student_Id(unsigned int Student_Id)
		{
			this->Student_Id = Student_Id;
		}
		unsigned int get_student_Id()
		{
			return this->Student_Id;
		}

		void set_student_Name(string Student_Name)
		{
		    this->Student_Name = Student_Name;
		}
		string get_student_Name()
	    {
	        return this->Student_Name;
	    }

        void set_Lecture_Attended_Per_Day(int Lecture_Attended_Per_Day)
        {
            this->Lecture_Attended_Per_Day=Lecture_Attended_Per_Day;
        }
        int get_Lecture_Attended_Per_Day()
        {
            return Lecture_Attended_Per_Day;
        }

        void set_Percent_Lectures_Attended(float Percent_Lectures_Attended)
        {
            this->Percent_Lectures_Attended=Percent_Lectures_Attended;
        }
        float get_Percent_Lectures_Attended()
        {
            return Percent_Lectures_Attended;
        }

};

class Attendence_Admin
{
    Attendence_Calculation *head = NULL;
    Attendence_Calculation *tail = NULL;

    string Student_Name;
    int Lecture_Attended_Per_Day;
    float Percent_Lectures_Attended;
    unsigned int Student_Id=1;

    //int Total_Lectures_Conducted=0;
    int Lecture_Conducted_Day;

public : 
    int Create_Table();
    void update_Attendance(int);
    void display_Attendance();
    void Attendence_Menu();
};

void Attendence_Admin :: Attendence_Menu()
{
	cout<<endl<<endl<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
	cout<<"\n\n\t\t\t\t\t\t  Attendance Module\n\n";
	cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		
    int user_choice;
    cout<<endl<<"Enter total number of lecture conducted :  ";
    cin>>Lecture_Conducted_Day;

    bool isDone=true;
    while(isDone)
    {
        cout<<endl<<"======= ATTENDANCE MANAGEMENT =======";
        cout<<endl<<"1. Create Attendance.";
        cout<<endl<<"2. Update Attendance.";
		cout<<endl<<"3. Display All Records.";
		cout<<endl<<"4. Back to Main Menu.";

		cout<<endl<<"Enter your choice :  ";
		cin>>user_choice;

		switch(user_choice)
		{
            case 1 : 
                    int id;
                    id=Create_Table();
                    cout<<endl<<"Id Allocated is :  "<<id;
                    cout<<endl<<"Would you like add attendance ";
                    cout<<endl<<"Press 1 for yes \npress 0 for no : ";
                    int ch;
                    cin>>ch;
                    if(ch==1)
                        update_Attendance(id);
                        break;



			case 2 : 
			    int st_id;

			    cout<<endl<<"Enter student id to update attendance :  ";
			    cin>>st_id;

			    update_Attendance(st_id);
				   break;

			case 3 : 
				display_Attendance();
				break;

			case 4 : 
			    isDone=false;
				break;

			default  : 
				cout<<"Choice is INVALID. Try again......";
				break;
        }
    }

}
int Attendence_Admin :: Create_Table()
{
    Attendence_Calculation *Attendence_Calculation_Obj = new Attendence_Calculation();


	Attendence_Calculation_Obj->set_student_Id(Student_Id);
	Student_Id++;

    cout<<endl<<"Name of Student  :  ";
    cin.sync();
    getline(cin,Student_Name);
    Attendence_Calculation_Obj->set_student_Name(Student_Name);

    Attendence_Calculation_Obj->set_Lecture_Attended_Per_Day(0);

    Attendence_Calculation_Obj->set_Percent_Lectures_Attended(0);


    if(head == NULL)
    {
    	head = Attendence_Calculation_Obj;
    	tail = Attendence_Calculation_Obj;
	}
	else
	{
		Attendence_Calculation_Obj->prev = tail;
		tail->next = Attendence_Calculation_Obj;
		tail = Attendence_Calculation_Obj;
	}

	return Attendence_Calculation_Obj->get_student_Id();
}

void Attendence_Admin :: update_Attendance(int st_id)
{
        bool flag = false;
	if(head == NULL)
	{
		cout<<endl<<"\t"<<"No Record Found...";
	}
	else
	{
        Attendence_Calculation *temp = head;
		while(temp != NULL)
		{
			if(temp->get_student_Id() == st_id)
			{
			    flag=true;

              cout<<endl<<"Enter number of lectures student was present :  ";
              cin>>Lecture_Attended_Per_Day;

              temp->set_Lecture_Attended_Per_Day(Lecture_Attended_Per_Day);
              //int total=Lecture_Attended_Per_Day+temp->get_Lecture_Attended_Per_Day();
              //temp->set_Lecture_Attended_Per_Day(total);
                int per=(Lecture_Attended_Per_Day*100)/Lecture_Conducted_Day;
                temp->set_Percent_Lectures_Attended(per);
              //cout<<"Total is :  "<<total;

			}
        temp = temp->next;
		}

		if(flag == false)
		{
			cout<<endl<<"\t"<<"Entered key does not match with any Record";
		}
	}

}

void Attendence_Admin :: display_Attendance()
{
	if(head == NULL)
	{
		cout<<"No Record Found...";
	}
	else
	{
		Attendence_Calculation *temp = head;

		cout<<"|ID  |  Name  |  Lec Attended   |  percentage |"<<endl;

		while(temp != NULL)
		{
			cout<<endl<<temp->get_student_Id()<<"\t";
			cout<<temp->get_student_Name()<<"\t\t";
			cout<<temp->get_Lecture_Attended_Per_Day()<<"/"<<Lecture_Conducted_Day<<"\t\t";
			cout<<temp->get_Percent_Lectures_Attended()<<"%"<<"\t";

			temp = temp->next;
		}
	}

}

/***************************************************/


/***************Time Table Module******************/

#include <iostream>
using namespace std;



class subject
{
    public:
	    void S1()
		{
			cout<<"sbj1";
		}
		void S2()
		{
			cout<<"sbj2";
		}
		void S3()
		{
			cout<<"sbj3";
		}
		void S4()
		{
			cout<<"sbj4";
		}
		void S5()
		{
			cout<<"sbj5";
		}
		void S6()
		{
			cout<<"sbj6";
		}	
};


class Time_Table: public subject
{
	public:
		
		void mon()
		{
		 cout<<"\tMON   "<<"|"<<"   S1-T2   ";cout<<"|"<<"   S2-T2   "<<"|"<<"   S3-T3   "<<"|"<<"   S4-T4   "<<"|"<<"     --    "<<"|"<<"   S5-T5   "<<"|"<<"   S6-T6   "<<"|"<<endl;
		}
		void tue()
		{
		 cout<<"\tTUE   "<<"|"<<"   S2-T2   "<<"|"<<"   S3-T3   "<<"|"<<"   S4-T4   "<<"|"<<"   S5-T5   "<<"|"<<"     --    "<<"|"<<"   S6-T6   "<<"|"<<"   S1-T1   "<<"|"<<endl;
		}
		void wed()
		{
		 cout<<"\tWED   "<<"|"<<"   S3-T3   "<<"|"<<"   S4-T4   "<<"|"<<"   S5-T5   "<<"|"<<"   S6-T6   "<<"|"<<"     --    "<<"|"<<"   S1-T1   "<<"|"<<"   S2-T2   "<<"|"<<endl;
		}
		void thu()
		{
		 cout<<"\tTHU   "<<"|"<<"   S4-T4   "<<"|"<<"   S5-T5   "<<"|"<<"   S6-T6   "<<"|"<<"   S1-T1   "<<"|"<<"     --    "<<"|"<<"   S2-T2   "<<"|"<<"   S3-T3   "<<"|"<<endl;
		}
		void fri()
		{
		 cout<<"\tFRI   "<<"|"<<"   S5-T5   "<<"|"<<"   S6-T6   "<<"|"<<"   S1-T1   "<<"|"<<"   S2-T2   "<<"|"<<"     --    "<<"|"<<"   S3-T3   "<<"|"<<"   S4-T4   "<<"|"<<endl;
		}
		void sat()
		{
		 cout<<"\tSAT   "<<"|"<<"   S6-T6   "<<"|"<<"   S1-T1   "<<"|"<<"   S2-T2   "<<"|"<<"   S3-T3   "<<"|"<<"     --    "<<"|"<<"   S4-T4   "<<"|"<<"   S5-T5   "<<"|"<<endl;
		}
		
		void Time_Table_Main();
		
};

void Time_Table :: Time_Table_Main() 
{
	cout<<"TIME-TABLE"<<" :- "<<"Div-A"<<endl;
	cout<<"\tPERIOD"<<"|"<<"     1     "<<"|"<<"     2     "<<"|"<<"     3     "<<"|"<<"     4     "<<"|"<<"   BREAK   "<<"|"<<"     5     "<<"|"<<"     6     "<<"|"<<endl;
	cout<<"\tTIME  "<<"|"<<"  9am-10am "<<"|"<<" 10am-11am "<<"|"<<" 11am-12pm "<<"|"<<" 12pm-01pm "<<"|"<<"  1pm-2pm  "<<"|"<<"  2pm-3pm  "<<"|"<<"  3pm-4pm  "<<"|"<<endl;
	Time_Table obj;
	obj.mon();
	obj.tue();
	obj.wed();
	obj.thu();
	obj.fri();
	obj.sat();
}

/**************************************************/
/****************Main Function*********************/
#include<iostream>

using namespace std;


int main()
{
	int choice;
   	log_In log_Obj;
   
    cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
	cout<<"\n\n\t\t\t\t\t  COLLEGE MANAGEMENT SYSTEM\n\n";
	cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
	cout<<"\n\n\t\t\t\t\t\t:MAIN MENU:\n\n";

   	log_Obj.logIn();
   
   	Student_Admin student_Admin_Obj;
   
	Teacher_Admin teacher_Admin_Obj;
	
	Attendence_Admin attendance_Admin_Object;
	
	Time_Table Time_Table_Object;
   
   	while(true)
   	{
   		cout<<endl<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		cout<<"\n\n\t\t\t\t\t  COLLEGE MANAGEMENT SYSTEM\n\n";
		cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		cout<<"\n\n\t\t\t\t\t\t:MAIN MENU:\n\n";

	   	cout<<endl<<"\t\t\t\t1. Student Information ";
	   	cout<<endl<<"\t\t\t\t2. Teacher Information ";
	   	cout<<endl<<"\t\t\t\t3. Attendance";
	   	cout<<endl<<"\t\t\t\t4. Time-Table";
	   	cout<<endl<<"\t\t\t\t5. Exit";
	   	cout<<endl<<"\t\t\t\tEnter Your Choice : ";
	   	cin>>choice;
	   
	   switch(choice)
	   {
	   		case 1:
	   			
	   			student_Admin_Obj.Student_Menu();
	   			break;
	   			
	   		case 2:
	   			
	   			teacher_Admin_Obj.teacher_Menu();
	   			break;
	   			
	   		case 3:
	   			attendance_Admin_Object.Attendence_Menu();
	   			break;
	   			
	   		case 4:
	   			Time_Table_Object.Time_Table_Main();
	   			break;
	   			
	   		case 5:
	   			cout<<"####################   Thank You For Using Our Software..!!!!!  ####################"<<endl;
	   			exit(0);
	   			break;
	   			
	   		default :
	   			cout<<endl<<"Choice is INVALID. Try again......";
	   			break;
	   }
   
	}
    return 0;
}
