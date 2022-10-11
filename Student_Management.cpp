#include<iostream>
#include<string>
using namespace std;

string name[20],roll_no[20],f_name[20],adrrs[20],mobile_no[20],branch[20];
int total = 0; 

void menu(){
    cout<<"\n\t\t*******Student Management System******"<<endl;
    cout<<"\t\t 1. Add Student Details "<<endl;
    cout<<"\t\t 2. Student Data Record "<<endl;
    cout<<"\t\t 3. Search Student "<<endl;
    cout<<"\t\t 4. Update Student data "<<endl;
    cout<<"\t\t 5. Delete Data "<<endl;
    cout<<"\t\t 6. Quit "<<endl;
}


void add()
{

    int s; //variable for number of student
    cout<<"\nEnter the number of student that you want to add in the record  "<<endl;
    cin>>s; //input for number of student
    
    if(total == 0)//intialising to 0 inoreder to prevent overwriting of same details i.e for same id
    {
    total += s;///total number of the entries that has to be taken from the userend

  
    
    for(int i = 0; i < s; i++)
    {
        cout<<"\nEnter the details for student "<<" ID =  "<<i+1<<endl;

        cout<<"Enter Name: "<<endl;
        cin>>name[i];
        cout<<"Roll Number: "<<endl;
        cin>>roll_no[i];
        cout<<"Fathers Name : "<<endl;
        cin>>f_name[i];
        cout<<"Address: "<<endl;
        cin>>adrrs[i];
        cout<<"Mobile Number : "<<endl;
        cin>>mobile_no[i];
        cout<<"Branch: "<<endl;
        cin>>branch[i];
    }
    }

    else{
        for(int i = total; i < total + s; i++)
    {
        cout<<"\nEnter the details for student "<<i+1<<endl;

        cout<<"Enter Name: "<<endl;
        cin>>name[i];
        cout<<"Roll Number: "<<endl;
        cin>>roll_no[i];
        cout<<"Fathers Name : "<<endl;
        cin>>f_name[i];
        cout<<"Address: "<<endl;
        cin>>adrrs[i];
        cout<<"Mobile Number : "<<endl;
        cin>>mobile_no[i];
        cout<<"Branch: "<<endl;
        cin>>branch[i];
    }
    total = total + s;//// to store the previous details and incrementing the total by the number of newly added details
    }

}


void student_record()  //function for displaying the details of the student as record
{

    
    system("CLS");
    system("color 2");
    cout<<"\n\n\t\t *******Student Data Record******** \n "<<endl;
    for(int i = 0; i <total; i ++)
    {
        cout<<"\nID = "<< i + 1<<"\n"<<endl;
        
        cout<<"Name : "<<name[i]<<endl;
        cout<<"Roll Number : "<<roll_no[i]<<endl;
        cout<<"Fathers Name : "<<f_name[i]<<endl;
        cout<<"Address : "<<adrrs[i]<<endl;
        cout<<"Mobile Number : "<<mobile_no[i]<<endl;
        cout<<"Branch: " <<branch[i]<<endl;
    }
}


void search()
{
    string roll_number;
    cout<<"Enter the roll number of the given student to be searched "<<endl;
    cin>>roll_number;

    for(int i = 0; i < total; i++)
        {
            if( roll_number == roll_no[i])
            {
                cout<<"\n\n\t\t Details of Student \n\n "<<"ID = "<< i + 1  <<endl;
        
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Roll Number : "<<roll_no[i]<<endl;
                cout<<"Fathers Name : "<<f_name[i]<<endl;
                cout<<"Address : "<<adrrs[i]<<endl;
                cout<<"Mobile Number : "<<mobile_no[i]<<endl;
                cout<<"Branch: " <<branch[i]<<endl;
                    }
        }


}

void update()
{

    string roll_number;

    cout<<"Enter the roll number of the student which has to be updated "<<endl;
    cin>>roll_number;

    for(int i = 0; i < total; i++)
        {
            if( roll_number == roll_no[i])
            {
                cout<<"\n\n\t\t Previous Details for ID = "<< i + 1 <<" was " <<endl;
        
                cout<<"Name : "<<name[i]<<endl;
                cout<<"Roll Number : "<<roll_no[i]<<endl;
                cout<<"Fathers Name : "<<f_name[i]<<endl;
                cout<<"Address : "<<adrrs[i]<<endl;
                cout<<"Mobile Number : "<<mobile_no[i]<<endl;
                cout<<"Branch: " <<branch[i]<<endl;

                cout<<"\n\n\t\t Enter New  Details for ID = "<< i + 1<<endl;

                cout<<"Enter Name: "<<endl;
                cin>>name[i];
                cout<<"Roll Number: "<<endl;
                cin>>roll_no[i];
                cout<<"Fathers Name : "<<endl;
                cin>>f_name[i];
                cout<<"Address: "<<endl;
                cin>>adrrs[i];
                cout<<"Mobile Number : "<<endl;
                cin>>mobile_no[i];
                cout<<"Branch: "<<endl;
                cin>>branch[i];
                
           }
        }


}

void delete_data()
{
    int a;
    cout<<"Press 1 to delete all records Or \nPress 2 delete specific record "<<endl;
    cin>>a;
    
   

    if(a == 1)
    {   
        total = 0;
        cout<<"All records are removed succcessfully "<<endl;
    }
    else
    {
        string roll_number;
        cout<<"Enter the roll number of the given student that has to be deleted "<<endl;
        cin>>roll_number;

        for(int i = 0; i < total; i++)
        {
                if (roll_number == roll_no[i])
                
                {
                    for(int j = i; j < total; j++)
                    {
                        name[j] = name[j + 1];
                        roll_no[j] = roll_no[j + 1];
                        f_name[j] = f_name[j + 1];
                        adrrs[j] = adrrs[j + 1];
                        mobile_no[j] = mobile_no[j + 1];
                        branch[j] = branch[j + 1];

                    }
                    total--;
                    cout<<"The require record has been removed successfully...!!"<<endl;

                }
        }

    }
    




}

int main(){
    
    system("CLS");
    system("color 2");//to add color to the font
    int select; //variable to choose from the menu option

    do{
    menu();

    cin>>select;

    switch(select)
    {
        case 1: 
        add();
        break;

        case 2:
        student_record();
        break;

        case 3:
        search();
        break;

        case 4:
        update();
        break;

        case 5:
        delete_data();
        break;

        case 6:
        exit(0);
        break;

        default:
        cout<<"Invalid Input "<<endl;
        
    }

    }while(1);
    
    cout<<"this is jaswant's first change"<<endl;
    
return 0;

}
