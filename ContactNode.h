typedef struct ContactNode {
  char contactName[50];
  char contactPhoneNum[50];
  struct ContactNode *next;
} ContactNode;

