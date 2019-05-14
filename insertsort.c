#include <stdio.h>

void insertsort(int data[], int n) {
    int key, temp;

    for (int i=1; i< n; i++) {
        key = data[i];
        temp = i - 1;

        while( temp >= 0 && data[temp] > key) {
            data[temp+1] = data[temp];
            temp = temp -1;
        }
        data[temp+1] = key;
    }
}

int main() {
    int data[] = {1,9,2,8,3,7,4,6,5};
    insertsort(data, sizeof(data)/sizeof(data[0]));

    for (int i=0; i<sizeof(data)/sizeof(data[0]); i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
