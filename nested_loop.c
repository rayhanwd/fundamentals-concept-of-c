    #include<stdio.h>
    int main(){
    int i,j,count=0; //initialization the variable name;

    for(i=1;i<=5;i++){

        for(j=1;j<=5;j++){
        count=count+1;
        printf("This is inner loop cal=%d\n",i);
    }
    }
    printf("Total count: %d",count);

    return 0;
    }
