#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
char others();
int gen_id();
void add_task();
void view_task();
void update_task();
void delete_task();
void view_all_task();
void search_task();
void search_by_ID();
void search_by_category();
void search_by_date();
void search_by_status();
void sort_ascending();
void sort_descending();
void search_by(char option[1]);
*/
struct list_rec{
	char id[20], name[50], category[100];
    int day, month, year;
    char status[100], remark[100];
};


char others(){
    char selection[1];
    while(1){
        printf("Enter y to Return To Main Menu, Enter n To Exit The Program:");
        scanf("%s", &selection);
        if (selection[0] == 'y' || selection[0] == 'n'){
            return selection[0];
            break;
        }
        else{
            printf("\n!!!Invalid Option!!!\n");
            continue;
        }
    }
}

int gen_id(){
    int i, id;
    FILE * f = fopen("genid.txt", "r");
    FILE * ft = fopen("newidgen.txt", "w");
    while(!feof(f)){
            fscanf(f,"%d",&id);
    }
    id++;
    fprintf(ft, "%d", id);
    fclose(ft);
    fclose(f);
    remove("genid.txt");
    rename("newidgen.txt", "genid.txt");
    return id;
}

void add_task(){
    int id = gen_id();
    int day, month, year;
    char name[30], category[30];
    char status[20] = "pending";
    printf("Adding new task. Please fill in the information for your new task below.");
    FILE * file = fopen("task.txt", "r+");
    if(file == NULL){
        printf("\nFile not found!\nCreating a new file!");
        file = fopen("task.txt", "w");
    }
    else{
        fseek(file, 0, SEEK_END);
        printf("\nName: ");
        getchar();
        fgets(name, 30, stdin);
        name[strlen(name)-1] = '\0';
        printf("Due Date (yyyy/mm/dd): ");
        scanf("%d/%d/%d", &day, &month, &year);
        printf("Category: ");
        getchar();
        fgets(category, 30, stdin);
        category[strlen(category)-1] = '\0';
        printf("\tID\tName\t\t\t\tCategory\t\t\tDue Date\t\tStatus\t\t\tRemark\n\n");
        printf("\t%d\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", id, name, category, day, month, year, status);
        fprintf(file,"%d:%s:%s:%d:%d:%d:%s:%s", id, name, category, day, month, year, status);
    }
    fclose(file);
}

void view_task(){
    char option[1], others_res[1];
    while(1){
    printf("\n[1] View all tasks");
    printf("\n[2] Search tasks");
    printf("\n[3] Sort by ascending order");
    printf("\n[4] Sort by descending order");
    printf("\n[5] Back to main menu");
    printf("\nPlease Enter Your Option:");
    scanf("%s", &option);
    switch(option[0]){
        case '1':
            view_all_task();
            others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
            break;
        case '2':
            search_task();
            others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
            break;
        /*case'3':
            sort_ascending();
            others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
        case'4':
            sort_descending();
            others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}*/
        case '5':
            main();
            break;
        default:
            printf("\n\n!!!Invalid option!!!\n\n");
            continue;
        }
    }
}

void update_task(){
    int i, c, update_year, update_month, update_day;
    struct list_rec record_list[370];
    char id[5], option[1], record[400];
    char update_name[50], update_category[100], update_status[100], update_remark[100];
    char * token;
    printf("Enter the id of task you want to update: ");
    getchar();
    gets(id);
    printf("The original task is displayed as below:\n");
    printf("\tID\tName\t\t\t\tCategory\t\t\tDue Date\t\tStatus\t\t\tRemark\n\n");
    FILE * file = fopen("task.txt", "r");
    FILE * tempfile = fopen("temp.txt", "w");
    if (file == NULL)
        printf("Could not open file.");
    else{
        while (!feof(file)){
            fgets(record, 400, file);
            token = strtok(record, ":");
			      strcpy(record_list[i].id, token);
			      token = strtok(NULL, ":");
                  while(token == NULL){
                    fclose(tempfile);
                    fclose(file);
                    remove("task.txt");
                    rename("temp.txt", "task.txt");
                    return;
                  }
			    strcpy(record_list[i].name, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].category, token);
			    token = strtok(NULL, ":");
                record_list[i].year = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].month = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].day = atoi(token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].status, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].remark, token);
			    token = strtok(NULL, ":");
                if(strcmp(id, record_list[i].id) == 0)
                {
                    printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                    printf("Which did you want to change?\n");
                    printf("[1] Name\t\t[2]Category\t\t[3]Due Date\t\t[4]Status\t\t[5]Remark\nOption:");
                    scanf("%s", &option);
                    switch(option[0]){
                        case'1':
                            printf("Input the updated name: ");
                            getchar();
                            fgets(update_name, 50, stdin);
                            update_name[strlen(update_name)-1] = '\0';
                            strcpy(record_list[i].name, update_name);
                            break;
                        case'2':
                            printf("Input the updated category: ");
                            getchar();
                            fgets(update_category, 50, stdin);
                            update_category[strlen(update_category)-1] = '\0';
                            strcpy(record_list[i].category, update_category);
                            break;
                        case'3':
                            printf("Input the updated due date (yyyy/mm/dd): ");
                            scanf("%d/%d/%d", &update_year, &update_month, &update_day);
                            record_list[i].year = update_year;
                            record_list[i].month = update_month;
                            record_list[i].day = update_day;
                            break;
                        case'4':
                            printf("Input the updated status: ");
                            getchar();
                            fgets(update_status, 50, stdin);
                            update_status[strlen(update_status)-1] = '\0';
                            strcpy(record_list[i].status, update_status);
                            break;
                        case'5':
                            printf("Input the updated remark: ");
                            getchar();
                            fgets(update_remark, 50, stdin);
                            //update_remark[strlen(update_remark)-1] = '\0';
                            strcpy(record_list[i].remark, update_remark);
                            break;
                    }
                }
                fprintf(tempfile,"%s:%s:%s:%d:%d:%d:%s:%s", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                i++;
        }
    }

}

void delete_task(){
    int i;
    struct list_rec record_list[370];
    char id[5], record[400];
    char * token;
    printf("Enter the id of task you want to delete: ");
    getchar();
    gets(id);
    printf("The deleted tasks are displayed as below:\n");
    printf("\tID\tName\t\t\t\tCategory\t\t\tDue Date\t\tStatus\t\t\tRemark\n\n");
    FILE * file = fopen("task.txt", "r");
    FILE * tempfile = fopen("temp.txt", "w");
    if (file == NULL)
        printf("Could not open file.");
    else{
        while (!feof(file)){
            fgets(record, 400, file);
            token = strtok(record, ":");
			      strcpy(record_list[i].id, token);
			      token = strtok(NULL, ":");
                  while(token == NULL){
                    fclose(tempfile);
                    fclose(file);
                    remove("task.txt");
                    rename("temp.txt", "task.txt");
                    return;
                  }
			    strcpy(record_list[i].name, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].category, token);
			    token = strtok(NULL, ":");
                record_list[i].year = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].month = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].day = atoi(token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].status, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].remark, token);
			    token = strtok(NULL, ":");
                if(strcmp(id, record_list[i].id) == 0)
                {
                    printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                    continue;
                }
                else{
                    fprintf(tempfile,"%s:%s:%s:%d:%d:%d:%s:%s", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                }
                i++;
                }
    }
}

void view_all_task(){
    int i,j;
    struct list_rec record_list[370];
    char record[400];
    char * token;
    printf("The tasks are displayed as below:\n");
    printf("\tID\tName\t\t\t\tCategory\t\t\tDue Date\t\tStatus\t\t\tRemark\n\n");
    FILE *fp = fopen("task.txt", "r");
    if (fp == NULL)
        printf("Could not open file.");
    else{
        while (!feof(fp)){
            fgets(record, 400, fp);
            token = strtok(record, ":");
			    strcpy(record_list[i].id, token);
			    token = strtok(NULL, ":");
                while(token == NULL){
                    return;
                }
			    strcpy(record_list[i].name, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].category, token);
			    token = strtok(NULL, ":");
                record_list[i].year = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].month = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].day = atoi(token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].status, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].remark, token);
			    token = strtok(NULL, ":");
		        printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                i++;
        }
    }
    fclose(fp);
}

void search_task(){
    char option[1], others_res[1];
    printf("Search by:");
    printf("\n[1] ID");
    printf("\n[2] Category");
    printf("\n[3] Due Date");
    printf("\n[4] Status");
    printf("\n[5] Return to Main Menu");
    printf("\nPlease Enter Your Option:");
    scanf("%s", &option);
    search_by(option);
}

void search_by(char option[1]){
    int i, j, result, search_year, search_month, search_day;
    struct list_rec record_list[370];
    char search_id[10], search_category[30], search_date[10], search_status[30], record[400];
    char * token;
    if(option[0] == '1'){
        printf("Enter the ID you want to search: ");
        getchar();
        fgets(search_id, 10, stdin);
        search_id[strlen(search_id)-1] = '\0';
    }
    else if(option[0] == '2'){
        printf("Enter the category you want to search: ");
        getchar();
        fgets(search_category, 30, stdin);
        search_category[strlen(search_category)-1] = '\0';
    }
    else if(option[0] == '3'){
        printf("Enter the due date you want to search (yyyy/m/d): ");
        scanf("%d/%d/%d", &search_year, &search_month, &search_day);
    }
    else if(option[0] == '4'){
        printf("Enter the status you want to search: ");
        getchar();
        fgets(search_status, 30, stdin);
        search_status[strlen(search_status)-1] = '\0';
    }
    else
        printf("!!!Invalid Option!!!\n");
    printf("The tasks are displayed as below:\n");
    printf("\tID\tName\t\t\t\tCategory\t\t\tDue Date\t\tStatus\t\t\tRemark\n\n");
    FILE *fp = fopen("task.txt", "r");
    if (fp == NULL)
        printf("Could not open file.");
    else{
        while (!feof(fp)){
            fgets(record, 400, fp);
            token = strtok(record, ":");
			      strcpy(record_list[i].id, token);
			      token = strtok(NULL, ":");
                  while(token == NULL)
                return;
			    strcpy(record_list[i].name, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].category, token);
			    token = strtok(NULL, ":");
                record_list[i].year = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].month = atoi(token);
                token = strtok(NULL, ":");
                record_list[i].day = atoi(token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].status, token);
			    token = strtok(NULL, ":");
			    strcpy(record_list[i].remark, token);
			    token = strtok(NULL, ":");
                if(option[0] == '1'){
                    result = strcmp(search_id, record_list[i].id);
                    if(result == 0)
                        printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                    else
                        continue;

                }
                else if(option[0] == '2'){
                    result = strcmp(search_category, record_list[i].category);
                    if(result == 0)
                        printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                    else
                        continue;

                }
                else if(option[0] == '3'){
                    if(record_list[i].year == search_year)
                        if (record_list[i].month == search_month)
                            if (record_list[i].day == search_day)
                                printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                            else
                                continue;

                }
                else if(option[0] == '4'){
                    result = strcmp(search_status, record_list[i].status);
                    if(result == 0)
                        printf("\t%s\t%-30s\t%-30s\t%d/%d/%d\t\t%-20s\t%-100s\n", record_list[i].id, record_list[i].name, record_list[i].category, record_list[i].year, record_list[i].month, record_list[i].day, record_list[i].status, record_list[i].remark);
                    else
                        continue;

                }
                i++;
        }
    }
    fclose(fp);
}

int main(){
    char option[1], others_res[1];
    {
        while(1){
        printf("\n\nWelcome to Personal Task Management\n");
        printf("\t[1] Add New Task\n");
        printf("\t[2] View Tasks\n");
        printf("\t[3] Update Task\n");
        printf("\t[4] Delete Task\n");
        printf("\t[5] Exit Program\n");
        printf("\nPlease Enter Your Option:");
        scanf("%s", &option);
        switch(option[0]){
            case '1':
                add_task();
                others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
                break;
                case '2':
                view_task();
                others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
                break;
            case '3':
                update_task();
                others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
                break;
            case'4':
                delete_task();
                others_res[0] = others();
                if (others_res[0] == 'y'){
                    main();}
                else if (others_res[0] == 'n'){
                    printf("Thank you!");
                    exit(0);}
                break;
            case'5':
                printf("Thank you!");
                exit(0);
                break;
            default:
                printf("\n\n!!!Invalid option!!!\n\n");
                continue;}
        fflush(stdin);
        return 0;

        }
    }
}

