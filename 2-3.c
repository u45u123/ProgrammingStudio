#include <stdio.h>

struct st_score{
  int kor, eng, mat;
  int sum;
  float avg;
  char grade;
};

void sumClass(struct st_score p[], int* sum, float* avg, int i);
void evalStudent(struct st_score* p);

int main(void) {
  struct st_score p[5];
  int sum;
  float avg;
  
  for(int i=0; i<5; i++) {
    fscanf(stdin, "%d %d %d", &p[i].kor, &p[i].eng, &p[i].mat);
    evalStudent(p+i);
  }
  
  for(int i=0; i<3; i++) {
    sumClass(p, &sum, &avg, i);
  }

  return 0;
}

void evalStudent(struct st_score* p){
  
  p->sum = p->kor + p->eng + p->mat;
  p->avg = p->sum / 3.0;

  if(p->avg >= 90) p->grade = 'A';
  else if(p->avg >= 80) p->grade = 'B';
  else if(p->avg >= 70) p->grade = 'C';
  else if(p->avg >= 60) p->grade = 'D';
  else p->grade = 'F';

  printf("sum=%d avg=%.2f grade=%c\n", p->sum, p->avg, p->grade);
}

void sumClass(struct st_score p[], int* sum, float* avg, int i){

  *sum = 0;

  for(int j=0; j<5; j++){
    
    if(i == 0) *sum += p[j].kor;
    else if(i == 1) *sum += p[j].eng;
    else if(i == 2) *sum += p[j].mat;
  }

  *avg = *sum / 5.0;

  if(i == 0)
    printf("KOR sum=%d avg=%.2f\n", *sum, *avg);
  else if(i == 1)
    printf("ENG sum=%d avg=%.2f\n", *sum, *avg);
  else
    printf("MAT sum=%d avg=%.2f\n", *sum, *avg);
}