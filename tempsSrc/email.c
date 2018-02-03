/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */


#include "imports.h"

#include "email.h"
#include "database.h"
#include"utils.h"

/**
 * Initializes an email just after memory is reserved.
 * @param email
 */
void init_email(Email* email) {

    //Defautl email structure
    strcpy(email->id, "_EDA_email");
    strcpy(email->date, get_curent_date());
    strcpy(email->from, "MonsterKrod@gmail.com");
    strcpy(email->to, "MonsterKrod@gmail.com");
    strcpy(email->subject, "Defuult email structure");
    strcpy(email->body, "Hola esto es una prueba!!!");

    email->empty = TRUE;
    email->referenced = UNDEFINED;
}

/**
 * Copies the information from email to other.
 * Follows strcpy parameter setting.
 * @param dest_email
 * @param src_email
 */
void copy_email(Email* dest_email, Email* src_email) {

    if (dest_email != NULL && src_email != NULL) {
        strcpy(dest_email->id, src_email->id);
        strcpy(dest_email->body, src_email->body);
        strcpy(dest_email->date, src_email->date);
        strcpy(dest_email->from, src_email->from);
        strcpy(dest_email->to, src_email->to);
        strcpy(dest_email->subject, src_email->subject);
        dest_email->empty = src_email->empty;
        dest_email->referenced = src_email->referenced;
    }
}

/**
 * Returns the email id.
 * @param email
 * @return 
 */
char* get_email_id(Email* email) {
    return email->id;
}

/** emailDB/3_EDA_email.txt

 * Returns the subject of the email.
 * @param email
 * @return 
 */
char* get_email_subject(Email* email) {
    return email->subject;
}

/**
 * Returns 1 if email is empty, 0 otherwise.
 * @param email
 * @return 
 */
int is_email_empty(Email* email) {
    return email->empty;
}

/**
 * TDB
 * @param email
 * @param buf
 * @param buf_size
 * @return 
 */
char* load_body(Email* email, char buf[], int buf_size) {

}

/**
 * Set the now date into the date email field.
 * @param email
 */
void set_email_date(Email* email) {
    strcpy(email->date, get_curent_date());
}

/**
 * Ask the user the required information in order to create an email and 
 * stores it into the referenced email structure.
 * @param email
 */
void read_email_interactive(Email* email) {

    //Variables declarations
    int referenced_to_out_box = 1;

    //Getting email info
    set_email_date(email);
    printf("De : \n");
    scanf("%s", email->from);

    printf("Para : \n");
    scanf("%s", email->to);

    printf("Asunto : \n");
    scanf("%s", email->subject);

    printf("Menssage : \n");
    scanf("%s", email->body);
    email->referenced = referenced_to_out_box;
    email->empty = FALSE;
}

/**
 * Loads an email stored into a given file.
 * @param fd
 * @param email
 * @return 
 */
int load_email_from_file(FILE* fd, Email *email) {

    //Variables declarations
    char buff[MAX_BUF];
    
    puts("\n");
    fgets(buff, MAX_BUF, fd);
    while (!feof(fd)) {
        puts(buff);
        fgets(buff, MAX_BUF, fd);
    }
    
    return SUCCESS;
}

/**
 * Writes an email to a given file.
 * @param fd
 * @param email
 * @return 
 */
int write_email_to_file(FILE* fd, Email* email) {

    //Variables declarations
    char format[MAX_BUF];
    int result;

    //Creating email file format
    strcpy(format, "Date: ");
    strcat(format, email->date);
    strcat(format, "\r\n");
    result = fputs(format, fd);
    strcpy(format, "\0");

    strcat(format, "From: ");
    strcat(format, "<");
    strcat(format, email->from);
    strcat(format, ">");
    strcat(format, "\r\n");
    result = fputs(format, fd);
    strcpy(format, "\0");

    strcat(format, "To: ");
    strcat(format, "<");
    strcat(format, email->to);
    strcat(format, ">");
    strcat(format, "\r\n");
    result = fputs(format, fd);
    strcpy(format, "\0");

    strcat(format, "Message-ID: ");
    strcat(format, email->id);
    strcat(format, "\r\n");

    result = fputs(format, fd);
    strcpy(format, "\0");

    strcat(format, "Subject: ");
    strcat(format, email->subject);
    strcat(format, "\r\n");
    result = fputs(format, fd);
    strcpy(format, "\0");

    result = fputs("\r\n", fd);
    strcat(format, email->body);
    strcat(format, "\r\n");
    result = fputs(format, fd);
    strcpy(format, "\0");

    if (result != EOF) //EOF determinats if there was an error while writing to the file
        return SUCCESS;
    else
        return FAIL;
}

/**
 *  if from , to , is empty , set email.empty to true
 * @param email
 * @return 
 */
int validate_email(Email *email) {

    if (is_valid_email(email->from) != 0)
        email->empty = TRUE;
    else if (is_valid_email(email->to) != 0)
        email->empty = TRUE;
    else if (is_valid_message(email->body) != 0)
        email->empty = TRUE;
    else
        email->empty = FALSE;
}

//NOTE : TODO!!

/**
 * 
 * @param email
 * @return 
 */
int is_valid_email(char *email) {
    return 0;
}

/**
 * 
 * @param message
 * @return 
 */
int is_valid_message(char *message) {
    return 0;
}