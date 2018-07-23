#include <stdio.h>
#include <stdlib.h>
//Bj is on the mix || Bj is on the mix || Bj is on the mix || Bj is on the mix || Bj is on the mix || Bj is on the mix
void main(int argc, char *argv[]) {
	
	int amt, opt = 4, rate, totalFee;
	char sendName[] = "Anonymous", rcvName[] = "Anonymous";
	system("color a");
	
	
	
	/*using "int swch()" to call it later, 
	it is a function so that we can call it 
	whenever we needed them.*/
	
		int swch(){
				while(opt>0){
					system("cls");
					printf(	"\n======================>"
							"\nChoose option to print"
							"\n1. Print the service rate?"
							"\n2. Print the total fee?"
							"\n3. Print the receipt"
							"\n4. Clear"
							"\n0. Exit..."
							"\n======================>"
							"\nEnter option: ");
					scanf("%d", &opt);
					
					
					
				/*using switch we can make a questionnaire program, 
				I used switch to make an option like printing 
				their task rate and the total price.
				
				My own understanding about switch is you can only declared
				that statement if you meet the condition.*/
				
				switch(opt){
					case 1:
						system("cls");
						printf("Your total service rate is Php%i", rate);
						printf(	"\n\n\tPress a key to continue...");
						getch();
						system("cls");
					break;
					case 2:
						system("cls");
						printf("Your total fee is Php%i", totalFee);
						printf(	"\n\n\tPress a key to continue...");
						getch();
						system("cls");
					break;
					
					case 3:
						system("cls");
						printf(	"'MONEY SENDER RECEIPT'"
								"\n\nSender name: %s"
								"\n\nReciever name: %s"
								"\n<======================>"
								"\nSender fee: Php%d"
								"\nAmount: Php%d"
								"\nTotal: Php%d"
								"\n<======================>", sendName, rcvName, rate, amt, totalFee);
						printf(	"\n\n\tPress a key to continue...");
						getch();
						system("cls");
					break;
					case 4:
						system("cls");
						printf(	"Successfully cleared!!\n\n"
								"\n\n\tPress a key to continue...");
						getch();
						system("cls");
					break;
					case 0:
							system("cls");
							printf("Exiting...");
							system("exit");
					break;
					default:
						system("cls");
						printf("\nInput a valid option.");
						printf(	"\n\n\tPress a key to continue...");
						getch();
						system("cls");
					break;
			}
				}
		}
				
				printf("Enter amount to send: ");
				scanf("%d", &amt);
				printf("Receiver name: ");
				scanf("%s", &rcvName);
				printf("Sender name: ");
				scanf("%s", &sendName);



			/*"If, else if, else" in this method
			you can easily understand that if you meet
			The condition the statement will be declared.*/

			if(amt>=50001){
				printf("Php 50000 & below only.");
			} else if(amt<=99){
				printf("The minimum wager is Php100 above only.");
			} else {
				if (amt>=40001 && amt<=50000){
						rate = 1200;
					} else if(amt>=30001 && amt<=40000){
						rate = 960;
					} else if(amt>=20001 && amt<=30000){
						rate = 720;
					} else if(amt>=15001 && amt<=20000){
						rate = 480;
					} else if(amt>=10001 && amt<=15000){
						rate = 360;
					} else if(amt>=5001 && amt<=10000){
						rate = 240;
					} else if(amt>=3001 && amt<=5000){
						rate = 220;
					} else if(amt>=2501 && amt<=3000){
						rate = 160;
					} else if(amt>=2001 && amt<=2500){
						rate = 150;
					} else if(amt>=1501 && amt<=2000){
						rate = 110;
					} else if(amt>=1001 && amt<=1500){
						rate = 95;
					} else if(amt>=701 && amt<=1000){
						rate = 50;
					} else if(amt>=501 && amt<=700){
						rate = 40;
					} else if(amt>=301 && amt<=500){
						rate = 30;
					} else if(amt>=201 && amt<=300){
						rate = 20;
					} else if(amt>=101 && amt<=200){
						rate = 15;
					}
						totalFee = amt+rate;
						system("cls");
						printf("Sending Php %d from %s to %s?", amt, sendName, rcvName);
						printf("\n\nPress any key to continue...");
						getch();
						system("cls");
						swch();
					}
}
