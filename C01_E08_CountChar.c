#include<stdio.h>

// count chars in input

//open terminal window below, choose command prompt
//gcc the source file (can drag and drop from above)
//run the program, ctrl+z to EOF
//ctrl+C to end


void main()

{  
//WHILE LOOP FOR COUNTING CHARS
//    int c;
//    long nc;
//    nc = 0;
//    while ((c = getchar()) != EOF){
//      printf("The char is : %c \n",c);
//      printf("The total is : %ld \n", nc);
//      ++nc;
//    }

//FOR LOOP FOR COUNTING CHARS  
//  double nc;
//  for (nc=0; getchar() != EOF; ++nc)
//    printf("%.0f\n",nc);


//WHILE LOOP FOR COUNTING NEWLINES
//  int c,nl;

//  nl = 0;

//  while ((c = getchar()) != EOF)
//    if (c == '\n')
//    ++nl;

//  printf("%d\n",nl);

//1.8 PROGRAM TO COUNT BLANKS, TABS AND NEWLINES
  int c, nl, b, t;

  nl = 0;
  b = 0;
  t = 0;

  while ((c = getchar()) != EOF){
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++t;
    if (c == ' ')
      ++b;
    }
  printf("Newline count is : %d\n",nl);
  printf("Tab count is : %d\n",t);
  printf("Blank count is : %d\n",b);
}
