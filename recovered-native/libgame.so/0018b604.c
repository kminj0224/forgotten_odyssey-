/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b604  Symbol: FUN_0018b604 */

int FUN_0018b604(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0018b650 + 0x18b60c;
  if (param_1 == 0) {
LAB_0018b64a:
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 2) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 != 0) {
        if ((*(int *)(iVar1 + 0x18) == 0) && (*(int *)(iVar1 + 4) - 3U < 2)) {
          iVar2 = *(int *)(iVar1 + 0x28);
          goto LAB_0018b63c;
        }
        iVar1 = FUN_0018b544(*(undefined4 *)(param_1 + 0x20),iVar1,1);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar2 = iVar2 + DAT_0018b654;
    }
    else {
      if (*(int *)(param_1 + 4) != 0x10) goto LAB_0018b64a;
      iVar2 = *(int *)(param_1 + 0x30);
    }
LAB_0018b63c:
    iVar2 = FUN_0019c904(iVar2);
  }
  return iVar2;
}


