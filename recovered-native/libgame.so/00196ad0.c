/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196ad0  Symbol: FUN_00196ad0 */

void FUN_00196ad0(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  
  iVar6 = DAT_00196b50 + 0x196adc;
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    iVar4 = iVar6 + DAT_00196b54;
    iVar5 = iVar6 + DAT_00196b58;
    iVar7 = *param_2;
    param_2 = param_2 + 1;
    local_2c = 0;
    bVar2 = false;
    while (iVar7 != 0) {
      iVar8 = *param_2;
      if (iVar8 != 0) {
        iVar3 = FUN_0019c398(iVar7,iVar4);
        if ((iVar3 == 0) && (iVar3 = FUN_0019c398(iVar8,iVar6 + DAT_00196b5c), iVar3 == 0)) {
          bVar2 = true;
        }
        else {
          iVar7 = FUN_0019c398(iVar7,iVar5);
          if (iVar7 == 0) {
            local_2c = iVar8;
          }
        }
      }
      piVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar7 = *piVar1;
    }
    if ((local_2c != 0) && (bVar2)) {
      FUN_00195f94(param_1,local_2c);
    }
  }
  return;
}


