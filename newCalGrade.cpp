
#include <iomanip>
#include <iostream>
#include <locale>
#include <string.h>
#include <string>

using namespace std;
template<class T>
T input();
template<class T>
T printGrade();
template<class T>
T printGrade2();
template<class T>
T printGrade3();
template<class T>
T desicion();

int loop = 2;
int count = 1;
const float WIDTH = 9.5;
int stdnum[15];
string std_name[15];
string std_surname[15];
int room[15];
int homework[15];
int midterm[15];
int final[15];
int sum[15];
int test[15];
string GPA[15];
string pass[15];
string grade[15];
//int i;
char choice;
int main() {
  cout << "========================================\n";
  cout << "Choice 1.(Input Score)" << endl;
  cout << "Choice 2.(Calc Grade)" << endl;
  cout << "Choice 3.(Print Grade // (A,B+,B,C+,C,D+,D,F)" << endl;
  cout << "Choice 4.(Print Grade // (4,3.5,3,2.5,2,1.5,1,0)" << endl;
  cout << "Choice 5.(Print Grade // (PASS & FAIL)" << endl;
  cout << "Choice 6.(Exit program) " << endl;
  cout << "========================================\n";
  cout << "Please enter number choice (1,2,3,4,5,6) : ";
  cin >> choice;
  if (choice == '1') {
    input<void>();
  } 
  else if (choice == '2') {
    desicion<void>();
  } 
  else if (choice == '3') {
    printGrade<void>();
  }
  else if (choice == '4') {
    printGrade2<void>();
  }
  else if (choice == '5') {
    printGrade3<void>();
  } 
  else if (choice == '6') {
    exit(0);
  }
}

template<class T>
T input() {
  //int count = 1;
  int count = 1;
  char qt_menu;
  for (int i = 0; i <= loop; i++) {
    cout << "[" << count << "] "
         << "Enter student name and surname : ";
    cin >> std_name[i] >> std_surname[i];

    do {
      cout << "Enter in room point(5) : ";
      cin >> room[i];

    } while (room[i] < 0 || room[i] > 5);

    do {
      cout << "Enter in homework point(15) : ";
      cin >> homework[i];

    } while (homework[i] < 0 || homework[i] > 15);

    do {
      cout << "Enter in test point(10) : ";
      cin >> test[i];

    } while (test[i] < 0 || test[i] > 10);

    do {
      cout << "Enter in midterm point(30) : ";
      cin >> midterm[i];

    } while (midterm[i] < 0 || midterm[i] > 30);

    do {
      cout << "Enter in final point(30) : ";
      cin >> final[i];

    } while (final[i] < 0 || final[i] > 30);

    sum[i] = room[i] + homework[i] + test[i] + midterm[i] + final[i];
    count++;
  }
  cout << "Success to Process Input!\n";
  cout << "You can exit to menu pls press 'q' : ";
  cin >> qt_menu;
  if (qt_menu == 'q') {
    main();
  }
}

template<class T>
T desicion() {
  //int count;
  char qt_menu;
  for (int i = 0; i <= loop; i++) {
    //sum[i] = room[i] + homework[i] + test[i] + midterm[i] + final[i];
    if (sum[i] >= 80) {
      grade[i] = "A";
    } 
    else if (sum[i] >= 75) {
      grade[i] = "B+";
    } 
    else if (sum[i] >= 70) {
      grade[i] = "B";
    } 
    else if (sum[i] >= 65) {
      grade[i] = "D+";    
    }
    else if (sum[i] >= 60) {
      grade[i] = "D";    
    } 
    else if (sum[i] >= 55) {
      grade[i] = "C+";    
    }
    else if (sum[i] >= 50) {
      grade[i] = "C";    
    }    
    else {
      grade[i] = "F";
  }
}
  cout << "Success to Process Desition!\n";
  cout << "You can exit to menu pls 'q' : ";
  cin >> qt_menu;
  if (qt_menu == 'q') {
    main();
  }
}

// int printGrade(int std_name[],int std_surname[]){

template<class T>
T printGrade() {
  int count;
  char qt_menu;
  cout << "|=============================================================|\n";
  cout << "\t|No.|\t|     Name-Surname     | |point| |Grade|\t\n";
  cout << "|=============================================================|\n";

  // loop ??????????????????????????????
  count = 1;
  cout << setfill(' ');
  for (int i = 0; i <= loop; i++) {
    cout << "| " << setw(WIDTH) << count++;
    cout << " :" << setw(WIDTH + 2) << std_name[i];
    cout << "  " << setw(WIDTH) << std_surname[i];
    cout << "  " << setw(WIDTH) << sum[i];
    cout << "  " << setw(WIDTH - 4) << grade[i];
    cout << setw(WIDTH + 1) << " |";
    cout << "  " << endl;
    cout << "|=============================================================|\n";
  }
  cout << "Success to Process printGrade!\n";
  cout << "You can exit to menu pls 'q' : ";
  cin >> qt_menu;
  if (qt_menu == 'q') {
    main();
  }
}

template<class T>
T printGrade2() {
  int count;
  char qt_menu;
  cout << "|=============================================================|\n";
  cout << "\t|No.|\t|     Name-Surname     | |point| |Grade|\t\n";
  cout << "|=============================================================|\n";

  // loop ??????????????????????????????
  count = 1;
  cout << setfill(' ');
  for (int i = 0; i <= loop; i++) {
      if ( grade[i] == "A") {
          GPA[i] = "4";
      }
      else if ( grade[i] == "B+") {
          GPA[i] = "3.5";
      }
      else if ( grade[i] == "B") {
          GPA[i] = "3";
      }
      else if ( grade[i] == "C+") {
          GPA[i] = "2.5";
      }
      else if ( grade[i] == "C") {
          GPA[i] = "2";
      }
      else if ( grade[i] == "D+") {
          GPA[i] = "1.5";
      }
      else if ( grade[i] == "D") {
          GPA[i] = "1";
      }
      else if ( grade[i] == "F") {
          GPA[i] = "0";
      }
    cout << "| " << setw(WIDTH) << count++;
    cout << " :" << setw(WIDTH + 2) << std_name[i];
    cout << "  " << setw(WIDTH) << std_surname[i];
    cout << "  " << setw(WIDTH) << sum[i];
    cout << "  " << setw(WIDTH - 4) << GPA[i];
    cout << setw(WIDTH + 1) << " |";
    cout << "  " << endl;
    cout << "|=============================================================|\n";
  }
  cout << "Success to Process printGrade!\n";
  cout << "You can exit to menu pls 'q' : ";
  cin >> qt_menu;
  if (qt_menu == 'q') {
    main();
  }
}

template<class T>
T printGrade3() {
  int count;
  char qt_menu;
  cout << "|=============================================================|\n";
  cout << "\t|No.|\t|     Name-Surname     | |point| |Grade|\t\n";
  cout << "|=============================================================|\n";

  // loop ??????????????????????????????
  count = 1;
  cout << setfill(' ');
  for (int i = 0; i <= loop; i++){
    if (sum[i] >= 50) {
          pass[i] = "PASS";
    }
    else {
      pass[i] = "FAIL";
    }
    cout << "| " << setw(WIDTH) << count++;
    cout << " :" << setw(WIDTH + 2) << std_name[i];
    cout << "  " << setw(WIDTH) << std_surname[i];
    cout << "  " << setw(WIDTH) << sum[i];
    cout << "  " << setw(WIDTH - 4) << pass[i];
    cout << setw(WIDTH + 1) << " |";
    cout << "  " << endl;
    cout << "|=============================================================|\n";
  }
  cout << "Success to Process printGrade!\n";
  cout << "You can exit to menu pls 'q' : ";
  cin >> qt_menu;
  if (qt_menu == 'q') {
    main();
  }
}
