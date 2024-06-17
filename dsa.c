// /*#include<stdio.h>
// void main()
// {
//     int a[1000], b, c, d, e=-999, f, g, h;
//     printf("enter size of array:");
//     scanf_s("%d", &c);
//     printf("enter element in array:");
//     for (d = 0; d < c; d++)
//     {
//         scanf("%d", &a[d]);
//     }
//     if (a[0] < a[1])
//     {
//         e = a[0];
//     }
//     else
//     {
//         e = a[1];
//     }

//     for (d = 1; d < c; d++)
//     {
//         if (e > a[d + 1])
//         {
//             e=a[d + 1];
//         }
//     }
//         for (d = 0; d < c; d++)
//         {
//             if(e==a[d])
//             {
//                 f=d;
//                 break;
//             }
//         }

//     printf("\n the smallest element in array is :%d and present at position :%d ",e,f);

// }
// //wap to merge 2 array of same size sorted in ascending order and if thier size is different size print '-1'
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// void main()
// {
//     printf(" \t\t\t\tWELLCOME TO ROCK PAPER AND SCISSOR GAME.\n ");
//     printf("your opponent is computer.");
//     char a;
//     int N;
//     srand(time(NULL));
//     N = rand() % 100;

//     printf("%d", N);

// }
// #include<stdio.h>
// void main()
// {

// }
// #include <bits/stdc++.h>
// using namespace std;

// void bubble_sort(int arr[], int n) {
//     // bubble sort
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = 0; j <= i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }

//     cout << "After Using bubble sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using Bubble Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubble_sort(arr, n);
//     return 0;

// }
//                          SORTING TECHNIQUE:
/*BUBBLE SORT:
// #include<stdio.h>
// void main()
// {
//     int a,b,c[100],d,e,g,h,i,f;
//     printf("enter size of array:");
//     scanf("%d",&a);
//     printf("enter the elmenets of array:");
//     for(b=0;b<a;b++)
//     {
//         scanf("%d",&c[b]);
//     }
// for(d=0;d<a;d++)
// {
//     for(e=0;e<a-1;e++)
//     {
//         if(c[e]>c[e+1])
//         {
//             g=c[e];
//             c[e]=c[e+1];
//             c[e+1]=g;
//         }
//     }
// printf("\n  array after sorting %d:",d+1);
//     for(b=0;b<a;b++)
//     {
//         printf("%d\n",c[b]);
//     }
// }*/
/*MERGE SORT:
// #include <stdio.h>
// #include <stdlib.h>

// void merge(int arr[], int low, int mid, int high)
//  {
//     int temp[high - low + 1]; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr
//     int k = 0; // index for temporary array

//     // storing elements in the temporary array in a sorted manner
//     while (left <= mid && right <= high)
//      {
//         if (arr[left] <= arr[right]) {
//             temp[k++] = arr[left++];
//         } else {
//             temp[k++] = arr[right++];
//         }
//     }

//     // if elements on the left half are still left
//     while (left <= mid) {
//         temp[k++] = arr[left++];
//     }

//     // if elements on the right half are still left
//     while (right <= high) {
//         temp[k++] = arr[right++];
//     }

//     // transferring all elements from temporary to arr
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(int arr[], int low, int high)
//  {
//      if(low>=high)
//     {
//       return;
//     }
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }

// int main()
// {
//      int n ;
//      printf("enetr the size of array:");
//     scanf("%d",&n);
//     int arr[100];
//     printf("enter the element of array:");
//     for (int i=0;i<n; i++)
//     {
//        scanf("%d",&arr[i]);
//     }
//     printf("Before Sorting Array:\n");
//     for (int i = 0; i <n; i++)
//      {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     mergeSort(arr, 0, n - 1);

//     printf("After Sorting Array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }*/
//                            STACK:
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Define the maximum length of the expression
// #define MAX_EXPR_LENGTH 100

// // Structure for stack
// struct Stack {
//     int top;
//     unsigned capacity;
//     char* array;
// };

// // Function to create a stack of given capacity
// struct Stack* createStack(unsigned capacity) {
//     struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
//     stack->capacity = capacity;
//     stack->top = -1;
//     stack->array = (char*)malloc(stack->capacity * sizeof(char));
//     return stack;
// }

// // Function to check if the stack is full
// int isFull(struct Stack* stack) {
//     return stack->top == stack->capacity - 1;
// }

// // Function to check if the stack is empty
// int isEmpty(struct Stack* stack) {
//     return stack->top == -1;
// }

// // Function to push an element to the stack
// void push(struct Stack* stack, char item) {
//     if (isFull(stack))
//         return;
//     stack->array[++stack->top] = item;
// }

// // Function to pop an element from the stack
// char pop(struct Stack* stack) {
//     if (isEmpty(stack))
//         return '\0';
//     return stack->array[stack->top--];
// }

// // Function to check if the given expression is correctly parenthesized
// int isParenthesized(char* expr) {
//     struct Stack* stack = createStack(strlen(expr));
//     for (int i = 0; expr[i] != '\0'; i++) {
//         if (expr[i] == '(')
//             push(stack, expr[i]);
//         else if (expr[i] == ')') {
//             if (isEmpty(stack)) {
//                 free(stack->array);
//                 free(stack);
//                 return 0;
//             }
//             pop(stack);
//         }
//     }
//     int result = isEmpty(stack);
//     free(stack->array);
//     free(stack);
//     return result;
// }

// // Main function
// int main() {
//     char expr[MAX_EXPR_LENGTH];
//     printf("Enter the expression: ");
//     fgets(expr, MAX_EXPR_LENGTH, stdin);

//     // Removing newline character if present
//     if (expr[strlen(expr) - 1] == '\n')
//         expr[strlen(expr) - 1] = '\0';

//     if (isParenthesized(expr))
//         printf("The expression is correctly parenthesized.\n");
//     else
//         printf("The expression is not correctly parenthesized.\n");

//     return 0;
// }*/
// /*
// #include<stdio.h>
// #include<stdlib.h>
// void push(int data);
// int pop();
// void print();
// int full();
// #define max 4
// int arr[max];
// int top =-1,da;
// int main()
// {
//     push(1);
//     push(2);
//     push(3);
//     push(4);
//     push(5);
//     push(6);
//     da=pop();
//     printf("%d",da);
//     da=pop();
//     printf("%d",da);
//     print();
//     return 0;
// }
// void push(int data)
// {
//     if(top==max-1)
//     {
//         printf("STACK OVERFLOW");
//         return;
//     }
//     top++;
//     arr[top]=data;

// }
// int  pop( )
// {
//     if(top==-1)
//     {
//         printf("stack underflow.");
//         exit(1);
//     }
// int value ;
// value=arr[top];
// top--;
// return value;
// }
// void print()
// {
//     int i;
//     if(full())
//     {
//         printf("STACK UNDERFLOW.");
//     }
//     for(i=top;i>=0;i--)
//     {
//       printf("%d\n",arr[i]);
//     }
// }
// int full()
// {
//     if(top== max-1)
//     {
//         return 1;
//     }
//     else
//     {
//        return 0;
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// #define max 10
// int full();
// int empty();
// int push(int a);
// int pop();
// int topmost(int f);
// int all();
// int top = -1;
// int b[max];
// int main()
// {
//     int choice, data, d;
//     while (1)
//     {
//         printf("\n");
//         printf("\t\t\t\tenter your choice:");
//         printf("\n1.push\n");
//         printf("2.pop\n");
//         printf("3.print the element\n");
//         printf("4.print all the element of the stack\n");
//         printf("5.quit\n");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf(" enter the element to be pushed :");
//             scanf("%d", &data);
//             push(data);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             topmost(data);
//             break;
//         case 4:
//             all();
//             break;
//         case 5:
//             exit(1);
//             break;
//         default:
//             printf("enter the number between 1 to 5....");
//             break;
//         }
//     }
//     return 0;
// }
// int push(int a)
// {

//     if (full())
//     {
//         printf("stack is overflow..");
//         return;
//     }
//     top++;
//     b[top] = a;
//     printf("element entered in stack...");
//     return 0;
// }
// int pop()
// {
//     int c;
//     if (empty())
//     {
//         printf("stack is underflow");
//         return;
//     }
//     c = b[top];
//     top--;
//     printf("element deleted from stack is %d", c);
//     return 0;
// }
// int full()
// {
//     if (top == max - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int empty()
// {
//     if (top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int all()
// {
//     int i;
//     if (empty())
//     {
//         printf("stack is underflow..");
//         return;
//     }
//     printf("elemnet in array are:");
//     for (i = top; i>= 0; i--)
//     {
//         printf("\n%d", b[i]);
//     }
//     return 0;
// }
// int topmost(int f)
// {
//     if (empty())
//     {
//         printf("stack is underflow..");
//         return;
//     }
//     printf("\n\t\t\t\tthe topmost element in stack is:%d",f);
// }*/
//
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int fun(int c);
// int main()
// {
//     int a, b,d;
//     scanf("%d\t%d", &a, &b);
//     for(d=a;d<=9;d++)
//     {
//         fun(d);
//     }
//     for(d=a;d<=9;d++)
//     {
//   	if(d%2==0)
//       {
//         printf("\neven");
//       }
//       else {
//       printf("\nodd");
//       }
// }

//     return 0;
// }
// int fun(int c)
// {
//     switch(c)
//     {
//         case 1:
//         printf("one");
//         break;
//         case 2:
//         printf("two");
//         break;
//         case 3:
//         printf("three");
//         break;
//         case 4:
//         printf("four");
//         break;
//         case 5:
//         printf("five");
//         break;
//         case 6:
//         printf("six");
//         break;
//         case 7:
//         // printf("seven");
//         break;
//         case 8:
//         printf("eight");
//         break;
//         default:
//         printf("nine");
//         break;
//     }
//     return 0;
// }
/*
#include <stdio.h>
#include <string.h>
char data[1000];
int top = -1;
char pop(char d);
int push(char a);
void main()
{
    char d;
    char string[] = "himank";
    int pal = 1, i, l;
    l = strlen(string);
    if (l == 1)
    {
        pal = 1;
    }
    else
    {
        i=0;
        while(string[i]=='\0')
        {
            push(string[i]);
            i++;
        }
        i=0;
        while(string[i]=='\0')
        {
            if(string[i]!=pop(d))
            {
                pal=0;
                break;
            }
        }
    }
    if(pal==0)
    {
        printf("string is not palindrome.");
    }
    else{
       printf("string is palindrome.");
    }
}
char pop(char d)
{
    char c;
d=data[top];
top--;
return d;
}
int push(char a)
{
    top++;
    data[top]= a;
    return 0;
}*/
// }
// #include <stdio.h>
// int data[1000];
// int top = -1;
// int pop();
// int push(int a);
// void main()
// {
//     int string;
//     printf("enter your  number:");
//     scanf("%d", &string);
//     int h = string,j;
//     int pal = 1, i=0, l = 0;
//     while (string != 0)
//     {
//         j=string%10;
//         l++;
//         push(j);
//         string = string / 10;
//     }
//     string=h;
//     while(i<l)
//     {
//      if(h%10!=pop())
//      {
//         pal=0;
//         break;
//      }
//      else
//      {
//        h/=10;
//      }
//      i++;
//     }
//     if(pal==1)
//     {
//         printf("number is palindrome");
//     }
//     else
//     {
//         printf("number is not palindrome");
//     }
// }
// int push(int a)
// {
//     top++;
//     data[top]= a;
// }
// int pop()
// {
//     int k;
//     k=data[top];
//     top--;
//     return k;
// }
// #include <stdio.h>
// #include <string.h>
// #include<stdlib.h>
// int top = -1;
// char data[1000];
// void push(char c);
// char pop();
// int main()
// {
//     int val = 0, i;
//     char exp[1000];
//     printf("enter your expression:");
//     fgets(exp,sizeof(exp),stdin);
//     char symbol;
//     int l = strlen(exp);
//     for (i = 0; i < l; i++)
//     {
//         if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
//         {
//             push(exp[i]);
//         }
//         else
//         {
//             if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
//             {
//                 if (top != -1)
//                 {
//                     symbol = pop();
//                     switch (symbol)
//                     {
//                     case '(':
//                         if (exp[i] == ')')
//                         {
//                             val = 1;
//                         }

//                     case '[':
//                         if (exp[i] == ']')
//                         {
//                             val = 1;
//                         }

//                     case '{':
//                         if (exp[i] == '}')
//                         {
//                             val = 1;
//                         }

//                     }
//                 }
//                 else
//                 {
//                    printf("\n expression is not correct.");
//                    exit(0);
//                 }
//             }
//         }
//     }
//     if ( top == -1 )
//     {
//         printf("\nexpression is correct.");
//     }
//     else
//     {
//         printf("\nexpression is not correct.");
//     }
//     return 0;
// }
// void push(char c)
// {
//     top++;
//     data[top] = c;
// }
// char pop()
// {
//     char k;
//     if (top == -1)
//     {
//         printf("stack is underflow");
//     }
//     k = data[top];
//     top--;
//     return k;
// }
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
char data[1000];
int top = -1;
void push(int a);
int pop();
int main()
{
    int i, j, k, l, res, m;
    char post[1000];
    printf("enter your postfix expression:");
    fgets(post, sizeof(post), stdin);
    j = strlen(post);
    for (i = 0; i < j; i++)
    {
        if (isdigit(post[i]))
        {
            push(post[i] - '0');
        }
        else
        {
            k = pop();
            l = pop();
            switch (post[i])
            {
            case '+':
                res = k + l;
                break;
            case '-':
                res = l -k ;
                break;
            case '*':
                res = k * l;
                break;
            case '/':
                res = l / k;
                break;
            case '$':
                res = 1;
                for (m = 1; m <= l; m++)
                {
                    res = res * k;
                }
                break;
            case '%':
                res = l % k;
                break;
            }
            push(res);
        }
    }
    if(top>0)
    {
        printf("discrepancy between number of operator and operands.");
    }
    else
    {
    k = pop();
    printf("\nresult = %d", k);
    }
    return 0;
}
void push(int a)
{
    top++;
    data[top] = a;
}
int pop()
{
    int e;
    e = data[top];
    top--;
    return e;
}*/
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>
// char stack[10000];
// int push(char a);
// int pop();
// int top = -1;
// int main()
// {
//     char b[100];
//     fgets(b, sizeof(b), stdin);
//     int l = strlen(b); // string length
//     for (int i = 0; i < l; i++)
//     {
//         if (isdigit(b[i]))
//         {
//             push(b[i] - '0');
//         }
//         else
//         {
//             int c = pop(), e;
//             int d = pop();
//             switch (b[i])
//             {
//             case '+':
//                 e = d + c;
//                 break;
//             case '-':
//                 e = d - c;
//                 break;
//             case '/':
//                 e = d / c;
//                 break;
//             case '*':
//                 e = d * c;
//                 break;
//             }
//             push(e);
//         }
//     }
//     if (top == 0)
//     {
//         printf("\ninncorrect");
//     }
//     else
//     {
//         int f;
//         f = pop();
//         printf("\nresult is :%d", f);
//     }
// }
// int push(char a)
// {
//     top++;
//     stack[top] = a;
// }
// int pop()
// {
//     int k;
//     k = stack[top];
//     top--;
//     return k;
// }
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int top=-1;
// char stack[1000];
// int push(char a);
// void in2post(char []);
// int pop();
// void main()
// {
//  char data[1000];
//  fgets(data,sizeof(data),stdin);
//  in2post(data);
// }
// int push( char a)
// {
//     top++;
//     stack[top]=a;
// }
// int pop()
// {
//     int k;
//     k=stack[top];
//     top--;
//     return k;
// }
// bubble sorting.
/*
#include <stdio.h>
void main()
{
    int arr[1000], n;
    printf("enter your size of array:");
    scanf("%d", &n);
    printf("enter the element of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int last, mid;
    last = n - 1;
    mid = last / 2;
    printf("\n%d", mid);
    printf("\nenter the number you want to search:");
    int i, s;
    scanf("%d", &s);
    if (s == arr[mid])
    {
        printf("\n%d  is present at %d location.", s, ++mid);
        exit(0);
    }
    if (s > arr[mid])
    {
        for (i = mid; i < n; i++)
        {
            if (s == arr[i])
            {
                printf("\n%d  is present at %d location.", s, ++i);
                exit(0);
            }
        }
    }
    else
    {
        for (i = 0; i < mid; i++)
        {
            if (s == arr[i])
            {
                printf("\n%d  is present at %d location.", s, ++i);
                exit(0);
            }
        }
    }
    printf("\n element not found in the list.");
}*/
// HASHING
//  #include<stdio.h>
//  void main()
//  {

// }
// Find Numbers with Even Number of Digits
/*#include <stdio.h>
void main()
{
    int e = 0, a, b[100], c, d, f = 0, g = 0;
    printf("size of array:");
    scanf("%d", &a);
    printf("enter the element:");
    for (c = 0; c < a; c++)
    {
        scanf("%d", &b[c]);
    }
    for (c = 0; c < a; c++)
    {
        d = b[c];
        while (d != 0)
        {
            e++;
            d = d / 10;
        }
        if ((e>=1)&&(e % 2 == 0))
        {
            f++;
        }
    }
    printf("\n%d",f);
}
// Max Consecutive Ones
#include <stdio.h>
void main()
{
    int e = 0, a, b[100], c, d=0, f = 0, g = 0;
    printf("size of array:");
    scanf("%d", &a);
    printf("enter the element:");
    for (c = 0; c < a; c++)
    {
        scanf("%d", &b[c]);
    }
    for (c = 0; c < a; c++)
    {
        if(b[c]==b[c+1])
        {
            d++;
        }
    }
   printf("\n%d",d);
}*/
// parenthieses..
// WAP to check if a given expression is correctly parenthesized using stacks
// 3rd manual program
/*
#include <stdio.h>
#include <string.h>
#define max 15
char stack[max];
int top = -1, i;
void push(char);
char pop();
void display();
int main()
{
    char expression[max], temp;
    display();
    int count = 1;
    printf("\n Enter an expression..\n");
    scanf("%s", &expression);
    for (i = 0; i < strlen(expression); i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            push(expression[i]);
        }
        if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (top == -1)
            {
                count = 0;
            }
            else
            {
                temp = pop();
                if (expression[i] == ')' && (temp == '{' || temp == '['))
                {
                    count = 0;
                }
                if (expression[i] == '}' && (temp == '(' || temp == '['))
                {
                    count = 0;
                }
                if (expression[i] == ']' && (temp == '(' || temp == '{'))
                {
                    count = 0;
                }
            }
        }
    }
    if (top >= 0)
    {
        count = 0;
    }
    if (count == 1)
    {
        printf("\n valid Expression..");
    }
    else
    {
        printf("\n not valid expression..\n");
    }
}

void push(char c)
{

    if (top == max - 1)
    {
        printf("\n overflow...");
    }
    else
    {
        top = top + 1;
        stack[top] = c;
    }
    printf("\n");
}

char pop()
{
    if (top == -1)
    {
        printf("\n underflow...");
    }
    else
    {
        return (stack[top--]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("No elements in stack..");
    }
    else
    {
        for (i = 0; i < max; i++)
        {
            printf("%s", stack[i]);
        }
    }
}*/
/*
#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
 stack[++top] = x;
}

char pop()
{
 if(top == -1)
     return -1;
 else
     return stack[top--];
}

int priority(char x)
{
 if(x == '(')
     return 0;
 if(x == '+' || x == '-')
     return 1;
 if(x == '*' || x == '/')
     return 2;
 return 0;
}

int main()
{
 char exp[100];
 char *e, x;
 printf("Enter the expression : ");
 scanf("%s",exp);
 printf("\n");
 e = exp;

 while(*e != '\0')
 {
     if(isalnum(*e))
         printf("%c ",*e);
     else if(*e == '(')
         push(*e);
     else if(*e == ')')
     {
         while((x = pop()) != '(')
             printf("%c ", x);
     }
     else
     {
         while(top != -1 &&  priority(stack[top]) >= priority(*e))
             printf("%c ",pop());
         push(*e);
     }
     e++;
 }

 while(top != -1)
 {
     printf("%c ",pop());
 }
 return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define maxsize 1000
int queue[maxsize];
int front = -1,rear = -1;
int isfull()
{
 return rear == maxsize-1;
}
int isempty()
{
 return front == -1;
}
void Enqueue(value)
{
 if(isfull())printf("\nQueue Overflow\n");
 else
 {
     queue[++rear] = value;
     if(front==-1)
     front=rear;
     printf("\n%d is added in queue !!!!\n",value);
 }
}
int Dequeue()
{
 if(isempty()||front>rear)printf("\nQueue underflow\n");
 else
 {
     int value = queue[front++];
     if(front>rear)
     front=rear=-1;
     return value;
 }
}
void peek()
{
 if(isempty()||front>rear)
 printf("\nQueue is Empty!!!!\n");
 else {
 int value1;
 value1 = queue[front];
 if(value1>0)
 printf("\nValue in the queue is :- %d\n",value1);
 }
}
void display(){
 int i;
 if(isempty())
 printf("\nQueue is Empty !!!!\n");
 else {
     for(i=front;i<=rear;i++)
     printf("%d\t",queue[i]);
 }
 printf("\n");
}
void main()
{
 Enqueue(10);
 Enqueue(20);
 Enqueue(30);
 Enqueue(40);
 Enqueue(50);
 display();
 printf("\nDequeued item: %d .\n",Dequeue());
 printf("\nDequeued item: %d .\n",Dequeue());
 display();
 Enqueue(60);
 Enqueue(70);
 display();

}*/
// first element at arr[0].
/*#include <stdio.h>
int first = -1;
int size, element;
int stack[1000];
int pop()
{
    int value, k;
    value = stack[0];
    for (k = 0; k < first; k++)
    {
        stack[k] = stack[k + 1];
    }
    first--;
    return 0;
}
int push(int element)
{
    int i;
    if (first == -1)
    {
        first++;
        stack[0] = element;
    }
    else
    {
        first++;
        for (i = first; i > 0; i--)
        {
            stack[i] = stack[i - 1];
        }
        stack[0] = element;
    }
}
void print()
{
    for (int j = 0; j <=first; j++)
    {
        printf("%d\n", stack[j]);
    }
}
int main()
{
    printf("enter the number:");
    scanf("%d", &size);
    for (int j = 0; j < size; j++)
    {
        scanf("%d", &element);
        push(element);
    }
    printf("\nthe element are:");
    print();
    pop();
    printf("\nthe element are:");
    print();
    pop();
    printf("\nthe element are:");
    print();
    return 0;
}*/
// bubble sorting
/*
#include <stdio.h>
void main()
{
    int a[100], n, temp, i, j;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elements before sorting are:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 0; i <n-1 ; i++)
    {
        printf("\npass %d:\n", i);
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j]>a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            printf("%d\t", a[j]);
        }
    }
    printf("\nelements after sorting are:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}*/
// INSERTION SORT:
/*
#include <stdio.h>
void main()
{
    int a[100], n, temp, i, j;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elements before sorting are:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 1; i < n; i++)
    {
        j= i;
        printf("\npass %d:",i);
        while (j > 0 && a[j - 1] > a[j])
        {
            temp = a[j];
         a[j]=a[j-1];
         a[j-1]=temp;
         j--;
         printf("\t%d",a[j-1]);
        }
    }
    printf("\nelements after sorting are:");
     for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}*/
// Write a program to check if a given expression is correctly parenthesized using stacks
/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char stack[1000];
int top = -1, count = 1;
char push(char a)
{
    top++;
    stack[top]=a;
}
char pop()
{
    char z;
    z=stack[top];
    top--;
    return z;
}
int main()
{
    char a[100], b;
    int i;
    printf("enter your expression:");
    gets(a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == '[' || a[i] == '{' || a[i] == '(')
        {
            push(a[i]);
        }
        else
        {
            if(top==-1)
            {
                count =0;
            }
            if(a[i] == '}' || a[i] == ']' || a[i] == ')')
            {
                b=pop();
                if(b=='{'&&( a[i] == ']' || a[i] == ')'))
                {
                    count=0;
                }
                else if(b=='['&&( a[i] == '}' || a[i] == ')'))
                {
                    count=0;
                }
                else if(b=='('&&( a[i] == ']' || a[i] == '}'))
                {
                    count=0;
                }
            }
        }
    }
    if(count==1&& top==-1)
    {
        printf("\nexpression is correctly parenthesized");
    }
    else
    {
        printf("\nexpression is not correctly parenthesized");
    }

}*/
// WAP TO CONVERT THE INFIX TO POSTFIX EXPRESION:
/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char stack[1000], postfix[1000];
int top = -1, top2 = 0;
int precedence(char d)
{
    switch (d)
    {
    case '+':
    case '-':
        return 1;
    case '/':
    case '*':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}
char peek()
{
    return stack[top];
}

void push(char c)
{
    top++;
    stack[top] = c;
}
int pop()
{
    return stack[top--];
}
int main()
{
    char expr[1000];
    printf("ENTER ANY INFIX EXPRESSION:");
    fgets(expr, sizeof(expr), stdin);
    char e;
    int i, l = strlen(expr);
    for (i = 0; i < l; i++)
    {
        if (isdigit(expr[i]) || isalpha(expr[i]))
        {
            postfix[top2++] = expr[i];
        }
        else if (expr[i] == '(')
        {
            e = expr[i];
            push(e);
        }
        else if (expr[i] == ')')
        {
            while (top != -1 && precedence(peek()) >= precedence(expr[i]))
            {
                e = pop();
                postfix[top2++] = e;
            }
            pop();
        }
        else
        {
            while (top != -1 && precedence(peek()) >= precedence(expr[i]))
            {
                e = pop();
                postfix[top2++] = e;
            }
            e = expr[i];
            push(e);
        }

    }
    
        while (top != -1)
        {
            postfix[top2++] = pop();
        }
        postfix[top2] = '\0';
        printf("\n POSTFIX EXPRESSION IS :%s", postfix);
    return 0;
}*//*
# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *head=NULL,*temp=NULL,*newnode,*insert=NULL;
struct node*createnode(){
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}
void createlist(){
    int n,i;
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        struct node *newnode=createnode();
        if(head==NULL){
            head=newnode;
            temp=head;

        }
        else
        {
            temp->next =newnode;
            temp=newnode;
        }
        temp=head;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }


    }
}
void insertatbeg(){
    insert=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element to insert at beg");
    scanf("%d",&insert->data);
    insert->next=head;
    head=insert;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
}
}
int main(){
    createlist();
    insertatbeg();
    return 0;
}*/