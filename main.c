#include <stdio.h>
#include <stdlib.h>

int CompareIntArrays(int arr1[], int size1, int arr2[], int size2){
    if(size1 == size2 ){
    for(int i = 0 ; i < size1; ++i){
            arr1[i];
        for(int j = 0; j < size2; ++j){
            arr2[j];
            if(arr1[i] == arr2[j])
                return 1;
            else
                return 0;
        }
    }
}
    else
return 0;
}
int CompareIntArrays2(int arr1[], int size1, int arr2[], int size2){
    int i = 0 , j = 0 ;
    if(size1 != size2 )
        return 0;
    else
        while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
        i++;
        j++;
        }else {return 0;}
}
return 1;
}
int CompareIntArrays3(int arr1[], int size1, int arr2[], int size2){
    if(size1 != size2 )
        return 0;
    else
    for(int i = 0 ; i < size1; ++i){
        for(int j = 0; j < size2; ++j){
            if(arr1[i] == arr2[j])
                return 1;
            else
                return 0;
        }
    }
}
int CompareIntArrays4(int arr1[],int size1,int arr2[],int size2){
int i=0;
int j=0;

    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
        i++;
        j++;
        }else {return 0;}
}
return 1;
}
int main()
{
    int arr1[] = {1,2,3,4,5};
    int size1 = 5;
    int arr2[] = {1,2,3,4,6};
    int size2 = 5;
  //  CompareIntArrays(arr1, size1, arr2, size2);
    CompareIntArrays2(arr1, size1, arr2, size2);
   // CompareIntArrays3(arr1, size1, arr2, size2);
 //   CompareIntArrays4(arr1, size1, arr2, size2);
    return ;
}
