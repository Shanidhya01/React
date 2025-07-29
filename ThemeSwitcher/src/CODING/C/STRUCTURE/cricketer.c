#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int noOfMatches;
        float average;
    } cricketer;

    // 3 cricketer
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf(" NAME   :   %s  %s \n",arr[i].firstname , arr[i].lastname);
        printf(" AGE  : %d\n",arr[i].age);
        printf(" NO OF MATCHES  : %d\n",arr[i].noOfMatches);
        printf(" AVERAGE   : %f\n\n",arr[i].average);
        printf("\n");
    }
    
    return 0;
}