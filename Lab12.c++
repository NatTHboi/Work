/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name:
            John Doe
        ID:
            101
        Scores in Subject 1:
            77
        Scores in Subject 2:
            64
        Scores in Subject 3:
            66
        Scores in Subject 4:
            54
        Scores in Subject 5:
            56

        Student 2:
        Name:
            Jane Smith
        ID:
            102
        Scores in Subject 1:
            43
        Scores in Subject 2:
            70
        Scores in Subject 3:
            76
        Scores in Subject 4:
            77
        Scores in Subject 5:
            80

        Student 3:
        Name:
            Mark Johnson
        ID:
            103
        Scores in Subject 1:
            77
        Scores in Subject 2:
            74
        Scores in Subject 3:
            76
        Scores in Subject 4:
            81
        Scores in Subject 5:
            69

    Output:
        Student 1:
        Name: John Doe
        ID: 101
        Scores: 77 64 66 54 56
        Grades: B+ C C+ D D+
        Average Scores: 63.4

        Student 2:
        Name: Jane Smith
        ID: 102
        Scores: 43 70 76 77 80
        Grades: F B B+ B+ A
        Average Scores: 69.2

        Student 3:
        Name: Mark Johnson
        ID: 103
        Scores: 77 74 76 81 69
        Grades: B+ B B+ A C+
        Average Scores: 75.4
*/

#include <stdio.h>
#include <string.h>

const char* getGrade(int score) {
    if (score >= 80) return "A" ;
    else if (score >= 75) return "B+" ;
    else if (score >= 70) return "B" ;
    else if (score >= 65) return "C+" ;
    else if (score >= 60) return "C" ;
    else if (score >= 55) return "D+" ;
    else if (score >= 50) return "D" ;
    else return "F";
}

struct Student {
    char name[50] ;
    int id ;
    int scores[5] ;
    char grades[5][3] ;
    double averageScore ;

    void calculateGrades() {
        int totalScore = 0 ;
        for (int i = 0; i < 5; i++) {
            strcpy(grades[i], getGrade(scores[i])) ;
            totalScore += scores[i] ;
        }
        averageScore = totalScore / 5.0 ;
    }

    void displayInfo() {
        printf("Name: %s\n", name) ;
        printf("ID: %d\n", id) ;
        printf("Scores: ") ;
        for (int i = 0; i < 5; i++) {
            printf("%d ", scores[i]) ;
        }
        printf("\nGrades: ") ;
        for (int i = 0; i < 5; i++) {
            printf("%s ", grades[i]) ;
        }
        printf("\nAverage Score: %.1f\n\n", averageScore) ;
    }

    void inputInfo() {
        printf("Enter student name: ") ;
        getchar();
        fgets(name, sizeof(name), stdin) ;
        name[strcspn(name, "\n")] = 0 ;

        printf("Enter student ID: ") ;
        scanf("%d", &id);
        printf("Enter scores for 5 subjects (space to enter another subscore): ") ;
        for (int i = 0; i < 5; i++) {
            scanf("%d", &scores[i]) ;
        }
    }
} ;

int main() {
    Student students[3] ;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1) ;
        students[i].inputInfo() ;
        students[i].calculateGrades() ;
    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1) ;
        students[i].displayInfo() ;
    }

    return 0 ;
}
