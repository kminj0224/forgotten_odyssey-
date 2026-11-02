/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194f00  Symbol: FUN_00194f00 */

void FUN_00194f00(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
    iVar1 = 0;
    iVar3 = 0;
  }
  else {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    if ((1 < (uint)(param_1[7] + DAT_00194f64)) ||
       (iVar3 = iVar2, 0xf8 < (uint)((int)param_1 + (-1 - iVar2)))) {
      iVar3 = 0;
    }
  }
  FUN_001a5374(0,iVar1,iVar2,iVar3,0,0x17,1,2,0,0,0,0,0,0,0,DAT_00194f60 + 0x194f0c + DAT_00194f68,
               param_2);
  return;
}


