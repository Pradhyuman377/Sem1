 #include<stdio.h>
{
    int a[5],b[5],c[5],j,temp;
    printf("enter charcter of array a");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number of char of b");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<=3;j++)
    {
        if(a[j]>a[j+1])
        {
        temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
        }
    }
    for(j=0;j<=3;j++)
    {
        if(b[j]>b[j+1])
        {
            temp=b[j+1]
            b[j+1]=b[j];
            b[j]=temp;
        }
    }

}