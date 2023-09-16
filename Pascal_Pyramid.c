#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,x,c;

    printf("Enter how many lines you want: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
            for(j=0;j<x-i;j++){
                printf(" ");


            }

            for(k=0;k<i;k++){
                    if(k==0 || i==0 ){
                        c=1;
                        printf(" %d ",c);
                    }
                    else{
                    c=c*(i-k+1)/k;
                    printf(" %d ",c);
                    }


                }

                printf("1");
                printf("\n");
            }

return 0;
    }


