using namespace std;

int getNthFib(int n) {
  // 0 1 1 2 3 5 ...
  int temp1 = 1;
  int temp2 = 1;
  int fib = 0;
  
  /* Return 1 when n = 1*/
  if(n == 1){ 
    return 0;
  }
  /* Return 2 when n = 2 or 3 */
  else if(n == 2 || n == 3){
    return 1;
  }
  /* If n > 3 */
  else{
    for(int i = 4; i<=n; i++){ // Iterate from 4 to n
      fib = temp1 + temp2; // Add the two previous numbers
      temp1 = temp2; // Advance previous numbers
      temp2 = fib;
    }
  }
  return fib;
}
