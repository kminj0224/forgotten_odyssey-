/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b5e98  Symbol: FUN_001b5e98 */

undefined4 FUN_001b5e98(byte **param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1[4];
  pbVar5 = *param_1;
  pbVar4 = param_1[1];
  if (piVar6[0x6d] == 0) {
    if ((int)param_3 < 0x19) {
      do {
        if (pbVar4 == (byte *)0x0) {
          iVar2 = (**(code **)(piVar6[6] + 0xc))(piVar6);
          if (iVar2 == 0) {
            return 0;
          }
          pbVar5 = *(byte **)piVar6[6];
          pbVar4 = ((byte **)piVar6[6])[1];
        }
        bVar1 = *pbVar5;
        pbVar4 = pbVar4 + -1;
        pbVar5 = pbVar5 + 1;
        if (bVar1 == 0xff) {
          do {
            while (pbVar4 != (byte *)0x0) {
              uVar3 = (uint)*pbVar5;
              pbVar4 = pbVar4 + -1;
              pbVar5 = pbVar5 + 1;
              if (uVar3 != 0xff) goto LAB_001b5f38;
            }
            iVar2 = (**(code **)(piVar6[6] + 0xc))(piVar6);
            if (iVar2 == 0) {
              return 0;
            }
            pbVar5 = *(byte **)piVar6[6];
            uVar3 = (uint)*pbVar5;
            pbVar4 = ((byte **)piVar6[6])[1] + -1;
            pbVar5 = pbVar5 + 1;
          } while (uVar3 == 0xff);
LAB_001b5f38:
          if (uVar3 != 0) {
            piVar6[0x6d] = uVar3;
            goto LAB_001b5f42;
          }
        }
        param_2 = (byte *)((uint)bVar1 | (int)param_2 << 8);
        param_3 = param_3 + 8;
      } while ((int)param_3 < 0x19);
    }
  }
  else {
LAB_001b5f42:
    if ((int)param_3 < param_4) {
      if (*(int *)(piVar6[0x74] + 0x24) == 0) {
        *(undefined4 *)(*piVar6 + 0x14) = 0x78;
        (**(code **)(*piVar6 + 4))(piVar6,0xffffffff);
        *(undefined4 *)(piVar6[0x74] + 0x24) = 1;
      }
      param_2 = (byte *)((int)param_2 << (0x19U - (int)param_3 & 0xff));
      param_3 = (byte *)0x19;
    }
  }
  *param_1 = pbVar5;
  param_1[1] = pbVar4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return 1;
}


