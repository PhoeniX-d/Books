 /* 5 letter word encoding */
 #include<stdio.h>
 int main()
 {
     char c1, c2, c3, c4, c5;
     printf("Enter 5 letter word\n");
     scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
     printf("%c%c%c%c%c", c1 - 23, c2 - 30, c3 - 30, c4 - 30, c5 - 30);
     return 0;
 }