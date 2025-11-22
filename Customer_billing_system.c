#include <stdio.h>
#include <string.h>

#define MAXC 50
#define MAXI 20

typedef struct {
    char name[30];
    float price;
    int qty;
} Item;

typedef struct {
    int id;
    char name[30];
    Item items[MAXI];
    int itemCount;
    float total;
} Customer;

Customer c[MAXC];
int count=0;

// ---------- File Handling ----------
void saveToFile(){
    FILE *f=fopen("customers.dat","wb");
    if(!f){ printf("Error saving!\n"); return; }
    fwrite(&count,sizeof(int),1,f);
    fwrite(c,sizeof(Customer),count,f);
    fclose(f);
    printf("Data saved!\n");
}

void loadFromFile(){
    FILE *f=fopen("customers.dat","rb");
    if(!f) return; // no file yet
    fread(&count,sizeof(int),1,f);
    fread(c,sizeof(Customer),count,f);
    fclose(f);
}

// ---------- CRUD ----------
void addCustomer(){
    Customer t; t.id=count+1; t.total=0; t.itemCount=0;
    printf("Enter customer name: "); scanf(" %[^\n]",t.name);
    int n; printf("How many items? "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Item %d name: ",i+1); scanf(" %[^\n]",t.items[i].name);
        printf("Price: "); scanf("%f",&t.items[i].price);
        printf("Qty: "); scanf("%d",&t.items[i].qty);
        t.total += t.items[i].price * t.items[i].qty;
        t.itemCount++;
    }
    c[count++]=t;
    printf("Added! ID=%d Total=%.2f\n",t.id,t.total);
}

void showCustomers(){
    if(count==0){ printf("No customers!\n"); return; }
    for(int i=0;i<count;i++){
        printf("\nID:%d Name:%s Total:%.2f\n",c[i].id,c[i].name,c[i].total);
        for(int j=0;j<c[i].itemCount;j++)
            printf("   %s x%d @%.2f\n",c[i].items[j].name,c[i].items[j].qty,c[i].items[j].price);
    }
}

void updateCustomer(){
    int id; printf("Enter ID to update: "); scanf("%d",&id);
    for(int i=0;i<count;i++) if(c[i].id==id){
        printf("Enter new name: "); scanf(" %[^\n]",c[i].name);
        printf("Updated!\n"); return;
    }
    printf("Not found!\n");
}

void deleteCustomer(){
    int id; printf("Enter ID to delete: "); scanf("%d",&id);
    for(int i=0;i<count;i++) if(c[i].id==id){
        for(int j=i;j<count-1;j++) c[j]=c[j+1];
        count--; printf("Deleted!\n"); return;
    }
    printf("Not found!\n");
}

// ---------- Main ----------
int main(){
    loadFromFile(); // load existing data
    int ch;
    do{
        printf("\n1.Add 2.Show 3.Update 4.Delete 5.Save 6.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1) addCustomer();
        else if(ch==2) showCustomers();
        else if(ch==3) updateCustomer();
        else if(ch==4) deleteCustomer();
        else if(ch==5) saveToFile();
    }while(ch!=6);
    return 0;
}