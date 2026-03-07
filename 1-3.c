#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mpersons[5] = {0};
int wpersons[5] = {0};

char mn[10][20];
int mr[10];
int mc;
char wn[10][20];
int wr[10];
int wc;

int findRoom(int persons[5]){
    int index;
    while(1){
        index = rand() % 5;
        if (persons[index] != 2)
            break;
    }

    return index;
}

void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc){
    printf("===========================================\n");
    printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
    printf("===========================================\n");
    printf("남학생 명단 (%d명)\n", mc);
    int count = 1;
    for(int i = 0 ; i < 10; i++){
        if(mn[i][0] != '\0'){
            printf("%d. %s [%d호]\n", count++, mn[i], 101 + i/2);
        }
    }
    printf("\n여학생 명단 (%d명)\n", wc);
    count = 1;
    for(int i = 0 ; i < 10; i++){
        if(wn[i][0] != '\0'){
            printf("%d. %s [%d호]\n", count++, wn[i], 201 + i/2);
        }
    }
    printf("\n호실별 배정 명단\n");
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 5; j++){
            if(i == 1)
                printf("%d0%d호 : %s %s\n", i, j, mn[(j-1)*2], mn[(j-1)*2+1]);
            else
                printf("%d0%d호 : %s %s\n", i, j, wn[(j-1)*2], wn[(j-1)*2+1]);
        }
    }
}

int main(){
    int menu, random;
    char name[20];

    printf("===========================================\n");
    printf("생활관 호실 배정 프로그램\n");
    printf("===========================================\n");
    while(1){
    printf("메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ");
    scanf("%d", &menu);

    if (menu == 0)
        break;
    if(mc + wc >= 20){
        printf("생활관 정원이 모두 찼습니다.\n");
        break;
    }
    

    printf("학생 이름은? > ");
    scanf("%s", name);

    if(menu == 1){
        
        if(mc >= 10){
            printf("남학생 정원이 가득 찼습니다.\n");
            continue;
        }
        random = findRoom(mpersons);
        random = random * 2;
        int random1 = random + 1;

        if(mn[random][0] == '\0')
            strcpy(mn[random], name);
        else
            strcpy(mn[random1], name);
        printf("%s 학생은 %d호실 배정되었습니다.\n", name, 101 + random/2);
        mr[mc] = 101 + random/2; 
        mc++;
        mpersons[random/2]++;
    }

    if(menu == 2){
        if(wc >= 10){
            printf("여학생 정원이 가득 찼습니다.\n");
            continue;
        }
        random = findRoom(wpersons);
        random = random * 2;
        int random1 = random + 1;

        if(wn[random][0] == '\0')
            strcpy(wn[random], name);
        else
            strcpy(wn[random1], name);
        printf("%s 학생은 %d호실 배정되었습니다.\n", name, 201 + random/2);
        wr[wc] = 201 + random/2; 
        wc++;
        wpersons[random/2]++;
    }

}
    printReport(mn, mr, mc, wn, wr, wc);

    return 0;
}