/* 
 * File:common.h
 * Authors: Stephen Appiah Frimpong NIA: 206637 , Manuel Aneiros Otero NIA: 205351 , Hugo Hernández Quimbay NIA: 206662
 * DATE: 11/02/2018
 * This section contains the main constant values of Email App
 */


#ifndef COMMON_H
#define COMMON_H

// -------------------- Default Statments Values ----------------------------------

#define TRUE 1 // true for boolean
#define FALSE 0 // false for boolean

#define SUCCESS 1 // success , true for variables boolean
#define FAIL 0 // fail , false for variables boolean
#define ERROR -1 // for error statments
#define NOT_FOUNDED -1 //for not found values 
#define UNDEFINED 0 //for undefined values

#define MAX_PATH 150 //Max characters that can holds a char paths. Used to store files paths
#define MAX_BUF 100 //Max characters that can be store in a string. Used to store file lines 

#define EMPTY '\0' //used to set a string to empty or end of line

// -------------------- File Message Formats ----------------------------------

#define FORMAT_MESSAGE_ID "%s %d" //used to match file message : id
#define FORMAT_SPECIAL_BEAM_CANON "%s\n" // used to match file folder names
#define FORMAT_FIELD_HEADERS ":" // used to match file headers such as Folder:
#define NEW_LINE "\r\n" // determine  if new lines
#define FORMAT_EMAIL_FILE_STRUC "%s" // to read all string of file 


// -------------------- Email Default Structure ----------------------------------
/**init_email uses this values to init a email structure*/

#define EMAIL_INIT_ID "_EDA_email" //default email id
#define EMAIL_INIT_FROM "stephen.appiah@estudiant.upf.edu" //default email from
#define EMAIL_INIT_TO "manuell@estudiant.upf.edu" //default email to
#define EMAIL_INIT_SUBJECT "hugo que tal" //default email subject
#define EMAIL_INIT_BODY "Esto es una estructura!!" //default email body


// -------------------- EMAIL FILE FOR READING STRUCTURE ----------------------------------

#define EMAIL_FILE_STRUC_DATE "Date:"
#define EMAIL_FILE_STRUC_FROM "From:"
#define EMAIL_FILE_STRUC_TO "To:"
#define EMAIL_FILE_STRUC_MESSAGEID "Message-ID:"
#define EMAIL_FILE_STRUC_SUBJECT "Subject:"

// -------------------- EMAIL FILE FOR STORING STRUCTURE ----------------------------------
/**For storing email to file purpose*/

#define EMAIL_FILE_STRUC_DATE_STORE "Date: "
#define EMAIL_FILE_STRUC_FROM_STORE "From: "
#define EMAIL_FILE_STRUC_TO_STORE "To: "
#define EMAIL_FILE_STRUC_MESSAGEID_STORE "Message-ID: "
#define EMAIL_FILE_STRUC_SUBJECT_STORE "Subject: "
#define ARROW_LESS "<"
#define ARROW_BID ">"

// -------------------- EMAIL INTERACTIVE ----------------------------------
/**For printing purpose**/

#define EMAIL_INTERACTIVE_FROM "From:\n"
#define EMAIL_INTERACTIVE_TO "To:\n"
#define EMAIL_INTERACTIVE_SUBJECT "Subject:\n"
#define EMAIL_INTERACTIVE_MESSAGE "Message:\n"

// -------------------- EMAIL STRUCTURE PRINT ----------------------------------
/**For printing purpose**/
#define EMAIL_STRUCTURE_DATE "Date %s \n"
#define EMAIL_STRUCTURE_ID "ID %s \n"
#define EMAIL_STRUCTURE_FROM "From %s \n"
#define EMAIL_STRUCTURE_TO "To %s \n"
#define EMAIL_STRUCTURE_SUBJECT "Subject %s \n"
#define EMAIL_STRUCTURE_BODY "Message : \n\n%s\n"



// -------------------- FOLDER INTERACTIVE ----------------------------------
#define EMAIL_INTERACTIVE_FOLDER_NAME "Folder name : \n" //used to print folder names


// -------------------- FOLDER STRUCTURE PRINT ----------------------------------
/**For printing purpose**/
#define FOLDER_STRUCTURE_NAME "Folder name : %s \n"
#define FOLDER_STRUCTURE_EMPTY "Empty %d \n"
#define FOLDER_STRUCTURE_SIZE "Size %d \n"
#define FOLDER_STRUCTURE_PROTECTED "Protected %d \n"
#define FOLDER_STRUCTURE_FOLDER_MAILS_LIST "Folder Emails Llist\n\n"

// -------------------- DATABASE STRUCTURE PRINT ----------------------------------
/**For printing purpose**/
#define DATABASE_STRUCTURE "Database: \n"
#define DATABASE_STRUCTURE_MSG_ID "Message ID %d \n"
#define DATABASE_STRUCTURE_EMAIL_COUNT "Email count %d \n"
#define DATABASE_STRUCTURE_FOLDER_COUNT "Folder count %d \n"
#define DATABASE_STRUCTURE_EMAIL_LIST "Emails Llist \n"
#define DATABASE_STRUCTURE_FOLDER_LIST "Folders Llist \n"


// -------------------- Folder Basic Structure ----------------------------------
#define FOLDER_INIT_NAME "_EDA_folder" //used to store a default name to folder

// -------------------- Folders Protectes ----------------------------------
#define PROTECT_INBOX "Inbox" // used to compare if folder reading in file is a type inbox folder
#define PROTECT_OUTBOX "OutBox" // used to compare if folder reading in file is a type outbox folder


// -------------------- Paths ----------------------------------
/**Default paths used*/
#define EM_CONFIG_PATH "emailDB/EMconfig.txt" //contains the program config path file
#define EM_STORE_PATH "emailDB/" //contains the dir where to store messages , used to store this path + message id 

// -------------------- File ----------------------------------
#define FILE_READ_MODE "r" // reading mode
#define FILE_WRITE_MODE "w" //writing mode
#define FILE_END "End" // determine if end of file
#define FILE_FORMAT ".txt" //default file format to store the messages


// -------------------- Config Structure ----------------------------------
/**Contains the basic structure of storing the data in config file*/
#define FILE_FORMAT_CONFIG_STRUC_MESSAGES "Message-ID: " //used to write the meesage id section in file
#define FILE_FORMAT_CONFIG_STRUC_FOLDERS "Folders:\r\n" //used to write the folders section in file
#define FILE_FORMAT_CONFIG_STRUC_MESSAGES_FOLDER_SECTION " Messages:\r\n" //used to write the meesage section in file


// -------------------- Notifications MSG----------------------------------
/**The notifications to the users*/
/**For printing purpose**/

#define MESSAGE_EMAIL_ENTER_NAME "Enter the name of the email you wants:\n"
#define MESSAGE_EMAIL_CREATED "Mail has been created and saved at Outbox Folder!"
#define MESSAGE_FOLDER_CREATED "Folder created"
#define EMAIL_INFO_NOT_IN_DB "Can't find the email"
#define FOLDER_INFO_NOT_IN_DB "Can't find the folder"
#define FOLDER_INFO_ALREADY_IN "This folder already exist"
#define EMAIL_INFO_ALREADY_IN "This email already exist"
#define MESSAGE_EMAIL_ADDED_FOLDER "You have successfully added the email to the folder"
#define MESSAGE_EMAIL_TO_ADD_FOLDER "Enter the name of the email you wants add to the folder:\n"
#define MESSAGE_FOLDER_EMAIL_TO_ADD "Enter the name of the folder you wants the email to be add:\n"

#define MESSAGE_EMAIL_TO_REMOVE_FOLDER "Enter the name of the email you wants to remove from the folder:\n"
#define MESSAGE_FOLDER_EMAIL_TO_REMOVE "Enter the name of the folder you wants the email sould be removed:\n"
#define MESSAGE_FOLDER_PROTECTED "The folder [%s] is protected , cant delete the folder "

#define _DELETE_EMAIL_MSG "Enter name of email you want to delete\n"
#define _DELETE_FOLDER_MSG "Enter name of folder you want to delete\n"
#define _DELETE_CONFIRMATION_MSG "Are you sure you want to delete the mail ? [Yes | No]"
#define _DELETE_FOLDER_CONFIRMATION_MSG "Are you sure you want to delete the Folder ? [Yes | No]"
#define _DELETE_EMAIL_MSG_YES "Yes"
#define _DELETE_EMAIL_MSG_NO "No"
#define _SEARCH_MSG "Enter a character\n"
#define _SEARCH_MSG_RESULT "[%s]\n"
#define _SEARCH_MSG_NO_RESULT "No results found ..."
#define _DELETE_EMAIL_MSG_DONE "The email has been deleted"
#define _DELETE_FOLDER_MSG_DONE "The folder has been deleted"
#define _REMOVE_EMAIL_FROM_FOLDER_MSG_DONE "The email has been removed from folder"

#define OPTION_MSG_CHOSE "Choose an option: "
#define OPTION_MSG_SELECTED_EMAIL_LIST "You have selected: List emails option\n"
#define OPTION_MSG_SELECTED_SHOW_EMAIL "You have selected: Show email option\n"
#define OPTION_MSG_SELECTED_CREATE_EMAIL "You have selected: Create email option\n"
#define OPTION_MSG_SELECTED_DELETE_EMAIL "You have selected: Delete email option\n"
#define OPTION_MSG_SELECTED_SHOW_FOLDER "You have selected: Show folder option\n"
#define OPTION_MSG_SELECTED_CREATE_FOLDER "You have selected: Create folder option\n"
#define OPTION_MSG_SELECTED_DELETE_FOLDER "You have selected: Delete folder option\n"
#define OPTION_MSG_SELECTED_ADD_EMAIL_TO_FOLDER "You have selected: Add email to folder option\n"
#define OPTION_MSG_SELECTED_REMOVE_EMAIL_FOM_FOLDER "You have selected: Remove email from folder option\n"
#define OPTION_MSG_SELECTED_SEARCH_STRING "You have selected: Search string option\n"
#define OPTION_MSG_SELECTED_IVALID_OPTION "Invalid option. Try again...\n\n"
#define OPTION_MSG_SELECTED_PRESS_ENTER_CONTINUE "Press enter to continue..."

// -------------------- Notifications ERRORS----------------------------------
/**Notifies the error to the users*/
/**For printing purpose**/
#define ERROR_MSG_FILE_NOT_FOUDN "File not found :(  "
#define ERROR_MSG_FILE_CANT_CREAT "Can't create file :(  "
#define ERROR_SPECIAL_EMConfig "Problem found: Please revise your EMConfig file format\n"
#define ERROR_MAIL_INVALID "Invalid email , please check it and try again :D "
#define ERROR_FOLDER_CANT_ADD "Ups can't add folder"
#define ERROR_EMAIL_CANT_ADD_DB "Ups can't add email to db"
#define ERROR_EMAIL_CANT_ADD_FOLDER "Ups can't add email to folder"
#define ERROR_SAVING_FILE "Something  went wrong while saving email file"
#define ERROR_SAVING_CONIFG_FILE "Can't save config file :o"
#define ERROR_CAN_FIND_OUTBOX "Something went wrong , can't find OutBox folder :("
#define ERROR_DELETE_EMAIL_MSG "Unable to delete the file"


// -------------------- Notifications WARNING----------------------------------
/**Notifies the how to fix the errors to the users*/
/**For printing purpose**/
/**WARNING*/
#define ERROR_FOLDER_CANT_ADD_FIX "The folder database is full , try to delete some folder and try it again :D"
#define ERROR_EMAIL_CANT_ADD_DB_FIX "The email database is full , try to delete some emails and try it again :D"
#define ERROR_EMAIL_CANT_ADD_FOLDER_FIX "Folder email is full , try to delete some emails from the folder, and try it again :D"

// -------------------- Others----------------------------------
/**For printing purpose**/
#define ALL_EMAIL "All USER Emails \n"
#define ALL_MATCHED_EMAIL "List of matched mails \n"
#define ALL_FOLDER "All Folders : \n"
#define _EMAIL_TO_PRINT "Email : %d \n"
#define _FOLDER_TOTAL_PRINT "Total Folders :%d\n"
#define _FOLDER_TO_PRINT "Folder [%s] : %d \n"
#define _EMAIL_TOTAL_PRINT "Total Emails :%d \n"
#define LINE "------------------------------\n"
#define _EMAIL_TOTAL_PRINT "Total Emails :%d \n"
#define STRING "%s"
#define NUMBER "%d"
#endif /* COMMON_H */