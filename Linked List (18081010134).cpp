#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//========================================================

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void hitungnode(node *head);
//========================================================

int main()
{
  node *head;
  char pilih;

  head = NULL;
  do{
    //untuk membersihkan tampilan
    //untuk windows
    system("cls");
    //untuk linux
     //system("clear");
     system("cls");
     system("color E0");
     printf("============================Program Linked List===========================\n");
     printf("==1. Tambah Data di awal        					==\n");
     printf("==2. Tambah Data di tengah list  					==\n");
     printf("==3. Menghapus Data              					==\n");
     printf("==4. Mencetak Isi list      					        ==\n");
     printf("==5. Menampilkan jumlah node data dan jumlah seluruh isi data           ==\n");
     printf("==   MASUKKAN PILIHAN (tekan p untuk keluar) : 		     		==");
     fflush(stdin);
     scanf("%c", &pilih);
     if (pilih == '1')
     		tambahAwal(&head);
     else if (pilih == '2')
			tambahData(&head);
     else if (pilih == '3')
     		hapusData(&head);
     else if (pilih == '4'){
     		tranverse(head);
     		getch();
     	}
     else if (pilih == '5'){
     		hitungnode(head);
         getch();
     }
  } while (pilih != 'p');
  deleteList(head);
}

node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}


void tambahAwal(node **head){
  int bil;
  node *pTemp;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  fflush(stdin);
  printf("Masukkan bilangan integer : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  		pTemp->data = bil;
      pTemp->next = NULL;
      insertNode(head, NULL, pTemp);
  }
  else{
      printf("Alokasi Memori Gagal");
      getch();
  }
}

//========================================================

void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  
  tranverse(*head);
  printf("\nPosisi Penyisipan Setelah Data Bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
     printf("\nNode tidak ditemukan");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nAlokasi memori gagal");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

//========================================================

void tranverse(node *head){
   //traverse linked list
	node *pWalker;

    system("cls");
	pWalker = head;
	while (pWalker != NULL){
   	printf("%d->", pWalker -> data);
   	pWalker = pWalker -> next;
	}
   printf("NULL");
}

//========================================================

void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//========================================================

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

//========================================================

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;

  //clrscr();
  system("cls");
  tranverse(*head);
  printf("\nData yang akan dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  //cari target value sampai ditemukan atau sampai pada akhir list
  while (pCur != NULL && pCur -> data != pos) {
    pPre = pCur;
    pCur = pCur -> next;
  }

  if (pCur == NULL){
     printf("\nNode tidak ditemukan");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}

//========================================================

void deleteList(node *head){
  node *pTemp;


  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}

//========================================================

void hitungnode(node *head){
   //traverse linked list
	node *pWalker;

    system("cls");
    int i=0;
    int hsl=0;
	pWalker = head;
	while (pWalker != NULL){
	hsl=hsl+pWalker -> data;
	i=i+1;
   	pWalker = pWalker -> next;
	}
   printf("\nnJumlah node data adalah = %d",i);
   printf("\nnJumlah seluruh isi data adalah = %d",hsl);
}
