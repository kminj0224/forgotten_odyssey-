/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb014  Symbol: LoadScript */

/* LoadScript(char*) */

void * LoadScript(char *param_1)

{
  size_t __n;
  char *pcVar1;
  void *__src;
  void *__s;
  int iVar2;
  size_t local_1c [2];
  
  pcVar1 = (char *)cocos2d::CCFileUtils::fullPathFromRelativePath(param_1);
  local_1c[0] = 0;
  __src = (void *)cocos2d::CCFileUtils::getFileData
                            (pcVar1,(char *)(DAT_000cb08c + 0xcb02c),local_1c);
  __n = local_1c[0];
  __s = malloc(local_1c[0]);
  memset(__s,0,__n);
  memcpy(__s,__src,__n);
  iVar2 = *(int *)(DAT_000cb090 + 0xcb064);
  *(size_t *)(iVar2 + DAT_000cb094) = __n;
  *(undefined *)(iVar2 + DAT_000cb098) = 0;
  strcpy((char *)(iVar2 + DAT_000cb09c),param_1);
  if (__src != (void *)0x0) {
    operator_delete__(__src);
  }
  return __s;
}


