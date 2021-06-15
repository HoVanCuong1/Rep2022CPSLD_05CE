//
//  main.cpp
//  Lesson75Exercises10
//
//  Created by Branium on 14/06/2021.
//

#include <iostream>
#include "Student.hpp"
#include "Subject.hpp"
#include "Transcript.hpp"
using namespace std;

int main() {
    int choice = 0;
    Student students[200];
    Subject subjects[200];
    Transcript<Student, Subject> transcripts[200];
    int numberOfStudent = 0;
    int numberOfSubject = 0;
    int numberOfTranscript = 0;
    do {
        cout << "==================== MENU ====================\n";
        cout << "01. Them sinh vien moi vao danh sach.\n";
        cout << "02. Them mon hoc moi vao danh sach.\n";
        cout << "03. Hien thi danh sach sinh vien.\n";
        cout << "04. Hien thi danh sach mon hoc.\n";
        cout << "05. Them sinh vien moi vao danh sach.\n";
        cout << "06. Them sinh vien moi vao danh sach.\n";
        cout << "07. Them sinh vien moi vao danh sach.\n";
        cout << "08. Them sinh vien moi vao danh sach.\n";
        cout << "09. Them sinh vien moi vao danh sach.\n";
        cout << "10. Them sinh vien moi vao danh sach.\n";
        cout << "11. Them sinh vien moi vao danh sach.\n";
        cout << "12. Them sinh vien moi vao danh sach.\n";
        cout << "13. Them sinh vien moi vao danh sach.\n";
        cout << "14. Them sinh vien moi vao danh sach.\n";
        cout << "15. Them sinh vien moi vao danh sach.\n";
        cout << "16. Them sinh vien moi vao danh sach.\n";
        cout << "17. Them sinh vien moi vao danh sach.\n";
        cout << "0. Thoat chuong trinh.\n";
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "============ CAM ON BAN DA SU DUNG DICH VU ============\n";
                break;
            case 1: {
                Student s;
                cin >> s;
                students[numberOfStudent++] = s;
                break;
            }
            case 2: {
                Subject s;
                cin >> s;
                subjects[numberOfSubject++] = s;
                break;
            }
            case 3: {
                
                break;
            }
            case 4: {
                
                break;
            }
            case 5: {
                
                break;
            }
            case 6: {
                
                break;
            }
            case 7: {
                
                break;
            }
            case 8: {
                
                break;
            }
            case 9: {
                
                break;
            }
            case 10: {
                
                break;
            }
            case 11: {
                
                break;
            }
            case 12: {
                
                break;
            }
            case 13: {
                
                break;
            }
            case 14: {
                
                break;
            }
            case 15: {
                
                break;
            }
            case 16: {
                
                break;
            }
            case 17: {
                
                break;
            }
            default:
                cout << "SAI CHUC NANG, VUI LONG KIEM TRA LAI\n";
                break;
        }
    } while (choice != 0);
    
    return 0;
}
