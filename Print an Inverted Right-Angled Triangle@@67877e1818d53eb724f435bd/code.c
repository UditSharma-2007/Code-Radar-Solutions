// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>0=n;i++){
        
//     }
// }


#include <stdio.h>

void printTriangle(int N) {
    for (int i = N; i > 0; i--) {  // Loop for rows
        for (int j = 0; j < i; j++) {  // Loop for printing stars
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    printTriangle(N);

    return 0;
}
