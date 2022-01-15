#include <stdio.h>
#include <stdlib.h>

const int base[] = {0,1,4,9,16,25,36,49,81,100,121,144,169,196,225,289,324,361,400,441,484,529,576,625,676,729,784,841,900,961};
const int base_length = 30;

int main(void) {
    int loops = 0;
    scanf("%d",&loops);
    int *ansPtr = (int*)malloc(loops*sizeof(int));

    for (int i=0;i < loops;i++) {
        int n1=0,n2=0;
        ansPtr[i] = 0;
        scanf("%d %d",&n1,&n2);
        for (int j=0;j<base_length;j++){
            if (base[j] < n1 ) {
                continue;
            } else if (base[j] > n2) {
                break;
            }
            ansPtr[i] += base[j];
        }
    }

    for (int i=0;i<loops;i++) {
        printf("Case %d: %d\n",i+1,ansPtr[i]);
    }
    
    return 0;
}