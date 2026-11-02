/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001afc24  Symbol: jpeg_open_backing_store */

void jpeg_open_backing_store(int *param_1,int *param_2)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  
  pFVar2 = tmpfile();
  iVar3 = DAT_001afc6c;
  param_2[3] = (int)pFVar2;
  iVar1 = DAT_001afc7c;
  iVar3 = iVar3 + 0x1afc36;
  if (pFVar2 == (FILE *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x41;
    strncpy((char *)(*param_1 + 0x18),(char *)(iVar3 + iVar1),0x50);
    (**(code **)*param_1)(param_1);
  }
  *param_2 = iVar3 + DAT_001afc70;
  param_2[1] = iVar3 + DAT_001afc74;
  param_2[2] = iVar3 + DAT_001afc78;
  return;
}


