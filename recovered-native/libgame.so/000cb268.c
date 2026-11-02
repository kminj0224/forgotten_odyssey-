/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb268  Symbol: vSetDialogMsg */

/* vSetDialogMsg(char*, int) */

void vSetDialogMsg(char *param_1,int param_2)

{
  char *__dest;
  int *piVar1;
  char acStack_1a4 [400];
  int local_14;
  
  piVar1 = *(int **)(DAT_000cb2c4 + 0xcb274);
  local_14 = *piVar1;
  memset(acStack_1a4,0,400);
  memcpy(acStack_1a4,param_1,param_2);
  __dest = (char *)(*(int *)(DAT_000cb2c8 + 0xcb29a) + DAT_000cb2d0);
  if (*(int *)(*(int *)(DAT_000cb2c8 + 0xcb29a) + DAT_000cb2cc) == 1) {
    sprintf(__dest,(char *)(DAT_000cb2d4 + 0xcb2aa),acStack_1a4);
  }
  else {
    strcpy(__dest,acStack_1a4);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


