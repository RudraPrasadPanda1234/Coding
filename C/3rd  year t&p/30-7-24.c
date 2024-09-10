#include<stdio.h>
int main(){
	int a = 10, t=8;                //1010=>10
    //add/mark task 3 as true
	a = a | (1<<(t-1));
	printf("%d",a|(1<<(t-1)));          //10001010=>138
	t=4;        //remove task 4
	a=a&~(1<<(t-1));                //10000010=>130
	printf("%d",a&~(1<<(t-1)));
    //Check a task 8 is marked or not 
    printf("%d",a&(1<<7));              //if 1=>2^t else 0
    //flip a task 3(0 to 1 or 1 to 0)
    a=a^(1<<3);
    printf("%d",a^(1<<3));
}