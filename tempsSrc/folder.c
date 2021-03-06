/* 
 * File:Folder.c   
 * Authors: Stephen Appiah Frimpong NIA: 206637 , Manuel Aneiros Otero NIA: 205351 , Hugo Hernández Quimbay NIA: 206662
 * DATE: 11/02/2018
 * Version : 1.0
 *
 * 
 * This file describes the folder methods related to the folder header
 * The general purpose of the file if to serve the different functionality of the folder structure.
 * 
 */

#include "imports.h"
#include "folder.h"
#include "email.h"
#include "utils.h"

/**
 * Initializes a folder just after memory is reserved. This means that the
 * emails array can contain garbage, this is why we cannot use 'clear_folder'
 * function.
 * @param folder
 */
void init_folder(Folder* folder) {

    //Variables declarations
    int i;

    //Defautl folder structure
    strcpy(folder->folder_name, FOLDER_INIT_NAME);
    folder->empty = TRUE;
    folder->protected = FALSE;
    folder->size = UNDEFINED;

    //folder Initialization and emails
    for (i = 0; i < MAX_FOLDER_EMAILS; i++)
        folder->emails[i] = NULL;

}

/**
 * Clears the folder, derreferencing emails.
 * @param folder
 * @return 
 */
int delete_folder(Folder* folder) {

}

/**
 * Does the basic setup of a newly created folder.
 * @param folder
 * @param name
 * @return 
 */
int create_folder(Folder* folder, char* name) {

    //if a folder and a name is specify it creates a new folder instance with default values
    //and sets the name of the folder to the given one
    if (folder != NULL && name != NULL) {
        init_folder(folder);
        strcpy(folder->folder_name, name);
        return SUCCESS;
    }
    return FAIL;
}

/**
 * Returns the fodler name.
 * @param folder
 * @return 
 */
char* get_folder_name(Folder* folder) {
    return folder->folder_name;
}

/**
 * Returns the folder size, it is, the number of emails contained into it.
 * @param folder
 * @return 
 */
int get_folder_size(Folder* folder) {
    return folder->size;
}

/**
 * Returns 1 if folder is empty, 0 otherwise.
 * @param folder
 * @return 
 */
int is_folder_empty(Folder* folder) {
    return folder->empty;
}

/**
 * Fills the parameter emails with the pointers to the emails contained into
 * the folder and returns the folder size.
 * @param folder
 * @param emails
 * @return 
 */
int get_folder_emails(Folder* folder, Email** emails) {


}

/**
 * Adds the email to the folder email list.
 * returns success if added else fail
 * @param folder
 * @param email
 * @return 
 */
int add_email_to_folder(Folder* folder, Email* email) {

    //Variable declarations
    int i = 0;

    if (folder != NULL && email != NULL) {
        //Cheking if position where to store email is empty. 
        //if is empty we store the new email to that folder email position
        for (i = 0; i < MAX_FOLDER_EMAILS; i++) {
            if (folder->emails[i] == NULL) {
                email->referenced++;
                folder->emails[i] = email;
                folder->size++;
                return SUCCESS;
            }
        }
    }
    return FAIL;
}

/**
 * Removes all occurrences of the referenced email from the folder.
 * @param folder
 * @param email
 * @return 
 */
int delete_folder_email(Folder* folder, Email* email) {

    //Variable declarations
    int i = 0;

    if (folder != NULL && email != NULL) {
        //Cheking if position where to store email is empty. 
        //if is empty we store the new email to that folder email position
        for (i = 0; i < MAX_FOLDER_EMAILS; i++) {
            if (strcmp(folder->emails[i]->id, get_email_id(email)) == 0) {
                email->referenced--;
                folder->emails[i] = NULL;
                folder->size--;
                return SUCCESS;
            }
        }
    }
    return FAIL;
}

/**
 * Copies the a folder to another folder
 * @param dest_folder
 * @param src_folder
 */
void copy_folder(Folder* dest_folder, Folder* src_folder) {

    //given a src folder and a destination folder , 
    //it copies the basic folder structure information and store it to the given folder destination
    if (src_folder != NULL && src_folder != NULL) {
        strcpy(dest_folder->folder_name, src_folder->folder_name);
        dest_folder->empty = src_folder->empty;
        dest_folder->size = src_folder->size;
        dest_folder->protected = src_folder->protected;
    }
}

/**
 * Ask the user the required information in order to create a basic folder info
 * @param email
 */
void read_folder_interactive(Folder* folder) {

    //Getting folder info
    printf(EMAIL_INTERACTIVE_FOLDER_NAME);
    scanf("%s", folder->folder_name);
    folder->size = strlen(folder->folder_name);
}