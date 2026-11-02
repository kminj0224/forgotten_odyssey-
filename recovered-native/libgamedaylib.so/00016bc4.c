/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016bc4  Symbol: _INIT_1 */

void _INIT_1(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  __destr_function *__destr_function;
  int iVar4;
  undefined4 uVar5;
  pthread_key_t *__key;
  
  iVar1 = DAT_00016c10;
  __key = (pthread_key_t *)(DAT_00016c10 + 0x16bd8);
  __destr_function = (__destr_function *)(DAT_00016c14 + 0x16be0);
  *(undefined *)(DAT_00016c10 + 0x16bdc) = 0;
  uVar3 = pthread_key_create(__key,__destr_function);
  iVar4 = DAT_00016c18 + 0x16bf8;
  uVar5 = *(undefined4 *)(DAT_00016c1c + 0x16bfc);
  cVar2 = '\x01' - (char)uVar3;
  if (1 < uVar3) {
    cVar2 = '\0';
  }
  *(char *)(iVar1 + 0x16bdc) = cVar2;
  (*(code *)PTR___cxa_atexit_00025f98)(iVar4,__key,uVar5);
  return;
}


