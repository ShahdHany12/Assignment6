// Assignment 6 SOLID.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int age;
    string position;

};

class employee_services {
public:
    void hireEmployee(Employee &e) {
        cout << "Hiring employee: " << e.name << endl;
    }

    void fireEmployee(Employee& e) {
        cout << "Firing employee: " << e.name << endl;
    }
    void promoteEmployee(Employee& e) {
        cout << "Promoting employee: " << e.name << endl;
    }
};
class calculate {
public:
    void calculatePay(Employee& e) {
        cout << "Calculating pay for: " << e.name << endl;
    }
};
class print {
public:
    void printDetails(Employee& e) {
        cout << "Name: " << e.name << ", Age: " << e.age << ", Position: " << e.position << endl;
    }
};
class teamMangementServices {
public: 
    int teamSize;
    void manageTeam() {
        cout << "Managing a team of size: " << teamSize << endl;
    }

    void addTeamMember() {
        cout << "Adding team member" << endl;
    }

    void removeTeamMember() {
        cout << "Removing team member" << endl;
    }
};
class sheduleMeeting {
public:
    void scheduleMeeting() {
        cout << "Scheduling a meeting" << endl;
    }
};
class Manager : public Employee {
public:
    
  
    void reviewPerformance() {
        cout << "Reviewing performance" << endl;
    }
};
class Report{  
virtual void generateReport() = 0;
};

class processes_Report {
public:
    
    void printReport() {
        cout << "Printing report" << endl;
    }

    void saveReport() {
        cout << "Saving report" << endl;
    }

    void deleteReport() {
        cout << "Deleting report" << endl;
    }

    void sendReport() {
        cout << "Sending report" << endl;
    }
};

class PDFReport : public Report {
public:
    void generateReport() override {
        cout << "Generating PDF report with special format" << endl;
    }
};
class Processingpayroll {
public:
    virtual void processPayroll() = 0;
};

class PayrollSystem:public Processingpayroll {
public:
    void processPayroll() {
        cout << "Processing payroll" << endl;
    }

    void generatePayslip() {
        cout << "Generating payslip" << endl;
    }

    void sendPayslip() {
        cout << "Sending payslip" << endl;
    }

    void handleEmployeeBenefits() {
        cout << "Handling employee benefits" << endl;
    }

    void handleEmployeeTaxes() {
        cout << "Handling employee taxes" << endl;
    }
};
class log_errors{
public:
    void logError(string error) {
        cout << "Logging error: " << error << endl;
    }

    void logWarning(string warning) {
        cout << "Logging warning: " << warning << endl;
    }
   
};

class checkLog {
public:
     void logDebug(string debug) {
        cout << "Logging debug: " << debug << endl;
    }
};

class log_trace {
public:
    virtual void logTrace(string trace) = 0;
};

class Logger: public log_trace {
public:
   
    void logInfo(string info) {
        cout << "Logging info: " << info << endl;
    }
    void logTrace(string trace) {
        cout << "Logging trace: " << trace << endl;
    }
};

int main() {
    Employee emp;
    emp.name = "John Doe";
    emp.age = 30;
    emp.position = "Developer";
    employee_services r;
   r.hireEmployee(emp);
   calculate c;
    c.calculatePay(emp);

    Manager mgr;
    mgr.name = "Jane Smith";
    teamMangementServices t;
    t.teamSize = 10;
    t.manageTeam();

    PDFReport report;
    report.generateReport();
    processes_Report i;
    i.printReport();

    Processingpayroll* payroll = new PayrollSystem();
    payroll->processPayroll();

    log_trace* log = new Logger();
    log->logTrace();
    log_errors l;
    l.logError("This is an error");

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
