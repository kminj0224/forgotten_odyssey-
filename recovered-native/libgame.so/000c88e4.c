/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c88e4  Symbol: stream2intarray */

/* stream2intarray(char*, int*) */

int stream2intarray(char *param_1,int *param_2)

{
  int iVar1;
  char *__nptr;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_000c8914;
  iVar3 = 0;
  __nptr = strtok(param_1,(char *)(DAT_000c8910 + 0xc88f2));
  while (__nptr != (char *)0x0) {
    iVar2 = atoi(__nptr);
    *param_2 = iVar2;
    param_2 = param_2 + 1;
    iVar3 = iVar3 + 1;
    __nptr = strtok((char *)0x0,(char *)(iVar1 + 0xc88f8));
  }
  return iVar3;
}


