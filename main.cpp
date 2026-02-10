#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
    string performance;
};

void predictPerformance(Student &s) {
    if (s.marks >= 90)
        s.performance = "Excellent";
    else if (s.marks >= 80)
        s.performance = "Good";
    else if (s.marks >= 65)
        s.performance = "Fair";
    else
        s.performance = "Poor";
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name and marks for student " << i + 1 << ": ";
        cin >> students[i].name >> students[i].marks;
        predictPerformance(students[i]);
    }

    cout << "\nPredicted Performance:\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " - " << students[i].marks
             << " marks -> " << students[i].performance << endl;
    }

    return 0;
}
