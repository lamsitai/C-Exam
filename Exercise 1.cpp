//
//  main.cpp
//  Exam 1
//
//  Created by Truong Lam on 10/27/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter numbers: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("");
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            x=arr[i];
        }
    }
    if(x!=0){
        printf("Last Even: %d\n",x);
    }else{
        printf("No EVEN Number\n");
    }
}
