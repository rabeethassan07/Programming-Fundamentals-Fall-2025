//ATM 
#include <stdio.h>
int main() 
{
    int choice;
    float balance = 1000.0, amount;

    // Display menu
    printf("===== Simple ATM Menu =====\n");
    
    printf("1. Withdraw\n");
    
    printf("2. Deposit\n");
    
    printf("3. Check Balance\n");
    
    printf("4. Exit\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1: // Withdraw
        
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            
            if (amount > balance) 
			{
                printf("Insufficient balance!\n");
            } 
			else 
			{
                balance -= amount;
                
                printf("Withdrawal successful.\n");
                
                printf("Remaining Balance: %.2f\n", balance);
            }
            break;

        case 2: // Deposit
        
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            
            balance += amount;
            
            printf("Deposit successful.\n");
            
            printf("New Balance: %.2f\n", balance);
            
            break;

        case 3: // Check balance
        
            printf("Current Balance: %.2f\n", balance);
            break;

        case 4: // Exit
        
            printf("Exiting...\n");
            break;

        default: // Invalid input
            printf("Your Input is Invalid!\n");
    }

}

