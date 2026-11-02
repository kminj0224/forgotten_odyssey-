/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001896e4  Symbol: FUN_001896e4 */

void FUN_001896e4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = DAT_00189724 + 0x1896ec;
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    param_1[1] = 0;
    if (param_1[3] == 2) {
      *param_1 = iVar2 + DAT_00189728;
    }
    else {
      if ((param_1[3] == 3) && (puVar3 = (undefined *)param_1[4], puVar3 != (undefined *)0x0)) {
        *param_1 = (int)puVar3;
        param_1[2] = param_1[2] + (iVar1 - (int)puVar3);
      }
      else {
        puVar3 = (undefined *)*param_1;
      }
      *puVar3 = 0;
    }
  }
  return;
}


