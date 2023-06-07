#include <stdio.h>
#include<string.h>

void Received();
void Distributed();
void Search();
void totalinformation();
void HospitalCreation();
void InventoryCreation();

int main(){

    char choice[1];
    FILE *fp;

    printf("\n\t\t 1. Received Quantity");
    printf("\n\t\t 2. Distributed Quantity");
    printf("\n\t\t 3. Search items");
    printf("\n\t\t 4. See total information");
    printf("\n\t\t 5. Exit program");
    printf("\n\t\t Choose one");
    scanf("%s", choice);


    if (strcmp(choice,"1")==0){
        Received();
    }
    else if (strcmp(choice,"2")==0){
        Distributed();
    }
    else if (strcmp(choice,"3")==0){
        Search();
    }
    else if (strcmp(choice,"4")==0){
        totalinformation();
    }
    else if (strcmp(choice,"5")==0){
    }
}


void InventoryCreation()
{
  char ch;
  FILE *fp;
  fp = fopen("donation.txt","w");
  if(fp == NULL){
    perror("failed!\n");
  }
  fprintf(fp,
   "Contractless Thermometer    CT   Japan         1  1.2\n"
   "Hand Sanitizers             HS   USA           1  3.5\n"
   "Face Mask                   FM   China         2  120\n"
   "Sugical Mask                SM   China         2  38\n"
   "Oxygen Mask                 OM   Saudi Arabia  2  9\n"
   );
  while((ch = fgetc(fp))!=EOF) {
      printf("%c", ch);
      fclose(fp);
  }
}

void HospitalCreation(){
    char ch;
    FILE *f;
    f = fopen("dist.txt","w");
    if(f == NULL){
        perror("failed!\n");
    }
    fprintf(f, "Contactless Thermometer       0\n"
               "Hand Sanitizers               0\n"
               "Face Mask                     0\n"
               "Sugical Mask                  0\n"
               "Oxygen Mask                   0\n");

    while((ch = fgetc(f))!=EOF){
        printf("%c",ch);
        fclose(f);
    }
}

struct quantity{
    int choice;
    char SupplyCode[6];
    int amount[6];
    int CT;
    int HS;
    int FM;
    int SM;
    int OM;
};


void Received() {
    int choice;

    FILE *fp;
    fp = fopen("donation.txt", "r+");
    {
        printf("fopen failed\n");
    }
    struct quantity qa;

    char SupplyCode[6];
    int amount;

    printf("Choose from CT, HS, FM, SM, OM:");
    scanf("%s", SupplyCode);
    printf("How many do you get:");
    scanf("%s",SupplyCode);

    switch (choice) {
        case 1:
            if (strcmp(SupplyCode, "CT") == 0)
                qa.CT = qa.CT + amount;
            break;

        case 2:
            if (strcmp(SupplyCode, "HS") == 0)
                qa.HS = qa.HS + amount;
            break;

        case 3:
            if (strcmp(SupplyCode, "FM") == 0)
                qa.FM = qa.FM + amount;
            break;

        case 4:
            if (strcmp(SupplyCode, "SM") == 0)
                qa.SM = qa.SM + amount;
            break;

        case 5:
            if (strcmp(SupplyCode, "OM") == 0)
                qa.OM = qa.OM + amount;
            break;
    }
    fclose(fp);
}


void Distributed() {
     int choice;

        FILE *fp;
        fp = fopen("donation.txt", "r+");

        char SupplyCode[6];
        int amount;

        struct quantity qa;

        printf("Choose from CT, HS, FM, SM, OM:");
        scanf("%s", SupplyCode);
        printf("How many do you send:");
        scanf("%s", SupplyCode);

        switch (choice) {
            case 1:
                if (strcmp(SupplyCode, "CT") == 0)
                    qa.CT = qa.CT - amount;
                break;

            case 2:
                if (strcmp(SupplyCode, "HS") == 0)
                    qa.HS = qa.HS - amount;
                break;

            case 3:
                if (strcmp(SupplyCode, "FM") == 0)
                    qa.FM = qa.FM - amount;
                break;

            case 4:
                if (strcmp(SupplyCode, "SM") == 0)
                    qa.SM = qa.SM - amount;
                break;

            case 5:
                if (strcmp(SupplyCode, "OM") == 0)
                    qa.OM = qa.OM - amount;
                break;
        }
    fclose(fp);
    }


    void Search() {

        FILE *fp;
        fp = fopen("donation.txt", "w");

        char SupplyCode[6];
        int check;

        int i,j;
        int a[6][5];


        printf("Choose from CT, HS, FM, SM, OM:");
        scanf("%s", SupplyCode);

        if (strcmp(SupplyCode, "CT") == 0) {
            {
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%d", i, j);
                        scanf("%d", &a[2][5]);
                    }
                }
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%3d ", a[2][5]);
                    }
                    printf("\n");
                }
            }
            fclose(fp);
        } else if (strcmp(SupplyCode, "HS") == 0) {
            {
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%d", i, j);
                        scanf("%d", &a[3][5]);
                    }
                }
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%3d ", a[3][5]);
                    }
                    printf("\n");
                }
            }
            fclose(fp);
        } else if (strcmp(SupplyCode, "FM") == 0) {
            {
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%d", i, j);
                        scanf("%d", &a[4][5]);
                    }
                }
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%3d ", a[4][5]);
                    }
                    printf("\n");
                }
            }
            fclose(fp);
        } else if (strcmp(SupplyCode, "SM") == 0) {
            {
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%d", i, j);
                        scanf("%d", &a[5][5]);
                    }
                }
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%3d ", a[5][5]);
                    }
                    printf("\n");
                }
            }
            fclose(fp);
        } else if (strcmp(SupplyCode, "OM") == 0) {
            {
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%d", i, j);
                        scanf("%d", &a[6][5]);
                    }
                }
                for (i = 0; i < 6; i++) {
                    for (j = 0; j < 5; j++) {
                        printf("%3d ", a[6][5]);
                    }
                    printf("\n");
                }
            }
            fclose(fp);
        }
    }

        struct data {
            char name[30];
            int point;
        };

        void totalinformation() {
            int n = 0;
            int i, j;
            int boxpoint;
            struct data record[6];
            FILE* f;
            f = fopen("dist.txt", "r");
            if (f == NULL) {
                perror("failed\n");
            }
            while(!feof(f)) {
                fscanf(f, "%[^\n;] ; %d\n", record[n].name ,&record[n].point);
                n++;
            }
            for (i = 0; i < 4; i++)
            {
                for (j = i + 1; j < 5; j++)
                {
                    if (record[i].point < record[j].point)
                    {
                        boxpoint = record[i].point;
                        record[i].point = record[j].point;
                        record[j].point = boxpoint;
                    }
                }
            }
            for (n = 0; n < 5; n++)
                printf("%d: %s %d \n", n + 1, record[n].name, record[n].point);
            fclose(f);
        }
