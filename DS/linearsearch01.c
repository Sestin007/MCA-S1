#include<stdio.h>
int main() {
int n,i,key,found=0;
printf("Enter the element:");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements :",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the element to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i]==key){
printf("the %d element found at the position %d",key,i+1);
found=1;
break;
}
} 
if(found==0){
printf("the element %d is not in the array\n",key);
}
return 0;
}
