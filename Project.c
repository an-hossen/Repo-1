#include<stdio.h>
#include<string.h>
int n,i=1,j,cnt=0;
typedef struct student {
    char name[50];
    char phn_number[50];
    int roll;
    float cgpa;
}student;
struct student s1[100];
struct student s2[100];
void unique_roll() {
    int count=0;
    printf(" Roll : ");
    scanf("%d",&s1[i].roll);
    for(j=1;j<i;j++) {
        if(s1[i].roll==s1[j].roll){
            count++;
            break;
        }
    }
    if(count!=0) {
        printf("The Roll Number is Already Exist! Choose Another Roll Number.\n");
        unique_roll();
        }
}
void add() {
    int c;
    for( ;;) {
        printf("\nEnter Sudent's\n");
        unique_roll();
        getchar();
        printf(" Name : ");
        scanf("%[^\n]s",s1[i].name);
        getchar();
        for(j=0;s1[i].name[j]!=' ' && s1[i].name[j]!='\0';j++) {
            s2[i].name[j]=s1[i].name[j];
        }
        printf(" CGPA : ");
        scanf("%f",&s1[i].cgpa);
        printf(" Phone Number : ");
        scanf("%s",&s1[i].phn_number);
        i++;
        printf("Just Press Any Key for Add More And 0 for Stop : ");
        scanf("%d",&c);
        if(c==0) {
            break;
        }
    }
    cnt=i;
}
void searchingRoll () {
    int roll,c=0;
    if(i!=1) {
        printf(" Enter Roll : ");
        scanf("%d",&roll);
        for(int k=1;k<cnt;k++) {
            if(s1[k].roll==roll) {
                printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\nPhone Number : %s\n",s1[k].roll,s1[k].name,s1[k].cgpa,s1[k].phn_number);
                c++;
                break;
            }
        }
        if(c==0) {
            printf("The Student of This Roll Number Doesn't Exist!\n");
        }
    }
    else {
        printf("The Students List is Empty! Please First Add Students and Then Take Operations.\n");
    }
}
void searchingName () {
    int c=1;
    char name[20];
    if(i!=1) {
        printf(" Enter First Name : ");
        scanf("%s",name);
        for(int k=1;k<cnt;k++) {
            if(strcmp(s2[k].name,name)==0) {
                printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\n Phone Number : %s\n",s1[k].roll,s1[k].name,s1[k].cgpa,s1[k].phn_number);
                c++;
                break;
            }
        }
        if(c==1) {
            printf("The Student of This Name Doesn't Exist!\n");
        }
    }
    else {
        printf("The Students List is Empty! Please First Add Students and Then Take Operations.\n");
    }
}
void deleteStudent() {
    int roll;
    int c=0;
    if(i!=1) {
        printf("Enter Roll : ");
        scanf("%d",&roll);
        for(int k=1;k<cnt;k++) {
            if(s1[k].roll==roll) {
                c=k;
                break;
            }
        }
        if(c==0) {
            printf("The Student of This Roll Number Doesn't Exist!\n");
        }
        else {
            for(int k=c;k<cnt;k++) {
                s1[k].roll=s1[k+1].roll;
                strcpy(s1[k].name,s1[k+1].name);
                s1[k].cgpa=s1[k+1].cgpa;
                strcpy(s1[k].phn_number,s1[k+1].phn_number);
                strcpy(s2[k].name,s2[k+1].name);
            }
            cnt--;
            i--;
            printf("The Student's Record is Deleted! If You Want To See The List of The Students Choose The Display Option 7.\n");
        }
    }
    else {
        printf("The Students List is Empty! Please First Add Students and Then Take Operations.\n");
    }
}
void roll() {
    int rol,count=0;
    printf(" Enter New Roll for This Student : ");
    scanf("%d",&rol);
    for(j=1;j<cnt;j++) {
        if(rol==s1[j].roll){
            count++;
            break;
        }
    }
    if(count!=0) {
        printf("This Roll Number is Already Exist! Choose Another Roll Number.\n");
        roll();
    }
    else {
    s1[n].roll=rol;
    printf("The Student's Roll Number is Updated!\n");
    printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\n Phone Number : %s\n",s1[n].roll,s1[n].name,s1[n].cgpa,s1[n].phn_number);
    }
}
void name() {
    char nam[50];
    printf(" Enter New Name for This Student : ");
    getchar();
    scanf("%[^\n]s",s1[n].name);
    getchar();
    for(j=0;s1[n].name[j]!=' ' && s1[n].name[j]!='\0';j++) {
            nam[j]=s1[n].name[j];
        }
    nam[j]='\0';
    strcpy(s2[n].name,nam);
    printf("The Student's Name is Updated!\n");
    printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\n Phone Number : %s\n",s1[n].roll,s1[n].name,s1[n].cgpa,s1[n].phn_number);
}
void phnNumber() {
    char phn_number[50];
    printf(" Enter New Phone Number for This Student : ");
    getchar();
    scanf("%[^\n]s",phn_number);
    getchar();
    strcpy(s1[n].phn_number,phn_number);
    printf("The Student's Phone Number is Updated!\n");
    printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\n Phone Number : %s\n",s1[n].roll,s1[n].name,s1[n].cgpa,s1[n].phn_number);
}
void cgpa() {
    float cgpa;
    printf(" Enter New CGPA for This Student : ");
    scanf("%f",&cgpa);
    s1[n].cgpa=cgpa;
    printf("The Student's CGPA is Updated!\n");
    printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\n Phone Number : %s\n",s1[n].roll,s1[n].name,s1[n].cgpa,s1[n].phn_number);
}
void Update () {
    int rol,c,s,y=1;
    if(i!=1) {
        printf("Enter Roll To Choose The Student : ");
        scanf("%d",&rol);
        for(int k=1;k<cnt;k++) {
                if(s1[k].roll==rol) {
                    n=k;
                    break;
                }
            }
            printf(" This is Your Student : ");
            printf("\n Roll : %d\n Name : %s\n CGPA : %.2f\n Phone Number : %s\n",s1[n].roll,s1[n].name,s1[n].cgpa,s1[n].phn_number);
        while(y) {
            printf(" What Do You Want To Update?\n 1.Roll\n 2.Name\n 3.CGPA\n 4.Phone Number\n Or\n 5.Nothing\n\t\t");
            scanf("%d",&s);
            switch(s) {
                case 1:
                    roll();
                    break;
                case 2:
                    name();
                    break;
                case 3:
                    cgpa();
                    break;
                case 4:
                    phnNumber();
                    break;
                case 5:
                    y=0;
                    break;
            }
        }
    }
    else {
        printf("The Students List is Empty! Please First Add Students and Then Take Operations.\n");
    }
}
void swap(student *a,student *b) {
    student tem=*a;
    *a=*b;
    *b=tem;
}
void sortName() {
    for(j=0;j<cnt-1;j++) {
        for(int k=1;k<(cnt-1)-j;k++) {
            if(strcmp(s1[k].name,s1[k+1].name)>0) {
                swap(&s1[k], &s1[k+1]);
                swap(&s2[k], &s2[k+1]);
            }
        }
    }
    printf(" Name\t\tRoll\tCGPA\tPhone Number\n");
    for(int k=1;k<cnt;k++) {
        printf(" %s\t%d\t%.2f\t%s\n",s1[k].name,s1[k].roll,s1[k].cgpa,s1[k].phn_number);
    }
}
void sortcgpa() {
    for(j=0;j<cnt-1;j++) {
        for(int k=1;k<(cnt-1)-j;k++) {
            if(s1[k].cgpa<s1[k+1].cgpa) {
                swap(&s1[k], &s1[k+1]);
                swap(&s2[k], &s2[k+1]);
            }
        }
    }
    printf(" Name\t\tRoll\tCGPA\tPhone Number\n");
    for(int k=1;k<cnt;k++) {
        printf(" %s\t%d\t%.2f\t%s\n",s1[k].name,s1[k].roll,s1[k].cgpa,s1[k].phn_number);
    }
}
void Display() {
    int l;
    if(i!=1) {
        printf(" How would you like to view the list?\n 1.Sorted By Name\n 2.Sorted By CGPA\n\t\t");
        scanf("%d",&l);
        switch(l) {
            case 1:
                sortName();
                break;
            case 2:
                sortcgpa();
                break;
        }
    }
    else {
        printf("The Students List is Empty! Please First Add Students and Then Take Operations.\n");
    }
}
int main() {
    int a,z=1;
    while(z) {
        printf(" 1.Add Student Details\n 2.Find Student by Roll Number\n 3.Find Student by First Name\n 4.Count of Students\n 5.Delete a Student\n 6.Update Student\n 7.Display Student Details\n 8.Exit\n\t\t");
        scanf("%d",&a);
        switch(a) {
            case 1:
                add();
                break;
            case 2:
                searchingRoll();
                break;
            case 3:
                searchingName();
                break;
            case 4:
                printf("Total Students = %d\n",cnt-1);
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                Update();
                break;
            case 7:
                Display();
                break;
            case 8:
                z=0;
                break;
            default:
                printf("Invalid Choice!\n\n");
        }
    }
    return 0;
}