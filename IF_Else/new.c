// #include<stdio.h>
// int main() {
//     int n, i, j;
//     int flag = 1;   // Assume it is lower triangular
//     printf("Enter the order of matrix (N): ");
//     scanf("%d", &n);

//     int mat[n][n];

//     printf("Enter elements of the %dx%d matrix:\n", n, n);
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             scanf("%d", &mat[i][j]);
//         }
//     }

//     // Check for lower triangular: all elements above diagonal must be 0
//     for(i = 0; i < n; i++) {
//         for(j = i+1; j < n; j++) {   // j > i means above diagonal
//             if(mat[i][j] != 0) {
//                 flag = 0;
                
//             }
//         }
        
//     }

//     if(flag == 1)
//         printf("The matrix IS a Lower Triangular Matrix.\n");
//     else
//         printf("The matrix is NOT a Lower Triangular Matrix.\n");

//     return 0;
// }
#include<stdio.h>
#include<string.h>

// Function to reverse substring from start to end index
void reverseSubstring(char str[], int start, int end) {
    char temp;
   for(int i=start;i<end ; i++) 
    if(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    int start, end;

    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);

    // Validate indices
    int len = strlen(str);
    if(start < 0 || end >= len || start > end) {
        printf("Invalid indices!\n");
        return 1;
    }

    reverseSubstring(str, start, end);

    printf("Output string: %s\n", str);
    return 0;
}