/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab134  Symbol: FUN_001ab134 */

undefined4 FUN_001ab134(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte **ppbVar6;
  
  ppbVar6 = (byte **)param_1[6];
  pbVar5 = *ppbVar6;
  pbVar4 = ppbVar6[1];
  do {
    while( true ) {
      if (pbVar4 == (byte *)0x0) {
        iVar2 = (*(code *)ppbVar6[3])(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        pbVar5 = *ppbVar6;
        pbVar4 = ppbVar6[1];
      }
      bVar1 = *pbVar5;
      pbVar4 = pbVar4 + -1;
      pbVar5 = pbVar5 + 1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x73] + 0x18) = *(int *)(param_1[0x73] + 0x18) + 1;
      *ppbVar6 = pbVar5;
      ppbVar6[1] = pbVar4;
    }
    do {
      while (pbVar4 != (byte *)0x0) {
        uVar3 = (uint)*pbVar5;
        pbVar4 = pbVar4 + -1;
        pbVar5 = pbVar5 + 1;
        if (uVar3 != 0xff) goto LAB_001ab1a4;
      }
      iVar2 = (*(code *)ppbVar6[3])(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = (uint)**ppbVar6;
      pbVar4 = ppbVar6[1] + -1;
      pbVar5 = *ppbVar6 + 1;
    } while (uVar3 == 0xff);
LAB_001ab1a4:
    if (uVar3 != 0) {
      if (*(int *)(param_1[0x73] + 0x18) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x77;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x73] + 0x18);
        *(uint *)(*param_1 + 0x1c) = uVar3;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        *(undefined4 *)(param_1[0x73] + 0x18) = 0;
      }
      param_1[0x6d] = uVar3;
      *ppbVar6 = pbVar5;
      ppbVar6[1] = pbVar4;
      return 1;
    }
    *(int *)(param_1[0x73] + 0x18) = *(int *)(param_1[0x73] + 0x18) + 2;
    *ppbVar6 = pbVar5;
    ppbVar6[1] = pbVar4;
  } while( true );
}


