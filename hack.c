#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void log_secret_message(char msg[], int KEY)
{
	int i;
	 FILE *fptr;
	 fptr = fopen("hack.txt","a");
	 for(i=0;msg[i]!='\0';i++)
	 {
	 	msg[i] = msg[i] + KEY;
	 }
	 printf(">> ENCRYPITING WITH KEY %d.....\n",KEY);
	 printf("SAVED TO LOG: %s",msg);
	 fprintf(fptr,"KEY:%d | SECRET_LOG:%s", KEY,msg);
	 fprintf(fptr,"\n");
	 fclose(fptr);
	 
}
int main()
{
    char my_message[100]; 
  int KEY;
  while(1)
  {
    printf("\n ENTER SHIFT KEY (NUMBER)");
    scanf("%d",&KEY);
    getchar();
    printf("--- SENTINEL SECURE LOGGER ---\n");
    printf("Type a message to encrypt & save (Type 'EXIT' to stop):\n");
        printf("\nInput Message: ");
        fgets(my_message, 100, stdin); 
        if(my_message[0] == 'E' && my_message[1] == 'X') 
            break;
        log_secret_message(my_message,KEY);
    }
    return 0;
}
