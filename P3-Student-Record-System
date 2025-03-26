#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100  

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} 

Student;
Student students[MAX_STUDENTS];
int count = 0;
void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();
void addStudent() {
    char confirm;
    do {
        if (count < MAX_STUDENTS) {
            printf("\n📌 Adding a New Student:\n");
            printf("Enter Name: ");
            scanf("%s", students[count].name);
            printf("Enter Roll No: ");
            scanf("%d", &students[count].roll_no);
            printf("Enter Marks: ");
            scanf("%f", &students[count].marks);
            count++;
            printf("✅ Student added successfully!\n");
        } else {
            printf("⚠️ Cannot add more students! Database is full.\n");
        }
        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');
}

void searchStudent() {
    int roll, found = 0;
    printf("\n🔍 Search Student by Roll No:\n");
    printf("Enter Roll No: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll) {
            printf("✅ Student Found!\n");
            printf("📌 Name: %s | Roll No: %d | Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("❌ Student with Roll No %d not found!\n", roll);
    }
}

void displayStudents() {
    int subChoice;
    if (count == 0) {
        printf("⚠️ No students to display!\n");
        return;
    }
    do {
        printf("\n📋 Display Options:\n");
        printf("1. Show All Students\n2. Show a Specific Student\n3. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1:
                printf("\n📚 Student Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("📌 Name: %s | Roll No: %d | Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
                }
                break;
            case 2:
                searchStudent(); // ✅ Now correctly recognized
                break;
            case 3:
                return;
            default:
                printf("⚠️ Invalid choice! Please try again.\n");
        }
    } while (subChoice != 3);
}

void deleteStudent() {
    int roll, found = 0;
    char confirm;
    printf("\n🗑 Delete Student Record:\n");
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll) {
            printf("⚠️ Are you sure you want to delete this record? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < count - 1; j++) {
                    students[j] = students[j + 1];
                }
                count--;
                printf("✅ Student record deleted successfully!\n");
            }
            else {
                printf("❌ Deletion cancelled.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("❌ Student with Roll No %d not found!\n", roll);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n🎓 Student Record System - Main Menu\n");
        printf("1️⃣ Add Student\n2️⃣ Display Students\n3️⃣ Search Student\n4️⃣ Delete Student\n5️⃣ Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("🚪 Exiting...\n"); return 0;
            default: printf("⚠️ Invalid choice! Try again.\n");
        }
    }
}
