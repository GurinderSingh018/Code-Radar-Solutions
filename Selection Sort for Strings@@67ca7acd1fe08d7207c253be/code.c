void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(strcmp(arr[j],arr[i]<0)){
                char temp[100] =arr[i];
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
}

void printArray(int arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i])
    }
}