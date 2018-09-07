#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {

    bool to = true, quit = true, again = true;
    while (again) {
        cout << "************************************************************************************************"
             << endl;
        cout << "*        This application calculates your pass mark with IA and end of Semester Exams          *"
             << endl;
        cout << "*                   It follows the protocols set by BlueCrest College                          *"
             << endl;
        cout << "*                     Calculation of CLASS TEST(10), ASSIGNMENT(10)                            *"
             << endl;
        cout << "*                  MID SEMESTER EXAMS(25), ATTENDANCE(10), DISCIPLINE(5)                       *"
             << endl;
        cout << "*----------------------------------------------------------------------------------------------*"
             << endl;
        cout << "*          CLASS TEST + ASSIGNMENT + MID SEMESTER EXAMS + ATTENDANCE + DISCIPLINE = 40%        *"
             << endl;
        cout << "*                               END OF SEMESTER EXAM = 60%                                     *"
             << endl;
        cout << "*----------------------------------------------------------------------------------------------*"
             << endl;
        cout << "*                                      GOOD LUCK!!!                                            *"
             << endl;
        cout << "************************************************************************************************"
             << endl;
        cout << endl;

        int semester, class_test, assignment, attendance, discipline, end_semester, exit;
        const int pass_mark = 40;
        const int exam = 60;
        string final;

        while (to) {
            in:
            cout << "Enter your CLASS TEST(10) score: ";
            cin >> class_test;
            cout << "Enter your ASSIGNMENT(10) score: ";
            cin >> assignment;
            cout << "Enter your MID SEMESTER EXAMS(25) score: ";
            cin >> semester;
            cout << "Enter your ATTENDANCE(10) score: ";
            cin >> attendance;
            cout << "Enter your DISCIPLINE(5) score: ";
            cin >> discipline;
            cout << endl;

            const int ia = semester + class_test + assignment + attendance + discipline;
            cout << class_test << " + " << assignment << " + " << semester << " + " << attendance << " + " << attendance
                 << " = " << ia << endl << endl;

            if (ia > pass_mark) {
                cout << "Invalid score, highest score is 40" << endl;
                cout << "Try again" << endl << endl;
                goto in;
            } else {
                if (ia >= 20) {
                    cout << "You passed your first 40% mark" << endl;

                    if (ia >= 35) {
                        cout << "You did great" << endl;
                    }
                    if (ia == pass_mark) {
                        cout << "Excellent" << endl;
                    }
                }
            }
            if (ia <= 19) {
                cout << "You've failed" << endl;
                cout << "Better luck next time, Try again" << endl;
                break;
            }
            sem:
            cout << endl;
            cout << "************************************************************************************************"
                 << endl;
            cout << "*                              CALCULATION OF END OF SEMESTER EXAM                             *"
                 << endl;
            cout << "*                                  END OF SEMESTER EXAM = 60%                                  *"
                 << endl;
            cout << "************************************************************************************************"
                 << endl;
            cout << endl;

            cout << "Enter your END OF SEMESTER EXAMS(60) score: ";
            cin >> end_semester;
            cout << endl;
            if (end_semester >= 30 && end_semester <= exam) {
                cout << "You passed your END OF SEMESTER EXAM" << endl << endl;
                if (end_semester == exam) {
                    cout << "Excellent!!" << endl;
                }
            } else {
                if (end_semester > exam) {
                    cout << "Invalid input, try again" << endl;
                    goto sem;
                }

                cout << "You failed your END OF SEMESTER EXAM" << endl;

                if (end_semester < 30) {
                    cout << "LOOK FORWARD TO A RESIT" << endl;
                    break;
                }
            }

            cout << "************************************************************************************************"
                 << endl;
            cout << "*                          NOW IT'S TIME TO CALCULATE YOUR TOTAL MARK                          *"
                 << endl;
            cout << "*----------------------------------------------------------------------------------------------*"
                 << endl;
            cout << "*              YOU'LL NEED TO OTAIN AT LEAST HALF OF BOTH MID-SEMESTER EXAM(20)                *"
                 << endl;
            cout << "*          AND END OF SEMESTER EXAM(30) TO ENTER SEMESTER 2 WITH A MINIMUM OF 50%              *"
                 << endl;
            cout << "************************************************************************************************"
                 << endl;
            cout << endl;

            const int total = end_semester + ia;

            yes:
            cout << "Enter (yes) to see your final result: ";
            cin >> final;
            if (final == "yes") {
                if (total >= 50) {
                    cout
                            << "************************************************************************************************"
                            << endl;
                    cout
                            << "*                              CONGRATULATIONS!!!, SEE YOU NEXT SEMESTER                       *"
                            << endl;
                    cout
                            << "************************************************************************************************"
                            << endl;
                    cout << endl;
                } else {
                    cout
                            << "************************************************************************************************"
                            << endl;
                    cout
                            << "*                                      SORRY MATE, YOU FAILED!!!                               *"
                            << endl;
                    cout
                            << "************************************************************************************************"
                            << endl;
                    cout << endl;
                }
            } else {
                cout << "Invalid input, try again" << endl;
                goto yes;
            }

            while (quit) {
                cout << "Press (1) to run this application again or (0) to exit: ";
                cin >> exit;

                if (exit == 1) {
                    cout << "Lets begin" << endl << endl;
                    break;
                } else {
                    cout << "Exiting........." << endl << endl;
                    quit = false;
                    to = false;
                    again = false;
                }
            }
        }
    }


    cout << "************************************************************************************************" << endl;
    cout << "*                                  Thank you for your Co-operation                             *" << endl;
    cout << "*----------------------------------------------------------------------------------------------*" << endl;
    cout << "*(((((((((((((((((((((((((((((((((((((((( 2018 ALOSOFT ))))))))))))))))))))))))))))))))))))))))*" << endl;
    cout << "************************************************************************************************" << endl;


    return 0;
}

