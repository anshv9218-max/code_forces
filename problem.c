// Watermelon -4A
// #include<stdio.h>
// int main(){
//     int w;
//     scanf("%d",&w);
//     if(w==0){
//         printf("NO");
//     }
//     else if (w>2&&w%2==0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }


//Elephant - 617A
// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x);
//     int result=x,arr[5]={1,2,3,4,5},i=4,sum=0,count=0;
//     while(sum<x){
//         if(arr[i]<=x){
//             x=x-arr[i];
//             count=count+1;
//         }
//         else{
//             i=i-1;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }


// A team - 231 A
// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x);
//     int arr[x][3];
//     for (int i=0;i<x;i++){
//         for (int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int count=0;
//     for(int k=0;k<x;k++){
//         if(arr[k][0]==1 && arr[k][1]==1){
//             count++;
//         }
//         else if(arr[k][0]==1 && arr[k][2]==1){
//             count++;
//         }
//         else if(arr[k][2]==1 && arr[k][1]==1){
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// 50 A domino piling
// #include<stdio.h>
// int main(){
//     int m,n;
//     scanf("%d %d",&m,&n);
//     int area=m*n;
//     int num=area/2;
//     printf("%d",num);
//     return 0;
// }


// 236A Boy or Girl
// #include<stdio.h>
// int main(){
//     int n,count=0;
//     scanf("%d",&n);
//     char arr[n];
//         scanf("%s",&arr);
//     for (int j=1;j<n;j++){
//         if (arr[j]==arr[j-1]){
//             count=count+1;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }


// 263 A beautifull matrix
// #include<stdio.h>
// #include <stdlib.h>
// int main(){
//     int arr[5][5],x=0,y=0;
//     for (int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             scanf("%d",&arr[i][j]);
//             if (arr[i][j]==1){
//                 x=i;
//                 y=j;
//             }

//         }
//     }
//     int move=abs(2-x)+abs(2-y);
//     printf("%d",move);
//     return 0;
// }

// 791 A Bear and Big Brother
// #include <stdio.h>
// int main(){
//     int a,b,count=0;
//     scanf("%d %d",&a,&b);
//     while (a<=b){
//         a=a*3;
//         b=b*2;
//         count=count+1;
//     }
//     printf("%d",count);
//     return 0;

// }

// 158 A Next Round
// #include<stdio.h>
// int main(){
//     int n,k,count=0;
//     scanf("%d %d",&n,&k);
//     int arr[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int j=0;j<n;j++){
//         if (arr[j] >= arr[k-1] && arr[j] > 0){
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }


// 546 A  Soldier and Bananas
// #include<stdio.h>
// int main(){
//     int k,n,w,cost=0,borrow=0;
//     scanf("%d %d %d",&k,&n,&w);
//     for (int i=1;i<=w;i++){
//         cost=cost+i*k;

//     }
//     if (cost<=n){
//         printf("%d",0);
//     }
//     else{
//         printf("%d",cost-n);
//     }
//     return 0;

    
// }


// 977A Wrong Subtraction
// #include<stdio.h>
// int main(){
//     int n,k;
//     scanf("%d %d",&n,&k);
//     while (k>0){
//         if (n%10>0){
//             n--;
//             k--;
//         }
//         else{
//             n=n/10;
//             k--;
//         }

//     }
//     printf("%d",n);
//     return 0;
// }


// 110 A Lucky Number
// #include<stdio.h>

// int main() {

//     long long n;
//     scanf("%lld",&n);

//     int count = 0;

//     while(n > 0){

//         int digit = n % 10;

//         if(digit == 4 || digit == 7){
//             count++;
//         }

//         n = n / 10;
//     }

//     if(count == 0){
//         printf("NO");
//         return 0;
//     }

//     while(count > 0){

//         int d = count % 10;

//         if(d != 4 && d != 7){
//             printf("NO");
//             return 0;
//         }

//         count = count / 10;
//     }

//     printf("YES");

//     return 0;
// }


// 677 A
// #include <stdio.h>

// int main() {
//     int n, h;
    
//     // Read the number of friends and the fence height
//     if (scanf("%d %d", &n, &h) != 2) {
//         return 0;
//     }

//     int total_width = 0;
//     for (int i = 0; i < n; i++) {
//         int a;
//         // Read the height of the current person
//         scanf("%d", &a);
        
//         if (a > h) {
//             // Person must bend down
//             total_width += 2;
//         } else {
//             // Person walks normally
//             total_width += 1;
//         }
//     }

//     // Print the final result
//     printf("%d\n", total_width);

//     return 0;
// }


// 110 A Nearly Lucky Numbe
// #include<stdio.h>
// int main(){
//     long long  n,count=0;
//     scanf("%lld",&n);
//     while(n>0){
//         if (n%10==7 || n%10==4){
//             count++;
//         }
//         n=n/10;
//     }
//     if (count==7||count==4){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

// 1030 A 
// #include<stdio.h>
// int main(){
//     int n,lev=0;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]==1){
//             lev=1;
//         }
//     }
//     if(lev==1){
//         printf("HARD");
//     }
//     else{
//         printf("EASY");
//     }
//     return 0;

// }

// 467 A George and Accommodation
// #include<stdio.h>
// int main(){
//   int n,count=0;
//   scanf("%d",&n);
//   int arr[n][2];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<2;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//   for(int i=0;i<n;i++){
//     if (arr[i][1]>=arr[i][0]+2){
//       count++;
//     }
//   }
//   printf("%d",count);
//   return 0;
// }


// 486 A Calculating Function
// #include<stdio.h>
// int main(){
//   long long n,sum=0;
//   scanf("%lld",&n);
//   if (n%2==0){
//     sum=n/2;
//   }
//   else{
//     sum=-(n+1)/2;
//   }
//   printf("%lld",sum);
//   return 0;
// }



// 344 A  Magnets
// #include<stdio.h>
// int main(){
//     int n,m,count=0,flip=0;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         scanf("%d",&m);
//         if (m!=flip){
//             count++;
//         }
//         flip=m;
    
//     }
//     printf("%d",count);
//     return 0;
// }



// 200 B Drinks
// #include<stdio.h>
// int main(){
//     int num,p;
//     double sum=0.0000;
//     scanf("%d",&num);
//     for (int i=0;i<num;i++){
//         scanf("%d",&p);
//         sum=sum+p;
//     }
//     printf("%.4f",(sum/num));
//     return 0;

// }

// 228 A
// #include<stdio.h>
// int main(){
//     int arr[4];
//     int count=0;
//     for (int i=0;i<4;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int j=0;j<3;j++){
//         for(int r=0;r<3-j;r++){
//             if (arr[r]>arr[r+1]){
//                 int sw=arr[r];
//                 arr[r]=arr[r+1];
//                 arr[r+1]=sw;
//             }
//         }
//     }
//     for(int i=1;i<4;i++){
//         if (arr[i]==arr[i-1]){
//             count++;
//         }

//     }
//     printf("%d",count);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("\n");
//     int arr[n],arr1[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int j=0;j<n;j++){
//         int var=arr[j];
//         arr1[var-1]=j+1;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr1[i]);
//     }
        

//     return 0;
// }

// 112 A Petya and Strings
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// void compare(char str1[],char str2[]);
// int main(){
//     char str1[1000];
//     char str2[1000];
//     fgets(str1,1000,stdin);
//     fgets(str2,1000,stdin);
//     str1[strcspn(str1,"\n")]='\0';
//     str2[strcspn(str2,"\n")]='\0';
//     compare(str1,str2);
//     return 0;
// }
// void compare(char str1[],char str2[]){
//     int inc=0,i=0;
//     while(str1[i]!='\0' && str2[i] !='\0'){
//         if( tolower(str1[i])<tolower(str2[i])){
//             inc=-1;
//             break;

//         }
//         if( tolower(str1[i])>tolower(str2[i])){
//             inc=1;
//             break;
//         }
//         i++;
//     }
//     printf("%d",inc);
// }

// 281 A Word Capitalization
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// void capital(char str[]);
// int main(){
//     char str[1000];
//     fgets(str,1000,stdin);
//     capital(str);
//     return 0;
// }
// void capital(char str[]){
//     str[0]=toupper(str[0]);
//     puts(str);
// }


// 59 A Word
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     int lcount=0,ucount=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(isalpha(str[i])){
//         if (islower(str[i])){
//             lcount++;
//         }
//         else{
//             ucount++;
//         }
//     }
//     }


//     if(ucount>lcount){
//         for (int i=0;str[i]!='\0';i++){
//             str[i]=tolower(str[i]);
//         }
//     }
//     else{
//     for (int i=0;str[i]!='\0';i++){
//         str[i]=toupper(str[i]);
//     }}
//     puts(str);
//     return 0;
// }



// 743 A  Anton and Danik
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int len,acount=0,dcount=0;
//     scanf("%d",&len);
//     char arr[len];
//     for(int i=0;i<len;i++){
//         scanf(" %c",&arr[i]);
//         if(arr[i]=='A'){
//             acount++;
//         }
//         else if(arr[i]=='D'){
//             dcount++;
//         }
//     }
//     if(acount>dcount){
//         printf("Anton");
//     }
//     else if(dcount>acount){
//         printf("Danik");
//     }
//     else{
//         printf("Friendship");
//     }
//     return 0;
// }


// 61 A  Ultra-Fast Mathematician
// #include<stdio.h>
// int main(){
//     char s1[150],s2[150],s3[150]={0};
//     scanf(" %s",s1);
//     scanf(" %s",s2);
//     int len=0;
//     for(int i=0;s1[i]!='\0';i++){
//         if(s1[i]=='1'&&s2[i]=='1'){
//             s3[i]='0';           
//         }
//         else if(s1[i]=='0'&&s2[i]=='0'){
//             s3[i]='0';
//         }
//         else{
//             s3[i]='1';
//         }
//         len++;
//     }
//     s3[len]='\0';
//     printf("%s",s3);
//     return 0;
// }


// 705 THe Hulk
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         if(i==n&& i%2==0){
//             printf("I love it");
//         }
//         else if(i==n&& i%2!=0){
//             printf("I hate it");
//         }
//         else if(i%2==0){
//             printf("I love that ");
//         }
//         else if(i%2!=0){
//             printf("I hate that ");
//         }

//     }
//     return 0;
// }



//1328 A Divisibility Problem
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n][2],divisible[n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         if (arr[i][0]%arr[i][1]!=0){
//             divisible[i]=arr[i][1]-arr[i][0]%arr[i][1];
            
//         }
//         else{
//             divisible[i]=0;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\n",divisible[i]);
//     }
//     return 0;

// }


// 1328  A Divisibility Problem (dyanamic approach)
// #include<stdio.h>
// int main(){
//     long long n,a,b;
//     scanf("%d",&n);
//     while(n--){
//         scanf("%lld %lld",&a,&b);
//         if(a%b!=0){
//             printf("%lld\n",b-(a%b));
//         }
//         else{
//             printf("0\n");
//         }
//     }
//     return 0;
// }


// 71 A
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char arr[n],arrout[n];
//     for(int i=0;i<n;i++){
//         scanf("%c",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         int count=0;




//     }
// }

// 1335 A Candies and Two Sisters
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int a;
//     for(int i=0;i<n;i++){
//         scanf("%d",&a);
//         if(a%2==0){
//             arr[i]=(a/2)-1;
//         }
//         else{
//         arr[i]=a/2;
//         }
//     }
//     for(int j=0;j<n;j++){
//         printf("%d\n",arr[j]);
//     }
//     return 0;
// }

// 443 A Anton and Letters
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char arr[10000];
//     fgets(arr,10000,stdin);
//     arr.qsort();

// }


// // 148 A  Insomnia cure
// #include<stdio.h>
// int main(){
//     int k,l,m,n;
//     int d;

//     scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
//     int count=0;
//     for(int i=1;i<=d;i++){
//         if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// //  785 A  Anton and Polyhedrons
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int n,sum=0;
//     scanf("%d",&n);
//     char arr[100];
//     for(int i=1;i<=n;i++){
//             scanf(" %s",arr);
//         if (strcmp(arr,"Tetrahedron")==0){sum=sum+4;}
//         else if(strcmp(arr,"Cube")==0){sum=sum+6;}
//         else if(strcmp(arr,"Octahedron")==0){sum=sum+8;}
//         else if(strcmp(arr,"Dodecahedron")==0){sum=sum+12;}
//         else if(strcmp(arr,"Icosahedron")==0){sum=sum+20;}
        
//     }
//     printf("%d",sum);
//     return 0;
    
// }