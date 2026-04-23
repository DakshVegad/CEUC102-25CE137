#include "grading.h"

grading::grading(float x){ m=x; }

ug::ug(float x):grading(x){}

char ug::gr(){
    if(m>=75) return 'A';
    else if(m>=60) return 'B';
    else if(m>=50) return 'C';
    else if(m>=40) return 'D';
    else return 'F';
}

pg::pg(float x):grading(x){}

char pg::gr(){
    if(m>=85) return 'A';
    else if(m>=70) return 'B';
    else if(m>=60) return 'C';
    else if(m>=50) return 'D';
    else return 'F';
}