/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab0a8  Symbol: FUN_001ab0a8 */

undefined4 FUN_001ab0a8(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte **ppbVar5;
  byte *pbVar6;
  
  ppbVar5 = (byte **)param_1[6];
  pbVar6 = ppbVar5[1];
  pbVar4 = *ppbVar5;
  if (pbVar6 == (byte *)0x0) {
    iVar2 = (*(code *)ppbVar5[3])();
    if (iVar2 != 0) {
      pbVar4 = *ppbVar5;
      pbVar6 = ppbVar5[1];
      goto LAB_001ab0ba;
    }
LAB_001ab12e:
    uVar3 = 0;
  }
  else {
LAB_001ab0ba:
    bVar1 = *pbVar4;
    pbVar6 = pbVar6 + -1;
    pbVar4 = pbVar4 + 1;
    if (pbVar6 == (byte *)0x0) {
      iVar2 = (*(code *)ppbVar5[3])(param_1);
      if (iVar2 == 0) goto LAB_001ab12e;
      pbVar4 = *ppbVar5;
      pbVar6 = ppbVar5[1];
    }
    iVar2 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar4;
    *(undefined4 *)(*param_1 + 0x14) = 0x5d;
    *(int *)(*param_1 + 0x18) = param_1[0x6d];
    *(int *)(*param_1 + 0x1c) = iVar2;
    (**(code **)(*param_1 + 4))(param_1,1);
    *ppbVar5 = pbVar4 + 1;
    ppbVar5[1] = pbVar6 + -1;
    uVar3 = 1;
    if (0 < iVar2) {
      (**(code **)(param_1[6] + 0x10))(param_1,iVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}


