#include<stdio.h>

int main()
{
    int num1,num2,pipe1,pipe2,pid,p1[2],p2[2];

    pipe1=pipe(p1);
    pipe2=pipe(p2);

    pid=fork();

    if(pipe1<0 || pipe2<0)
    {
		printf("Pipe creation faild..!!");
		return -1;
	}

    if(pid<0)
    {
        printf("Process creation faild..!!");
		return -1;
    }

    else if(pid>0)
    {
        // this is parent class
        printf("Enter the number 1: ");
        scanf("%d",&num1);

        printf("Enter the number 2: ");
        scanf("%d",&num2);

        write(p1[1],&num1,sizeof(num1));
        write(p2[1],&num2,sizeof(num2));
    }

    else
    {
        int num1,num2;

        read(p1[0],&num1,sizeof(num1));
        read(p2[0],&num2,sizeof(num2));

        printf("Total of number = %d",num1+num2);
    }
}