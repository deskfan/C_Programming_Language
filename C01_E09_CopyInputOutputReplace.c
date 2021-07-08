#include<stdio.h>

//open terminal window below, choose command prompt
//gcc the source file (can drag and drop from above)
//run the program, ctrl+z to EOF
//ctrl+C to end


void main()

{  

//FOR LOOP FOR COUNTING CHARS  
//  double nc;
//  for (nc=0; getchar() != EOF; ++nc)
//    printf("%.0f\n",nc);

//1.9 PROGRAM TO COPYT INPUT TO OUTPUT REPLACING BLANK(S) WITH BLANK
  int c, nl, b, t;
  nl = 0;
  b = 0;
  t = 0;
    char last_char;

  while ((c = getchar()) != EOF){
//    if (c == '\n')
//      ++nl;
//    if (c == '\t')
//      ++t;
    if (c == ' '){
        if (last_char != ' ')
        printf("%d", c);
        last_char = c;}

    }
//  printf("Newline count is : %d\n",nl);
//  printf("Tab count is : %d\n",t);
//  printf("Blank count is : %d\n",b);
}
