#include<stdio.h>
int main(){
double page_fault_not_modified=8*1000000;
double page_fault_modified=20*1000000;
 double memory_time=100;
double modified_per=0.7;
 double effec_access_time=200;
 double page_fault_rate;
 double pf1;
 double pf2;
 pf1= effec_access_time/(modified_per* page_fault_modified);
 pf2=(memory_time-effec_access_time)/memory_time;
 page_fault_rate=pf1+pf2;
 printf("%d",page_fault_rate);	
}
