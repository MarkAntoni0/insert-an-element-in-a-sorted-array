//
//  Created by Mark Antonio on 3/13/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    //receiving the array size
    int size;
    printf("insert the array size: ");
    scanf("%d",&size);
    //filling the array values
    int arr[size+1];
    for(int i=0;i<size;i++){
        printf("insert the value of the element [%d]: ", i);
        scanf("%d",&arr[i]);
    }
    //inserting the element
    int newElement;
    printf("please insert the new element: ");
    scanf("%d",&newElement);
    arr[size] = newElement;
    //sorting the array elements using bubble sort
        for(int pass=0;pass<size;pass++){
            for(int position=0; position<size-pass;position++){
                if(arr[position]>arr[position+1]){
                    int temp = arr[position];
                    arr[position] = arr[position+1];
                    arr[position+1] = temp;
                }
            }
        }
    //printing the sorted array
    for (int i=0; i<size+1; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
