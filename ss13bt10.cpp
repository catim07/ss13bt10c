#include<stdio.h>
int size=0;
void inputValue(int array[100]){
	printf("moi ban nhap so phan tu: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("moi ban nhap phan tu thu %d la: ",i+1);
		scanf("%d",&array[i]);
	}
}
void printfValue(int array[100]){
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
}
void addValue(int array[100]){
	int index,value;
	printf("moi ban nhap vi tri de them: ");
	scanf("%d",&index);
	index--;
	printf("moi ban nhap phan tu de them: ");
	scanf("%d",&value);
	if(index>=size){
		array[size]=value;
		size++;
	}else{
	for(int i=size;i>index;i--){
		array[i]=array[i-1];
	}
	array[index]=value;
	size++;
    }
    for(int j=0;j<size;j++){
    	printf("%d ",array[j]);
	}
}
void changeValue(int array[100]){
	int index,value;
	printf("moi ban nhap vi tri de sua: ");
	scanf("%d",&index);
	index--;
	printf("moi ban nhap phan tu de sua: ");
	scanf("%d",&value);
		array[index]=value;
    for(int j=0;j<size;j++){
    	printf("%d ",array[j]);
	}
}
void deleValue(int array[100]){
	int index,value;
	printf("moi ban nhap vi tri de xoa: ");
	scanf("%d",&index);
	index--;
	for(int i=index;i<size;i++){
		array[i]=array[i+1];
	}
	size--;
    for(int j=0;j<size;j++){
    	printf("%d ",array[j]);
	}
}
void printfGiam(int array[100]){
	for(int j=0;j<size-1;j++){
	    for(int i=0;i<size-j-1;i++){
	    	if(array[i]<array[i+1]){
	    		int temp=array[i+1];
	    		array[i+1]=array[i];
	    		array[i]=temp;
			}
	}
}
    for(int k=0;k<size;k++){
    	printf("%d ",array[k]);
	}
}
void printfTang(int array[100]){
	for(int j=0;j<size-1;j++){
	    for(int i=0;i<size-j-1;i++){
	    	if(array[i]>array[i+1]){
	    		int temp=array[i+1];
	    		array[i+1]=array[i];
	    		array[i]=temp;
			}
	}
}
    for(int k=0;k<size;k++){
    	printf("%d ",array[k]);
	}
}
void searchValue(int array[100]){
	int search,index,examin=0;
	printf("moi ban nhap phan tu de tiem: ");
	scanf("%d",&search);
	for(int i=0;i<size;i++){
	    if(search==array[i]){
	    	index=i;
	    	examin=1;
	    	break;
		}
	}
	if(examin){
		printf("phan tu %d lam o vi tri %d",search,index+1);
	}else{
		printf("phan tu %d khong co trong mang",search);
	}
}
int main(){
	int chose,array[100],choseValue;
	do{
	printf("\n------------------MENU----------------\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan ly\n");
	printf("3. Them mot phan tu vao vi tri chi dinh\n");
	printf("4. Sua mot phan tu o vi tri chi dinh\n");
	printf("5. Xoa mot phan tu o vi tri chi dinh\n");
	printf("6. Sap xep cac phan tu\n");
	printf("7. Tim kiem phan tu nhap vao\n");
	printf("8. Thoat\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&chose);
	switch(chose){
		case 1:
			inputValue(array);
			break;
		case 2:
			printfValue(array);
			break;
		case 3:
			addValue(array);
			break;
		case 4:
			changeValue(array);
			break;
		case 5:
		    deleValue(array);
		    break;
		case 6:
			printf("1. Giam dan\n");
			printf("2. Tang dan\n");
			printf("3. Thoat\n");
			printf("lua chon cua ban: ");
			scanf("%d",&choseValue);
			switch(choseValue){
				case 1:
					printf("mang duoc sap xep theo thu tu giam dan la:\n");
					printfGiam(array);
					break;
				case 2:
					printf("mang duoc sap xep theo thu tu tang dan la:\n");
					printfTang(array);
					break;
				case 3: 
				    break;
			}
		case 7:
			searchValue(array);
			break;
	}
	}while(chose!=8);
	
	return 0;
}
