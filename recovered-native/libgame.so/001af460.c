/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af460  Symbol: jinit_memory_mgr */

void jinit_memory_mgr(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *__s;
  int iVar3;
  int local_18;
  char local_11;
  
  param_1[1] = 0;
  local_18 = jpeg_mem_init();
  iVar3 = DAT_001af540 + 0x1af47a;
  piVar2 = (int *)jpeg_get_small(param_1,0x54);
  if (piVar2 == (int *)0x0) {
    jpeg_mem_term(param_1);
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = DAT_001af548;
  *piVar2 = iVar3 + DAT_001af544;
  piVar2[1] = iVar3 + DAT_001af54c;
  piVar2[2] = iVar3 + DAT_001af550;
  piVar2[3] = iVar3 + DAT_001af554;
  piVar2[4] = iVar3 + DAT_001af558;
  piVar2[5] = iVar3 + DAT_001af55c;
  piVar2[6] = iVar3 + DAT_001af560;
  piVar2[7] = iVar3 + DAT_001af564;
  piVar2[8] = iVar3 + DAT_001af568;
  piVar2[9] = iVar3 + DAT_001af56c;
  piVar2[10] = iVar3 + DAT_001af570;
  piVar2[0xc] = DAT_001af574;
  piVar2[0xb] = local_18;
  piVar2[0xe] = 0;
  piVar2[0x10] = 0;
  piVar2[0xd] = 0;
  piVar2[0xf] = 0;
  piVar2[0x11] = 0;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0x54;
  param_1[1] = (int)piVar2;
  __s = getenv((char *)(iVar3 + iVar1));
  if (__s != (char *)0x0) {
    local_11 = 'x';
    iVar3 = sscanf(__s,(char *)(iVar3 + DAT_001af578),&local_18,&local_11);
    if (0 < iVar3) {
      if ((local_11 == 'M') || (local_11 == 'm')) {
        local_18 = local_18 * 1000;
      }
      piVar2[0xb] = local_18 * 1000;
    }
  }
  return;
}


