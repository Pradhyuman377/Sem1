#include<stdio.h>
void display (struct data *);
void display(struct data *p)
{
    int i =0;
    for(;i<5;i++)
    {
        printf("employ's number is %d",*(p+i)->employ_number);
        printf("\nemploy's name is %s",*(p+i)->employ_name);
        peintf("\npay_of_employ is %f",*(p+i)->pay_of_employ);
    }
}
    struct data
    {
        int employ_number;
        char employ_name[20];
        float pay_of_employ;
    };
    struct data d[5],*p;
  void main()
{
    int i,n;
    printf("enter all details of employes : employ number ,name and pay");
    for(i=0;i<5;i++)
    {
        scanf("%d",&d[i].employ_number);
        fgets(d[i].employ_name,20,stdin);
        scanf("%f",d[i].pay_of_employ);
    }  
    p = &d[0];
    display(p);
}