 #include<stdio.h>
 #pragma pack(1)
 struct s2
{
	int empid;  //4bytes
	int b;  //4bytes
	float f;    // 4bytes +4holes
	double d;    //8bytes
	char *name;   //8bytes
	char *dom;  //8bytes
	struct node *link;  //8bytes
};
struct s{
	char *name;//8 byte
	int age;//8byte
	char *branch;//8byte
	float point;//8 byte
	double d;//8byte
	int m;//8byte
	char *c;//8byte
	char ch;//8byte
};
struct s1{
	char ch;//4byte
	int age;//4byte
	int m;//4 byte
	float point;//4byte
	double d;//8byte
	char *name;//8byte
	char *branch;//8byte
	char *c;//8byte
};
int main(){
	
	
	printf("%ld\n",sizeof(struct s));//64 bytes
	printf("%ld\n",sizeof(struct s1));//48 bytes
		printf("%ld\n",sizeof(struct s2));//48 byte         
	return 0;
}
