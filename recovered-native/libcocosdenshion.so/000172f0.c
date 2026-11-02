/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000172f0  Symbol: _INIT_1 */

void _INIT_1(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  __destr_function *__destr_function;
  int iVar4;
  undefined4 uVar5;
  pthread_key_t *__key;
  
  iVar1 = DAT_0001733c;
  __key = (pthread_key_t *)(DAT_0001733c + 0x17304);
  __destr_function = (__destr_function *)(DAT_00017340 + 0x1730c);
  *(undefined *)(DAT_0001733c + 0x17308) = 0;
  uVar3 = pthread_key_create(__key,__destr_function);
  iVar4 = DAT_00017344 + 0x17324;
  uVar5 = *(undefined4 *)(DAT_00017348 + 0x17328);
  cVar2 = '\x01' - (char)uVar3;
  if (1 < uVar3) {
    cVar2 = '\0';
  }
  *(char *)(iVar1 + 0x17308) = cVar2;
  (*(code *)PTR___cxa_atexit_00025f98)(iVar4,__key,uVar5);
  return;
}


