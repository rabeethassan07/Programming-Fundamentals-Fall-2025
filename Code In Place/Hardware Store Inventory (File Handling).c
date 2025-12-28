#include<stdio.h>
#include<string.h>
struct Tool
{
    int record;
    char name[30];
    int quantity;
    float cost;
};
void initializeFile()
{
    FILE *fp = fopen("hardware.txt", "wb");
    struct Tool t = {0, "", 0, 0.0};

    for (int i = 0; i < 10; i++)
        fwrite(&t, sizeof(struct Tool), 1, fp);

    fclose(fp);
}
void listTools()
{
    FILE *fp = fopen("hardware.txt", "rb");
    struct Tool t;

    printf("\nRecord  Tool Name           Quantity  Cost\n");
    printf("---------------------------------------------\n");

    while (fread(&t, sizeof(struct Tool), 1, fp))
	{
        if (t.record != 0)
		{
            printf("%-7d %-18s %-9d %.2f\n",
                   t.record, t.name, t.quantity, t.cost);
        }
    }
    fclose(fp);
}
void addOrUpdateTool()
{
    FILE *fp = fopen("hardware.txt", "rb+");
    struct Tool t;
    int rec;

    printf("Enter record number (1–10): ");
    scanf("%d", &rec);

    fseek(fp, (rec - 1) * sizeof(struct Tool), SEEK_SET);

    printf("Enter tool name: ");
    scanf(" %[^\n]", t.name);
    printf("Enter quantity: ");
    scanf("%d", &t.quantity);
    printf("Enter cost: ");
    scanf("%f", &t.cost);

    t.record = rec;

    fwrite(&t, sizeof(struct Tool), 1, fp);
    fclose(fp);
}
void deleteTool()
{
    FILE *fp = fopen("hardware.txt", "rb+");
    struct Tool t = {0, "", 0, 0.0};
    int rec;

    printf("Enter record number to delete: ");
    scanf("%d", &rec);

    fseek(fp, (rec - 1) * sizeof(struct Tool), SEEK_SET);
    fwrite(&t, sizeof(struct Tool), 1, fp);

    fclose(fp);
}
int main()
{
    int choice;
    initializeFile();
    do
	{
        printf("\n--- Hardware Inventory Menu ---\n");
        printf("1. List all tools\n");
        printf("2. Add/Update a tool\n");
        printf("3. Delete a tool\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
		{
        case 1:
            listTools();
            break;
        case 2:
            addOrUpdateTool();
            break;
        case 3:
            deleteTool();
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
	while (choice != 4);
    return 0;
}
