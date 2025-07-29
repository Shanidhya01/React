#include <stdio.h>
int main(){
    // 1 st matrix order 
   int m;
   printf("ENTER NO OF ROWS OF 1 ST matrix :  ");
   scanf("%d",&m);
   int n;
   printf("ENTER NO OF column OF 1 ST matrix :  ");
   scanf("%d",&n);
   int a[m][n];
   //INPUT 1ST MATRIX 
    printf("\nENTER elements of  1 ST matrix :  ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
   //2 nd matrix order 
   int p;
   printf("ENTER NO OF ROWS OF 2nd matrix :  ");
   scanf("%d",&p);
   int q;
   printf("ENTER NO OF column OF 2nd matrix :  ");
   scanf("%d",&q);
   int b[p][q];
   //INPUT 2nd MATRIX 
    printf("\nENTER elements of  1 ST matrix :  ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d ",&b[i][j]);
        }
    }
   //check
   if(n!=p){
    printf("THE MATRIX CANNOT BE MULTIPLIED");
   }
   else{
    //MULTIPLY
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            //i row of a[][]  and j column of b[][]
            // (a[i][0],a[i][1],a[i][2].......)* (b[0][j],b[1][j],b[2][j]..........)
            res[i][j] =0;
            for(int k=0;k<n;k++){
                res[i][j] += a[i][k]  *  b[k][j];
            }
        }
    }
    //print res 
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
           printf("%d ",res[i][j]);
        }
        printf("\n");
    }
   }
    return 0;
}