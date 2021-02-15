//Practical 7 - C++ course
//Maria Isabel Vera Cabrera

#include <iostream>
#include <array>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

//Exercise 1 : A system for blood pressure records

class Date{
    protected:
    int day;
    int month;
    int year;

    public:
    //We can make the return type or arguments of a function as const. Then we cannot change any of them.
    Date(const int day,const int month,const int year){
        //Local variables have the same name as data members name. Hence.
        //we need to use "this" pointer to let the compiler know that we are referring to members to the current object of the class (The attribute and not the parameter)
        this->day=day;
        this->month=month;
        this->year=year;
    }

    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    int getYear(){
        return year;
    }
};

class Blood{
    protected:
    int systolic;
    int diastolic;
    Date date;

    public:
    Blood(const int systolic, const int diastolic, const Date date):
    date(date) {
        this->systolic=systolic;
        this->diastolic=diastolic;
    };

    int getSystolic(){
        return systolic;
    }

    int getDiastolic(){
        return diastolic;
    }

    Date getDate(){
        return date;
    }
};

class Patient{
    protected:
    string name;
    vector <Blood> table;

    public:
    Patient(string name){
        this->name=name;
        this->table=vector <Blood>();
    };

    void addRecord(Blood dailyPressure){
        table.push_back(dailyPressure);
    };

    void getTable(){
        for(int i=0;i<table.size();i++){
            cout << "Systolic pressure: " << table[i].getSystolic() << ", Diastolic pressure: " << table[i].getDiastolic() << ", Date: " << table[i].getDate().getDay()<< "/" << table[i].getDate().getMonth() << "/" << table[i].getDate().getYear()<<endl;
            cout<<endl;
        }
    }

    void printReport(){

        cout<<"Report for the patient "<< this->name << ":"<< endl;
        int sumDiastolic=0;
        double avgDiastolic=0.0;
        vector<Blood> highestAbnormalSys=vector<Blood>();
        int maximum=140;

        for(int i=0;i<table.size();i++){

            sumDiastolic+=table[i].getDiastolic();

            if (table[i].getSystolic()>maximum){
                highestAbnormalSys.clear();
                highestAbnormalSys.push_back(table[i]);
                maximum=table[i].getSystolic();
            }
            else if (table[i].getSystolic()==maximum){
                highestAbnormalSys.push_back(table[i]);
            }
        }

        if (highestAbnormalSys.size()==0){
            cout << "No measurement was too high" << endl;
        }
        else{
            cout << "Abnormal systolic measurements:" << endl;
            for(int i=0;i<highestAbnormalSys.size();i++){
                cout << "Systolic pressure: " << highestAbnormalSys[i].getSystolic() << ", Diastolic pressure: " << highestAbnormalSys[i].getDiastolic() << ", Date: " << highestAbnormalSys[i].getDate().getDay()<< "/" << highestAbnormalSys[i].getDate().getMonth() << "/" << highestAbnormalSys[i].getDate().getYear()<<endl;
            }
        }
        avgDiastolic=sumDiastolic/table.size();
        cout<<"The average diastolic pressure was: "<<avgDiastolic<<endl;
        cout<<endl;
    }
}
;


//Final Executable function
int main(){
    //Q1
    Patient mary=Patient("Mary");
    mary.addRecord(Blood(94,61, Date(2,5,2013)));
    mary.addRecord(Blood(97,65, Date(3,5,2013)));
    mary.addRecord(Blood(144,99, Date(4,5,2013)));
    mary.addRecord(Blood(123,88, Date(5,5,2013)));
    mary.addRecord(Blood(177,110, Date(6,5,2013)));
    mary.addRecord(Blood(145,89, Date(7,5,2013)));

    //Q2
    mary.printReport();

    //Q3
    Patient john = Patient("John");
    john.addRecord(Blood(88,57, Date(15,5,2013)));
    john.addRecord(Blood(95,61, Date(16,5,2013)));
    john.addRecord(Blood(114,80, Date(17,5,2013)));
    john.addRecord(Blood(151,96, Date(18,5,2013)));
    john.addRecord(Blood(176,104, Date(19,5,2013)));
    john.addRecord(Blood(176,110, Date(20,5,2013)));
    john.printReport();

    return 0;
}

