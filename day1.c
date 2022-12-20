// Q1.TRAVERSING ARRAY ELEMENTS 

// #include<stdio.h>
// int main(){
//     int arr[100],n;
//     printf("Enter the size of array:\n");
//     scanf("%d",&n);
//     printf("Enter the elements of array:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array elements are:\n");
//     for(int i=0;i<n;i++){
//         printf("%d   ",arr[i]);
//     }
// 
// return 0;
// }




// Q2.INSERT A ELEMENT IN A GIVEN ARRAY

// #include<stdio.h>
// int main(){
//     int arr[100],arr1[100],n,pos,val;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     printf("Enter the elements of array:\n");
//     for(int i=0;i<n;i++){
//          scanf("%d",&arr[i]);
//     }
//     printf("Enter the element which is to be insert\n");
//     scanf("%d",&val);
//     printf("Postion of new  elements where it is inserted\n");
//     scanf("%d",&pos);
//     for(int i=0;i<=n;i++){
//          if(i<pos-1){
//             arr1[i]=arr[i];
//          }
//          if((pos-1)==i){
//               arr1[i]=val;
//          }
//          if(i>pos-1){
//             arr1[i]=arr[i-1];
//          }
//          printf("%d  ",arr1[i]);
//     }
//     return 0;
// }




// Q3. INERTION IN A SORTED ARRAY

// #include<stdio.h>
// int main()
// {
//     int arr1[100],arr[100],n,i,val;
//     printf("Enter the size of array= \n");
//     scanf("%d",&n);
//     printf("Enter the array element:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the element which is to be inserted= \n");
//     scanf("%d",&val);
//     for(i=0;i<=n;i++){
//         if(val<arr[i]){
//             arr1[i]=arr[i];
//         }
//         if(val>arr[i]){
//             arr1[i]=val;
//             arr1[i]=arr[i-1];
//         }
//         printf("%d  ",arr1[i]);
//     }
//     return 0;
// }




// Q4.DELETE A ELEMENT FROM A ARRAY

// #include<stdio.h>
// int main()
// {
//     int arr[100],arr1[100],n,del,pos=0;
//     printf("Enter the size of array= ");
//     scanf("%d",&n);
//     printf("Enter the elements of array:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the element which is to be deleted= ");
//     scanf("%d",&del);
//     printf("Position of element in given array= ");
//     for(int i=0;i<n;i++){
//         if(arr[i]==del){
//             pos=i+1;
//         }
//     }
//     printf("%d\n",pos);
//     printf("New Array is:\n");
//     for(int i=0;i<n-1;i++){
//         if(i<(pos-1)){
//             arr1[i]=arr[i];
//         }
//         if(i>=(pos-1)){
//             arr1[i]=arr[i+1];
//         }
//         printf("%d ",arr1[i]);
//     }
//     return 0;
// }




// Q 5. MISSING NUMBER OF AN ELEMENT IN AN ARRAY


// #include<stdio.h>
// int main(){
//     int arr[10],n,i,sum2,sum1=0,mis;
//     printf("Enter the size of Array= ");
//     scanf("%d",&n);
//     printf("Enter the element of array:\n");
//     for(i=1;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=1;i<n;i++){
//         sum1+=arr[i];
//     }
//     sum2=n*(n+1)/2;
//     mis=sum2-sum1;
//     printf("The missing element is = %d",mis);
//     return 0;
// }




// Q6. FIND WHICH ELEMENT IS REPEATED IN ARRAY


// #include<stdio.h>
// int main(){
//     int arr[100],n,i,c=0,A[100];
//     printf("Enter the size of Array= ");
//     scanf("%d",&n);
//     printf("Enter array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Repeated elements are:\n");
//     for(i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 A[i]=arr[i];
//             }
//         }
//         c++;
//     }
//     for(i=0;i<c;i++){
//         printf("%d ",A[i]);
//     }
//     return 0;
// }




// Q7. REVERSE ARRAY ELEMENTS


// #include<stdio.h>
// int main(){
//     int arr[100],n;
//     printf("Enter the size of array=");
//     scanf("%d",&n);
//     printf("Enter the elements of array:\n");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Reversal of an Array is:\n");
//     for(int i=n;i>=1;i--){
//         printf("%d    ",arr[i]);
//     }
//     return 0;
// }



// Q10.INTERSECTION OF TWO SET

// #include<stdio.h>
// int main(){
//     int A[100],n,m,B[100];
//     printf("Enter the size of set A=");
//     scanf("%d",&n);
//     printf("Enter the size of Set B=");
//     scanf("%d",&m);
//     printf("Enter the element of Set A:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&A[i]);
//     }
//     printf("Enter the element of Set B:\n");
//     for(int i=0;i<m;i++){
//         scanf("%d",&B[i]);
//     }
//     printf("Intersection of two set:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(A[i]==B[j]){
//                 printf("%d    ",A[i]);
//             }
//         }
//     }
//     return 0;
// }



// Q11.  DIFFERENCE OF TWO MATRIX

// #include<stdio.h>
// int main(){
//     int n,m,A[100],B[100],C[100],p=0;
//     printf("Enter the size of Set A=");
//     scanf("%d",&n);
//     printf("Enter the size of Set B=");
//     scanf("%d",&m);
//     printf("Enter the elements of Set A:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&A[i]);
//     }
//     printf("Enter the elements of Set B:\n");
//     for(int i=0;i<m;i++){
//         scanf("%d",&B[i]);
//     }
//     printf("Difference of two set is:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(A[i]==B[j]){
//                 C[i]=A[i];
//             }
//         }
//     }
//     return 0;
// }


// Q16.  MATRIX ADDITION


// #include<stdio.h>
// int main(){
//     int arr1[100][100],arr2[100][100],arr[100][100],n,m;
//     printf("Enter the number of row in Array 1 and Array2=");
//     scanf("%d",&n);
//     printf("Enter the number of coloumn in Array 1 and Array2=");
//     scanf("%d",&m);
//     printf("Enter the Array 1 elements:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("Enter the Array 2 elements:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     printf("Sum of matrix is:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=arr1[i][j]+arr2[i][j];
//             printf("\t%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Q17. SUBTRACTION OF MATRIX


// #include<stdio.h>
// int main(){
//     int arr1[100][100],arr2[100][100],arr[100][100],n,m;
//     printf("Enter the number of row in Array 1 and Array2=");
//     scanf("%d",&n);
//     printf("Enter the number of coloumn in Array 1 and Array2=");
//     scanf("%d",&m);
//     printf("Enter the Array 1 elements:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("Enter the Array 2 elements:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     printf("Subtraction of two matrix is:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=arr1[i][j]-arr2[i][j];
//             printf("\t%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// Q18.  MULTIPLICATION OF TWO MATRIX


// #include<stdio.h>
// int main(){
//     int arr1[100][100],arr2[100][100],arr[100][100],n,m,k;
//     printf("Enter the number of row in Array 1 and Array2=");
//     scanf("%d",&n);
//     printf("Enter the number of coloumn in Array 1 and Array2=");
//     scanf("%d",&m);
//     printf("Enter the Array 1 elements:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("Enter the Array 2 elements:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     printf("Multiplication of two matrix is:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=0;
//             for(k=0;k<n;k++){
//                 arr[i][j]+=arr1[i][k]*arr2[k][j];
//             }
//             printf("\t%d",arr[i][j]);
//         }
//         printf("\n");
//     }     
//     return 0;
// }   




// Q19. TRANSPOSE OF A MATRIX

// #include<stdio.h>
// int main(){
//     int A[100][100],B[100][100],n,m;
//     printf("Enter the number of row in matrix=");
//     scanf("%d",&m);
//     printf("Enter the number of coloumns in matrix=");
//     scanf("%d",&n);
//     printf("Enter matrix elements:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     printf("The Transpose of matrix is:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             B[i][j]=A[j][i];
//             printf("\t%d",B[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }





// Q21. TRANSPOSE OF A MATRIX WITHOUT SECOND MATRIX


// #include<stdio.h>
// int main(){
//     int A[100][100],n,m;
//     printf("Enter the number of row in matrix=");
//     scanf("%d",&m);
//     printf("Enter the number of coloumns in matrix=");
//     scanf("%d",&n);
//     printf("Enter matrix elements:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&A[i][j]);
//         }
//     }
//     printf("The Transpose of matrix is:\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("\t%d",A[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }








