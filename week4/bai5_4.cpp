bool isPrime (int number){
    bool test = true;
    if (number <= 1) test = false;
    else
      for( int i = 2; i <= number/2; i++)
        if( number%i == 0){
            test = false;
            break;
        }
    return test;
}
