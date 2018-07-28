#include <stdio.h>
#include <stdlib.h>

int bsort(int *p, int length);
void printt(int *p, int length);

int main()
{
    int length = 12;
    int *p = malloc(sizeof(int)*length);
    for(int i = 0; i < length; i++){
        p[i] = rand();
    }
    printt(p,length);
    bsort(p,length);
    printt(p,length);
    free(p);
}

void printt(int *p, int length){
    for(int i = 0; i < length; i++){
        printf("%d\t",p[i]);
    }
    printf("\n\n\n\n");
}

int bsort(int *p, int length){
    int flag = 1;
    while(flag){
        flag = 0;
        for(int i = 1; i < length; i++){
            if(p[i-1]>p[i]){
                int temp = p[i-1];
                p[i-1] = p[i];
                p[i] = temp;
                flag++;
            }
        }
    }
}
