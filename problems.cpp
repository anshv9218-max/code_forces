// 4A Watermelon
// #include<iostream>
// int main(){
//     int n;
//     std::cin>>n;
//     if(n>2&&n%2==0){
//         std::cout<<"YES";
//         return 0;
//     }
//     std::cout<<"NO";
//     return 0;
// }

// 61 A ultra fast maths
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     string s3="";
//     for (int i=0;i<s1.length();i++){
//         if(s1[i]==s2[i]){
//             s3+='0';
//         }
//         else{
//             s3+='1';
//         }

//     }
//     cout<<s3<<"\n";
//     return 0;
// }


// A. HQ9+ 133 A
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     int isexecute=0;
//     cin>>s;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='H' || s[i]=='Q'||s[i]=='9'){
//             cout<<"YES";
//             return 0;
//         }
//     }
//     cout<<"NO";
//     return 0;
    
// }


// 282 A Bit ++
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int x=0,n;
//     string a;
//     std::cin>>n;
//     for(int i=0;i<n;i++){
//         std::cin>>a;
//         if (a[1]=='+'){
//             x+=1;
//         }
//         else{
//             x-=1;
//         }
//     }
//     std::cout<<x;
//     return 0;
// }



// // 59 A Word
// #include<iostream>
// #include<string>
// #include<cctype>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     int lcount=0,ucount=0;
//     cin>>str;
//     for(int i=0;i<str.length();i++){
//         if(islower(str[i])){
//             lcount+=1;
//         }
//         else{
//             ucount+=1;
//         }
//     }
//     if (lcount>=ucount){
//         transform(str.begin(),str.end(),str.begin(),::tolower);
//     }
//     else{
//         transform(str.begin(),str.end(),str.begin(),::toupper);
//     }
//     cout<<str;
//     return 0;

// }

// // 116 A Tram
// #include<iostream>
// using namespace  std;
// int main(){
//     int stops,exit,entry,inside=0,capacity=0;
//     std::cin>>stops;
//     for(int i=0;i<stops;i++){
//         cin>>exit>>entry;
//         inside=inside+entry-exit;
//         capacity=max(inside,capacity);
//     }
//     cout<<capacity;
//     return 0;
// }


// 41 ATranslation
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     int j=s1.length()-1;
//     if (s1.length()!=s2.length()){
//         cout<<"NO";
//         return 0;

//     }
//     for(int i=0;i<s1.length();i++){
//         if(s1[i]!=s2[j]){
//             cout<<"NO";
//             return 0;
//         }
//         j-=1;   
//     }
//     cout<<"YES";
//     return 0;
// }



// 723 A The New Year: Meeting Friends
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int x1,x2,x3,large=0,small=0;
//     std::cin>>x1>>x2>>x3;
//     large=max({x1,x2,x3});
//     small=min({x1,x2,x3});
//     std::cout<<large-small;
//     return 0;
// }


// 1703 A YES or YES?
// #include<iostream>
// #include<string>
// #include<cctype>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     string s;
//     int y=0,n=0,num;
//     cin>>num;
//     vector<int> arr(num);
//     for(int i=0;i<num;i++){
//         cin>>s;
//         transform(s.begin(),s.end(),s.begin(),::toupper);
//         if (s=="YES"){
//             arr[i]=1;
//         }
//         else{
//             arr[i]=0;
//         }
//     }
//     for(int i=0;i<num;i++){
//         if (arr[i]==1){
//             cout<<"YES\n";
//         }
//         else{
//         cout<<"NO\n";
//         }
//     }
//     return 0;
// }

// Police Recruits 427 A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int iscrime=0;
//     vector<int> arr(n,0);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int p=0;
//     int c=0;
//     for(auto x:arr){
//         if(x>0){
//             p+=x;
//         }
//         else if(x==-1&&p>0){
//             p--;
//         }
//         else{
//             iscrime++;
//         }
//     }
//     cout<<iscrime;
//     return 0;
// }


// 71 A Word
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string word;
//     vector <string> vout;
//     for(int i=0;i<n;i++){
//         cin>>word;
//         if (word.length()>10){
//             vout.push_back(word.front()+to_string(word.length()-2)+word.back());
//         }
//         else{
//             vout.push_back(word);
//         }
//     }
//     for(auto v:vout){
//         cout<<v<<endl;
//     }
//     return 0;
// }



//144 AArrival of the Genera
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     vector<int> h;
//     for(int i=0;i<n;i++){
//         int height;
//         cin>>height;
//         h.push_back(height);
//     }
//     auto low=min_element(h.rbegin(),h.rend());
//     int min_val=*low;
//     auto high=max_element(h.begin(),h.end());
//     // int max_val=*high;

//     int min_index=h.size()-1-distance(h.rbegin(),low);
//     int max_index=distance(h.begin(),high);


//     int num=max_index+ (n-min_index)-1;
//     cout<<num;
//     return 0;    
//  } 

//  144 A Arrival of Genral
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,max_val=0,min_val=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if (arr[i]<=arr[min_val]){
//             min_val=i;

//         }
//         if(arr[i]>arr[max_val]){
//             max_val=i;
//         }
        
//     }
//     int round=max_val+n-min_val-1;
//     if(max_val>min_val){
//         round--;
//     }
//     cout<<round;
//     return 0;
// }


// 520 A pangram
// #include<bits/stdc++.h>
// #include<cctype>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string str;
//     int seen[26]={0};
//     cin>>str;
//     int ispangram=1;
//     for(auto x:str){
//         x=tolower(x);
//         int index=x;
//         index=index-97;
//         seen[index]+=1;
//     }
//     for(int i=0;i<26;i++){
//         if(seen[i]==0){
//             ispangram=0;
//             break;
//         }
//     }
//     if(ispangram){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;

// }

// 141 A Amusing Joke
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string guest,host,pile;
//     cin>>guest>>host>>pile;
//     int arr[26]={0};
//     int isjoke=1;
//     if (guest.length() + host.length() != pile.length()) {
//         cout << "NO\n";
//         return 0;
//     }
//     for(auto c:guest){
//         int s=c;
//         s=s-65;
//         arr[s]+=1;
//     }
//     for(auto c:host){
//         int s=c;
//         s=s-65;
//         arr[s]+=1;
//     }
//     for(auto c:pile){
//         int s=c;
//         s=s-65;
       
//         if(arr[s]==0){
//             isjoke=0;
//             break;
//         }
//         arr[s]--;
//     }
//     if(isjoke==0){
//         cout<<"NO";
//     }else{
//         cout<<"YES";
//     }
//     return 0;
// }


// 339 Helpful maths
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     int c1=0;
//     int c2=0;
//     int c3=0;
//     for(int i=0;i<n;i=i+2){
//         if(s[i]=='1')c1++;
//         else if(s[i]=='2')c2++;
//         else c3++;
//     }
//     for(int i=0;i<n;i++){
//         if(i%2!=0){
//             s[i]='+';
//         }
//         else{
//             if(c1>0){
//                 s[i]='1';
//                 c1--;
//             }
//             else if(c2>0){
//                 s[i]='2';
//                 c2--;
//             }
//             else{
//                 s[i]='3';
//                 c3--;
//             }
//     }
//     }
//     cout<<s;
//     return 0;

// }


//Beautiful Year 271 A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
    
//     int year=0;
//     for(int i=x+1;year<1;i++){
//         int temp=i;
//         int d1 = temp % 10;
//         temp = temp / 10;

//         int d2 = temp % 10;
//         temp = temp / 10;

//         int d3 = temp % 10;
//         temp = temp / 10;

//         int d4 = temp % 10;
//         if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4){
//             year=i;
//             break;
//         }
        

//     }
//     cout<<year;
//     return 0;

    

// }

// 266B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int t;
//     cin>>t;
//     string  s;
//     cin>>s;
//     char prv=' ',cur=' ';
//     for(int i=0;i<t;i++){
       
//         for(int j=1;j<n;j++){
//              cur=s[j];
//             prv=s[j-1];
//             if(cur=='G'&&prv=='B'){
//                 char temp=s[j];
//                 s[j]=s[j-1];
//                 s[j-1]=temp;
//                 j++;
//             }
//         }
//     }
//     cout<<s;
//     return 0;

// }


// 996A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int bal;
//     cin>>bal;
//     int cnt=0;
//     // vector <int> amt={1,5,10,20,100};
//     int cash=0;
//     int c100=bal%100;
//     bal/=100;
//     int c20;
//     bal/=20;
//     int c10=bal%10;
//     bal/10;
//     int c5=bal%5;
//     bal/=5;
//     int c1=bal%1;
//     cnt=c100+c20+c10+c5+c1;
    
    
//     cout<<cnt;

//     return 0;
// }


// 469 A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    cin>>p;
    int x[p];
    int y[p];
    unordered_map <int,int> check;
    
    for(int i=0;i<p;i++){
        cin>>x[i];
    }
    for(int i=0;i<p;i++){
        cin>>y[i];
    }
    for(int i=0;i<n;i++){
        check[i]=0;
    }
    for(int i=0;i<p;i++){
        check[x[i]]=1;

    }
    for(int i=0;i<p;i++){
        check[y[i]]=1;

    }
    for(auto v:check){
        if(v.second==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }

    }
    cout<<"I become the guy.";
    return 0;


}