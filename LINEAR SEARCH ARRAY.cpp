LINEAR SEARCH :

INT MAIN( ){
int n, key ;

//no of elements in arr
  cin>>n;
int a[1000];
for  (int i=0; i<n; i++)  {
  cin>>a[i]; 
          }
//ask for element/key to search
cout<<"enter the element ";
cin>>key ;

//find the index of the element
//Linear search algorithm
int i;
for (i =0; i<n ; i++){
if (a[i]==key) {
cout<<key<<"index is"<<i;
break;
            }
       }
if  ( i==n ) {
cout<<key<<"not found";
   }
return 0;
        }
