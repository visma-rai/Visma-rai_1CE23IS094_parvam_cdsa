#include<stdio.h>
void main(){
    int arr[]={4,5,6,200,13,7};
    arr[1]=30;
    int *p=&arr[0];
    printf("%d\n",arr[0]);
    printf("%d\n",*p);
    printf("%d\n",arr[3]);
    printf("%d\n",*(p+3));
    printf("%x\t%x\t%x\n",p,arr,&arr[0]);
    printf("%d\n",arr[5]);
    printf("%d\n",*(p+5));
    printf("p=%x\n",p);
    p++;
    printf("%x\t%d\n",p,*p);
    p++;
    printf("%x\t%d\n",p,*p);
    p=p+3;
    printf("%x\t%d\n",p,*p);
    p-=2;
    printf("%x\t%d\n",p,*p);
   // arr++;
    printf("%x\t%d\n",p,*p);

}