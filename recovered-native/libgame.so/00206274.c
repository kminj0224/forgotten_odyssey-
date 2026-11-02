/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206274  Symbol: FUN_00206274 */

int FUN_00206274(int *param_1,int *param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  pbVar3 = (byte *)param_1[2];
  pbVar4 = (byte *)param_1[3];
  *param_3 = 1;
  if (pbVar3 < pbVar4) {
    uVar1 = (uint)*pbVar3;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x24))();
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    pbVar3 = (byte *)param_1[2];
    pbVar4 = (byte *)param_1[3];
  }
  iVar6 = 0;
  do {
    iVar5 = (int)pbVar4 - (int)pbVar3;
    if (iVar5 < 2) {
      if ((undefined *)param_2[5] < (undefined *)param_2[6]) {
        *(undefined *)param_2[5] = (char)uVar1;
        param_2[5] = param_2[5] + 1;
      }
      else {
        iVar5 = (**(code **)(*param_2 + 0x34))(param_2);
        if (iVar5 == -1) goto LAB_00206378;
      }
      pbVar3 = (byte *)param_1[3];
      iVar6 = iVar6 + 1;
      if ((byte *)param_1[2] < pbVar3) {
        pbVar4 = (byte *)param_1[2] + 1;
        param_1[2] = (int)pbVar4;
      }
      else {
        iVar5 = (**(code **)(*param_1 + 0x28))(param_1);
        if (iVar5 == -1) {
          return iVar6;
        }
        pbVar4 = (byte *)param_1[2];
        pbVar3 = (byte *)param_1[3];
      }
      if (pbVar3 <= pbVar4) goto LAB_002062d8;
      uVar1 = (uint)*pbVar4;
    }
    else {
      iVar2 = (**(code **)(*param_2 + 0x30))(param_2,pbVar3,iVar5);
      param_1[2] = param_1[2] + iVar2;
      iVar6 = iVar6 + iVar2;
      if (iVar2 < iVar5) {
LAB_00206378:
        *param_3 = 0;
        return iVar6;
      }
LAB_002062d8:
      uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
    }
    if (uVar1 == 0xffffffff) {
      return iVar6;
    }
    pbVar3 = (byte *)param_1[2];
    pbVar4 = (byte *)param_1[3];
  } while( true );
}


