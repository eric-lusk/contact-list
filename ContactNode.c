#include <stdio.h>
#include <string.h>
#include "ContactNode.h"

/* functions */

struct ContactNode *CreateContactNode( char *name, char *number ) {
  struct ContactNode *newNode = malloc(sizeof(struct ContactNode));
  newNode->contactName = strdup(name);
  newNode->contactPhoneNum = strdup(number);
  newNode->next = NULL;
  return newNode;
}

void InsertContactAfter(ContactNode *node) {

}

struct ContactNode *GetNextContact() {

}

void PrintContactNode(ContactNode *node) {

}
