#include<stdio.h>

void BubbleSort(int a[], int len) {
	int i, j, temp;
	for(i = 0; i < len - 1; i++) {
		//key = a[i];
		for(j = i+1; j < len; j++) {
			 if(a[j] < a[i]) {
			 	temp = a[i];
			 	a[i] = a[j];
			 	a[j] = temp;
			 } 	
		}
	}
}

int main()
{
    int i;
    int a[] = {80, 93, 60, 12, 42, 30, 68, 85, 10};

    printf("起泡排序:\n");
    BubbleSort(a, sizeof(a)/sizeof(a[0]));
    for(i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
        printf("%d ", a[i]);
    printf("\n");

    // printf("快速排序:\n");
    // QSort(a, 0, sizeof(a)/sizeof(a[0]));
    // for(i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
    //     printf("%d ", a[i]);
    // printf("\n");

    return 0;
}