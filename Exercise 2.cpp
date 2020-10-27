//
//  main.cpp
//  Exam 2
//
//  Created by Truong Lam on 10/27/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("");
        scanf("%d",&arr[i]);
    }
    float t=0;
    for(int i=0;i<n;i++){
        t+=arr[i];
    }
    float a=t/n;
    printf("Average: %f\n",a);
}
