#include <iostream>
using namespace std;
class Student{
    public:
        int total_marks = 0;
        int marks[5];
        void calculate_percentage() {
            cout<< "Enter the marks of the student:\n";

            for(int i = 0; i < 5; i++){
                cout << "Enter the marks of the subject "<<i+1<<": ";
                cin>> marks[i];

                if (marks[i]>100) {
                    cout << "lol! over achiver. You Failed ;(\n";
                    return;
                };

                if (marks[i]<32) {
                    cout << "You Failed ;(\n";
                    return;
                };

                total_marks += marks[i];
            }

            float percentage = (float)total_marks / 5;

            cout << "Percentage: "<< percentage << "%" <<endl;

        };

};

int main (int argc, char *argv[]) {
    Student first;
    first.calculate_percentage();
    
    return 0;
}

