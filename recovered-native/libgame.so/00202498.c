/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202498  Symbol: _INIT_161 */

void _INIT_161(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  __destr_function *__destr_function;
  int iVar4;
  undefined4 uVar5;
  pthread_key_t *__key;
  
  iVar1 = DAT_002024e4;
  __key = (pthread_key_t *)(DAT_002024e4 + 0x2024ac);
  __destr_function = (__destr_function *)(DAT_002024e8 + 0x2024b4);
  *(undefined *)(DAT_002024e4 + 0x2024b0) = 0;
  uVar3 = pthread_key_create(__key,__destr_function);
  iVar4 = DAT_002024ec + 0x2024cc;
  uVar5 = *(undefined4 *)(DAT_002024f0 + 0x2024d0);
  cVar2 = '\x01' - (char)uVar3;
  if (1 < uVar3) {
    cVar2 = '\0';
  }
  *(char *)(iVar1 + 0x2024b0) = cVar2;
  FUN_00201240(__key,iVar4,uVar5);
  return;
}


