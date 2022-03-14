void sort(float array[], int size, bool isAscending){
    if(isAscending == false){
        for(int i = 1; i <= size-1; i++)
          for(int j = 0; j < size-i; j++){
              if(array[j] < array[j+1]){
                  float t = array[j];
                  array[j] = array[j+1];
                  array[j+1] = t;
              }
          }
    }
    if(isAscending == true){
        for(int i = 1; i <= size-1; i++)
          for(int j = 0; j < size-i; j++){
              if(array[j] > array[j+1]){
                  float t = array[j];
                  array[j] = array[j+1];
                  array[j+1] = t;
              }
          }
    }
}
