void readArray(int array[], int n){
    for (int i = 0; i < n; i ++)
      cin >> array[i];
}
bool compareArray(int array1[], int array2[], int n){
    bool test = true;
    for (int i = 0; i < n; i ++){
        if(array1[i] != array2[i]){
            test = false;
            break;
        }
    }
    return test;
}
