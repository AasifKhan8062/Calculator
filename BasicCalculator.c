#include <stdio.h>
int add(int num1, int num2){
  return num1+num2;
}
int sub(int num1, int num2){
  return num1-num2;
}
int multi(int num1, int num2){
  return num1*num2;
}
int division (int num1, int num2){
  if(num1 == 0 || num2 == 0)
    return -1;
  return num1/num2;
}
int main() {
  int num1,num2;
  int ans;
  char ch;
  do{
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    while ((getchar()) != '\n');
    printf("Enter the Operator (+,-,*,/) : ");
    scanf("%c",&ch);
    
    if(ch == '+'){
      ans = add(num1,num2);
      printf("%d",ans);
    }
    else if(ch == '-'){
      ans = sub(num1,num2);
      printf("%d",ans);
    }
    else if(ch == '*'){
      ans = multi(num1,num2);
      printf("%d",ans);
    }
    else if(ch == '/'){
      ans = division(num1,num2);
      if(ans == -1)
        printf("Not Division Velue");
      else
        printf("%d",ans);
    }
    else
      printf("Invalid");
    printf("\n\n");
  }while(ch != '0');
  
  return 0;
}
